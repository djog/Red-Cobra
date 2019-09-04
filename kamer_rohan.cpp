#include "kamer_rohan.h"
#include "ui_kamer_rohan.h"
#include "hoofd_scherm.h"

kamer_rohan::kamer_rohan(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_rohan),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  this->ui->knop_n->setHidden(true);
  this->ui->knop_w->setHidden(true);
  this->ui->knop_o->setHidden(true);


}

kamer_rohan::~kamer_rohan()
{
  delete ui;
}



void kamer_rohan::on_pushButton_6_clicked()
{
    this->ui->knop_n->setVisible(true);
    this->ui->knop_w->setVisible(true);
    this->ui->knop_o->setVisible(true);
    this->ui->knop1->setText("goed");
    this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::sleutel);
}

void kamer_rohan::on_pushButton_7_clicked()
{
  this->ui->knop1->setText("fout");
    m_hoofd_scherm->ga_naar(kamer_soort::quinn);
}


void kamer_rohan::on_pushButton_8_clicked()
{
   this->ui->knop1->setText("fout");
}

void kamer_rohan::on_knop_o_clicked()
{
 m_hoofd_scherm->ga_naar(kamer_soort::richel);
}

void kamer_rohan::on_knop_w_clicked()
{
     m_hoofd_scherm->ga_naar(kamer_soort::daan);
}

void kamer_rohan::on_knop_n_clicked()
{
     m_hoofd_scherm->ga_naar(kamer_soort::seny);
}


