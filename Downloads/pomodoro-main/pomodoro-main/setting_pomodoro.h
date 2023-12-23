#ifndef SETTING_POMODORO_H
#define SETTING_POMODORO_H

#include <QDialog>

namespace Ui {
class setting_pomodoro;
}

class setting_pomodoro : public QDialog
{
    Q_OBJECT

public:
    explicit setting_pomodoro(QWidget *parent = nullptr);
    ~setting_pomodoro();

private:
    Ui::setting_pomodoro *ui;
};

#endif // SETTING_POMODORO_H
