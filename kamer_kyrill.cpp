#include "kamer_kyrill.h"
#include "ui_kamer_kyrill.h"
#include "hoofd_scherm.h"

kamer_kyrill::kamer_kyrill(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_kyrill),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_kyrill::~kamer_kyrill()
{
  delete ui;
}
