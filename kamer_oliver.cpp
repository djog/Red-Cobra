#include "kamer_oliver.h"
#include "ui_kamer_oliver.h"
#include "hoofd_scherm.h"

kamer_oliver::kamer_oliver(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_oliver),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_oliver::~kamer_oliver()
{
  delete ui;
}

void kamer_oliver::on_checkBox_4_clicked()
{
    this->ui->knop_zw->setText("Doyou wish to enter the room of Quinn?");
}
