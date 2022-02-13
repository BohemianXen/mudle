#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mudle.h"

class mudle : public QMainWindow
{
    Q_OBJECT

public:
    mudle(QWidget *parent = nullptr);

private:
    Ui::mudleClass ui;
};
