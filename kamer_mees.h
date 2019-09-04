#ifndef KAMER_MEES_H
#define KAMER_MEES_H

#include <QWidget>

namespace Ui {
  class kamer_mees;
}

class hoofd_scherm;

class kamer_mees : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_mees(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_mees();

private slots:

    void on_pushButton_2_pressed();

    void on_pushButton_2_released();

    void on_pushButton_clicked();

private:
  Ui::kamer_mees *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_MEES_H
