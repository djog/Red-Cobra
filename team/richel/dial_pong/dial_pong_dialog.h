#ifndef DIAL_PONG_DIALOG_H
#define DIAL_PONG_DIALOG_H

#include <QDialog>

namespace Ui {
  class dial_pong_dialog;
}

class dial_pong_dialog : public QDialog
{
  Q_OBJECT

public:
  explicit dial_pong_dialog(QWidget *parent = 0);
  ~dial_pong_dialog();
  void keyPressEvent(QKeyEvent *);

private:
  Ui::dial_pong_dialog *ui;

  double m_x;
  double m_y;
  double m_dx;
  double m_dy;

  void timerEvent(QTimerEvent *event);
};

#endif // DIAL_PONG_DIALOG_H
