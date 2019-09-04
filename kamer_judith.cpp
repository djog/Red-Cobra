#include "kamer_judith.h"
#include "ui_kamer_judith.h"
#include "hoofd_scherm.h"

kamer_judith::kamer_judith(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_judith),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
  this ->ui ->pushButton->setHidden(false);
}

kamer_judith::~kamer_judith()
{
  delete ui;
}

void kamer_judith::on_pushButton_clicked()
{
   this->ui->pushButton->setText("haal me uit deze computer!");
}

void kamer_judith::on_pushButton_2_clicked()
{
    this ->ui ->pushButton->setHidden(false);
}
