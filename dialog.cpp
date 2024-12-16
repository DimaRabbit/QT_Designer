#include "dialog.h"
#include "ui_dialog.h"

#include<QDialogButtonBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox, &QDialogButtonBox::clicked,  [&](){ ui->lineEdit->setText("Ok");});

}

Dialog::~Dialog()
{
    delete ui;
}
