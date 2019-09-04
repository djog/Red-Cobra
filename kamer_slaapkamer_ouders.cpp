#include "kamer_slaapkamer_ouders.h"
#include "ui_kamer_slaapkamer_ouders.h"
#include "hoofd_scherm.h"

kamer_slaapkamer_ouders::kamer_slaapkamer_ouders(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_slaapkamer_ouders),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_slaapkamer_ouders::~kamer_slaapkamer_ouders()
{
  delete ui;
}
