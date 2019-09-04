#include "kamer_garage.h"
#include "ui_kamer_garage.h"
#include "hoofd_scherm.h"

kamer_garage::kamer_garage(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_garage),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_garage::~kamer_garage()
{
  delete ui;
}
