#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTimer>
#include "setting_pomodoro.h" //"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
//    void on_backChange_clicked();
     void updateLabel();
private slots:
    void on_pomoTimer_clicked();
    void updateTime();
    void breakTime();


    void on_change_pomodoro_timer_clicked();

private:
    Ui::MainWindow *ui;

    setting_pomodoro *second_window;


    QTimer timer1,timer2;
    int newValue;
    short int minute;
    short int second;
    int breakMinutes;
    int breakSeconds;
    int elapsedTime;
    int progress;
    QTimer *breakTimer;
    bool pauser;

};
#endif // MAINWINDOW_H
