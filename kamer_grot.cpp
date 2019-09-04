#include "kamer_grot.h"
#include "ui_kamer_grot.h"
#include "hoofd_scherm.h"
#include "voorwerp_soort.h"

kamer_grot::kamer_grot(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_grot),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_grot::~kamer_grot()
{
  delete ui;
}

void kamer_grot::on_knop_zo_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::quinn);
}

void kamer_grot::on_knop_n_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::jasper);
}

void kamer_grot::on_knop_w_clicked()
{
  m_hoofd_scherm->ga_naar(kamer_soort::rohan);
}

void kamer_grot::on_knop_spiegel_clicked()
{
  this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::spiegel);
  ui->knop_spiegel->hide();
}
