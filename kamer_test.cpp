#include "kamer_test.h"
#include "ui_kamer_test.h"
#include "hoofd_scherm.h"

kamer_kyrill::kamer_test(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_test),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_test::~kamer_test()
{
  delete ui;
}
