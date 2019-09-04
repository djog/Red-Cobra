#include "keimooi_dialog.h"
#include "ui_keimooi_dialog.h"

keimooi_dialog::keimooi_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::keimooi_dialog)
{
  ui->setupUi(this);
}

keimooi_dialog::~keimooi_dialog()
{
  delete ui;
}

void keimooi_dialog::on_button_woestijn_clicked()
{
  this->setStyleSheet(
    "QDialog {\n"
    "  background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0  #ffb, stop: 1 #fbb);\n"
    "  border: 1px solid black\n"
    "}\n"
    "\n"
    "QWidget {\n"
    "  font: bold huge monospace;\n"
    "  color: blak;\n"
    "  background-color: qlineargradient(x1: 0, y1: 0, x2: 1, y2: 1, stop: 0  #ffb, stop: 1 #fbb);\n"
    "  border: 1px solid black\n"
    "}\n"
  );
}

void keimooi_dialog::on_button_horror_clicked()
{
  this->setStyleSheet(
    "QDialog {\n"
    "  background-color: black;\n"
    "  border: 1px solid red\n"
    "}\n"
    "\n"
    "QWidget {\n"
    "  font: bold huge monospace;\n"
    "  color: white;\n"
    "  background-color: black;\n"
    "  border: 2px solid red\n"
    "}\n"
  );
}
