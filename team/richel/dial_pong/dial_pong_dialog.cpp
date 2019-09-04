#include "dial_pong_dialog.h"
#include "ui_dial_pong_dialog.h"
#include <QKeyEvent>

dial_pong_dialog::dial_pong_dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::dial_pong_dialog),
  m_x{0.0},
  m_y{0.0},
  m_dx{0.1},
  m_dy{0.1}
{
  ui->setupUi(this);
  startTimer(1);
}

dial_pong_dialog::~dial_pong_dialog()
{
  delete ui;
}

void dial_pong_dialog::keyPressEvent(QKeyEvent * e)
{
  if (e->key() == Qt::Key_Left)
  {
    const int x = ui->speler_boven->geometry().x();
    const int y = ui->speler_boven->geometry().y();
    const int w = ui->speler_boven->geometry().width();
    const int h = ui->speler_boven->geometry().height();
    ui->speler_boven->setGeometry(x - 10, y, w, h)  ;
  }
  if (e->key() == Qt::Key_Left)
  {
    const int x = ui->speler_boven->geometry().x();
    const int y = ui->speler_boven->geometry().y();
    const int w = ui->speler_boven->geometry().width();
    const int h = ui->speler_boven->geometry().height();
    ui->speler_boven->setGeometry(x - 10, y, w, h)  ;
  }
  if (e->key() == Qt::Key_Right)
  {
    const int x = ui->speler_boven->geometry().x();
    const int y = ui->speler_boven->geometry().y();
    const int w = ui->speler_boven->geometry().width();
    const int h = ui->speler_boven->geometry().height();
    ui->speler_boven->setGeometry(x + 10, y, w, h)  ;
  }
  if (e->key() == Qt::Key_A)
  {
    const int x = ui->speler_onder->geometry().x();
    const int y = ui->speler_onder->geometry().y();
    const int w = ui->speler_onder->geometry().width();
    const int h = ui->speler_onder->geometry().height();
    ui->speler_onder->setGeometry(x - 10, y, w, h)  ;
  }
  if (e->key() == Qt::Key_D)
  {
    const int x = ui->speler_onder->geometry().x();
    const int y = ui->speler_onder->geometry().y();
    const int w = ui->speler_onder->geometry().width();
    const int h = ui->speler_onder->geometry().height();
    ui->speler_onder->setGeometry(x + 10, y, w, h)  ;
  }
}


void dial_pong_dialog::timerEvent(QTimerEvent *event)
{
  m_x += m_dx;
  m_y += m_dy;
  if (m_x + ui->bal->geometry().width() > this->width()) m_dx = -std::abs(m_dx);
  if (m_x < 0) m_dx = std::abs(m_dx);
  if (m_y + ui->bal->geometry().height()  > this->height()) m_dy = -std::abs(m_dy);
  if (m_y < 0) m_dy = std::abs(m_dy);
  ui->bal->setGeometry(m_x, m_y, 100, 100);
}
