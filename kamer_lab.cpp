#include "kamer_lab.h"
#include "ui_kamer_lab.h"
#include "hoofd_scherm.h"

kamer_lab::kamer_lab(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_lab),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_lab::~kamer_lab()
{
  delete ui;
}
