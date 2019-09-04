#include "kamer_daan.h"
#include "ui_kamer_daan.h"
#include "hoofd_scherm.h"

kamer_daan::kamer_daan(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_daan),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  this->ui->pushButton->setHidden(true);
}

kamer_daan::~kamer_daan()
{
  delete ui;
}

void kamer_daan::on_pushButton_clicked()
{
    m_hoofd_scherm->ga_naar(kamer_soort::quinn);
}

void kamer_daan::on_pushButton_2_clicked()
{
    this->ui->pushButton->setHidden(false);
}
