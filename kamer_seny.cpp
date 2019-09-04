#include "kamer_seny.h"
#include "ui_kamer_seny.h"
#include "hoofd_scherm.h"

kamer_seny::kamer_seny(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_seny),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_seny::~kamer_seny()
{
  delete ui;
}
