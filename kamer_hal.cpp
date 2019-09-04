#include "kamer_hal.h"
#include "ui_kamer_hal.h"
#include "hoofd_scherm.h"

kamer_hal::kamer_hal(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_hal),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_hal::~kamer_hal()
{
  delete ui;
}
