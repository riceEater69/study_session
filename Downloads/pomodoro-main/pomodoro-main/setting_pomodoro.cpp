#include "setting_pomodoro.h"
#include "ui_setting_pomodoro.h"

setting_pomodoro::setting_pomodoro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting_pomodoro)
{
    ui->setupUi(this);
}

setting_pomodoro::~setting_pomodoro()
{
    delete ui;
}
