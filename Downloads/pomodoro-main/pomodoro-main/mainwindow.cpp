#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"
#include <QRandomGenerator>
#include<QTime>
#include "setting_pomodoro.h"//"

int count=0;
const char* pics[] = {
    ":/rec/undefined - Imgur(1).jpg",
    ":/rec/undefined - Imgur(2).jpg",
    ":/rec/undefined - Imgur(3).jpg",
    ":/rec/undefined - Imgur(4).jpg",
    ":/rec/undefined - Imgur(5).jpg",
    ":/rec/undefined - Imgur(6).jpg",
    ":/rec/undefined - Imgur.jpg"

};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setFixedSize(1366, 1440);  // Set width and height according to your needs

    int randomNumber = QRandomGenerator::global()->bounded(7);
    QString selectedPic = QString::fromUtf8(pics[randomNumber]);

    QPixmap pixmap(selectedPic);
    ui->label->setPixmap(pixmap);



    // Initialize variables and connections
    second = 0;
    minute=0;

    breakMinutes = 0;
    breakSeconds = 0;
    elapsedTime = 0;
    progress = 0;
    ui->progressBar->setValue(progress);
    timer1.setInterval(1000);
    timer2.setInterval(1000);

    // Connect timer signals to slots
    connect(&timer1, SIGNAL(timeout()), this, SLOT(updateTime()));
    connect(&timer2, SIGNAL(timeout()), this, SLOT(breakTime()));
    connect(ui->progressBar, &QProgressBar::valueChanged, this, &MainWindow::updateLabel);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::breakTime()
{
    breakSeconds = breakSeconds + 1;
    if (breakSeconds == 60) {
        breakMinutes += breakSeconds / 60;
        breakSeconds = breakSeconds % 60;
    }
    ui->break_sec->display(breakSeconds);
    ui->break_min->display(breakMinutes);

    if(breakMinutes==1 && breakSeconds==0)
    {
        updateLabel();
    }

    if (breakMinutes == 2) {
        breakMinutes = 0;
        breakSeconds = 0;
        timer2.stop();
        timer1.start();
    }
}

void MainWindow::updateTime()
{
    ++second;
    if (second == 60) {
        minute += second / 60;
        second = second % 60;
    }
    ui->pomo_sec->display(second);
    ui->pomo_min->display(minute);
    if (minute==1 && second==0){
        updateLabel();
    }

    if (minute == 2) {
        minute = 0;
        second = 0;
        progress+=10;
        ui->progressBar->setValue(progress);

        timer1.stop();
        timer2.start();
    }
}


// Assuming progressBar is the name of your QProgressBar and ui->label is the QLabel
// Connect the valueChanged signal to a custom slot (e.g., updateLabel)


// Slot function to update the QLabel with a new image
void MainWindow::updateLabel() {
    if (count <= 7) {
        QString selectedPic = QString::fromUtf8(pics[count]);
        QPixmap changedMap(selectedPic);

        QSize labelSize = ui->label->size();

        // Scale the image to fit within the QLabel while maintaining aspect ratio
        QPixmap scaledMap = changedMap.scaled(labelSize, Qt::KeepAspectRatio);

        ui->label->setPixmap(scaledMap);
        count++;
    } else {
        count=0;
    }
}


//void MainWindow::on_backChange_clicked()
//{
//if(count <= 7){
//    QString selectedPic = QString::fromUtf8(pics[count]);
//    QPixmap changedMap(selectedPic);

//    QSize labelSize = ui->label->size();

//    // Scale the image to fit within the QLabel while maintaining aspect ratio
//    QPixmap scaledMap = changedMap.scaled(labelSize, Qt::KeepAspectRatio);

//    ui->label->setPixmap(scaledMap);
//    count++;
//}
//else{
//    count = 0;
//}
//}

void MainWindow::on_pomoTimer_clicked()
{
    // Stop both timers before starting
    timer1.stop();
    timer2.stop();

    // Start the stopwatch when the push button is clicked
    timer1.start();
}

void MainWindow::on_change_pomodoro_timer_clicked()
{
    second_window =new setting_pomodoro(this);
    second_window ->show();
}

