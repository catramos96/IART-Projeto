#include "mainmenu.h"
#include "ui_mainmenu.h"

#include "dialogcreatestudent.h"
#include "dialogcreatecourse.h"
#include "dialogcurrentschedule.h"
#include "dialogeditexams.h"
#include "dialoggenerateschedule.h"
#include "dialoglistcourses.h"
#include "dialoglistenrollments.h"
#include "dialogliststatistics.h"
#include "dialogliststudents.h"

MainMenu::MainMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_pushButton_7_clicked()
{
    DialogCreateStudent dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_8_clicked()
{
    DialogListStudents dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_6_clicked()
{
    DialogListCourses dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_9_clicked()
{
    DialogCreateCourse dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_11_clicked()
{
    Dialoglistenrollments dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_10_clicked()
{
    DialogCurrentSchedule dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_12_clicked()
{
    DialogEditExams dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_13_clicked()
{
    DialogGenerateSchedule dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}

void MainMenu::on_pushButton_14_clicked()
{
    DialogListStatistics dialog;
    dialog.setUniversity(this->university);
    dialog.setModal(true);
    dialog.exec();
}