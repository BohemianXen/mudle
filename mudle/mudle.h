#pragma once

#include <QtWidgets/QMainWindow>
#include <memory>
#include "ui_mudle.h"

class mudle : public QMainWindow
{
    Q_OBJECT

public:
    mudle(QWidget *parent = nullptr);
    // bool isCharValid(const char c, const int32_t charIdx) const;

private:

    enum LetterStatus_e
    {
        LETTER_NOT_GUESSED,
        LETTER_NOT_IN_WORD,
        LETTER_NOT_IN_POS,
        LETTER_IN_POS
    };

    std::string getWordOfTheDay(const int64_t seed) const;
    std::string& getLatestGuess() const;
    //LetterStatus_e getLetterStatus(const char letter, const int32_t pos) const;
   
    
    using GuessList = std::vector<std::string>;

    Ui::mudleClass ui;
    std::string wordOfTheDay{ "MUDLE" };
    std::unique_ptr<GuessList> guesses = std::make_unique<GuessList>();

private slots:
    void addLetterToGuess(const char c);
    void removeLetterFromGuess();
    void submitGuess();
};
