#include "kamer_jasper.h"
#include "ui_kamer_jasper.h"
#include "hoofd_scherm.h"

kamer_jasper::kamer_jasper(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_jasper),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  ui->label_5->setVisible(false);
}

kamer_jasper::~kamer_jasper()
{
  delete ui;
}

void kamer_jasper::on_pushButton_2_clicked()
{
  ui->progressBar_2->setValue(
    ui->progressBar_2->value() + 1
  );
}

void kamer_jasper::on_checkBox_clicked()
{
    ui->label_5->setVisible(true);}
