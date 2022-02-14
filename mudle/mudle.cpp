#include <algorithm>
#include <iostream>
#include "mudle.h"

mudle::mudle(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->wordOfTheDay.reserve(this->ui.guessesGridLayout->rowCount());
    this->wordOfTheDay = getWordOfTheDay(0);
    std::cout << this->wordOfTheDay.capacity() << "\n";
    this->guesses->push_back("");
    this->ui.lineEdit->setFocus();
    
    QObject::connect(this->ui.enterGuessButton, &QPushButton::clicked, this, &mudle::submitGuess);

    for (int32_t i = 0; i < this->ui.guessesGridLayout->rowCount(); ++i)
    {
        for (int32_t j = 0; j < this->ui.guessesGridLayout->columnCount(); ++j)
        {
            QLineEdit* const pLineEdit = dynamic_cast<QLineEdit*>(this->ui.guessesGridLayout->itemAtPosition(i, j)->widget());
            if (pLineEdit)
            {
                QObject::connect(pLineEdit, &QLineEdit::textChanged,
                    [=](const QString& newLetterStr) {
                        (newLetterStr.size() > 0) ?
                            this->addLetterToGuess(newLetterStr[0].toLatin1())
                            : this->removeLetterFromGuess();
                    }
                );
            }
        }
    }
}

std::string mudle::getWordOfTheDay(const int64_t seed) const
{
    std::string wotd("MUDLE");
    (void)std::transform(wotd.begin(), wotd.end(), wotd.begin(), ::toupper);
    return wotd;
}

std::string& mudle::getLatestGuess() const
{
    return this->guesses->back();
}

void mudle::addLetterToGuess(const char c)
{
    bool enableEnterGuessButton = false;
    auto& latestGuess = getLatestGuess();

    if ((latestGuess.size() <= static_cast<size_t>(this->ui.guessesGridLayout->rowCount())))
    {
        latestGuess.push_back(c);
        std::cout << "updated guess " << this->guesses->back() << "\n";
        enableEnterGuessButton = latestGuess.size() == this->wordOfTheDay.size();

        if (!enableEnterGuessButton)
        {
            this->focusNextChild();
        }
       
    }

    if (this->ui.enterGuessButton->isEnabled() != enableEnterGuessButton)
    {
        this->ui.enterGuessButton->setEnabled(enableEnterGuessButton);
    }
}

void mudle::removeLetterFromGuess()
{
    std::string& latestGuess = this->getLatestGuess();

    if (latestGuess.size() > 0)
    {
        latestGuess.pop_back();
    }

    if (this->ui.enterGuessButton->isEnabled())
    {
        this->ui.enterGuessButton->setEnabled(false);
    }
}

void mudle::submitGuess()
{
    if (this->guesses->size() <= this->ui.guessesGridLayout->rowCount())
    {
        this->ui.enterGuessButton->setEnabled(false);

        if (0 == getLatestGuess().compare(this->wordOfTheDay))
        {
            std::cout << "You Win!" << "\n";
            this->guesses->push_back(""); // TODO (BohemianXen) remove
        }
        else
        {
            this->guesses->push_back("");
            if (this->guesses->size() > this->ui.guessesGridLayout->rowCount())
            {
                std::cout << "You Lose!" << "\n";
            }
        }

        this->focusNextChild();
        
    }
}
