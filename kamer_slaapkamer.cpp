#include "kamer_slaapkamer.h"
#include "ui_kamer_slaapkamer.h"
#include "hoofd_scherm.h"

kamer_slaapkamer::kamer_slaapkamer(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_slaapkamer),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_slaapkamer::~kamer_slaapkamer()
{
  delete ui;
}
