#include "kamer_mees.h"
#include "ui_kamer_mees.h"
#include "hoofd_scherm.h"

kamer_mees::kamer_mees(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_mees),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  this->ui->label_2->setVisible(false);

}

kamer_mees::~kamer_mees()
{
  delete ui;
}



void kamer_mees::on_pushButton_2_pressed()
{
  this->ui->label_2->setVisible(true);
}

void kamer_mees::on_pushButton_2_released()
{
   this->ui->label_2->setVisible(false);
}

void kamer_mees::on_pushButton_clicked()
{
    this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::steeksleutel);
    this->ui->pushButton->setDisabled(true);
}
