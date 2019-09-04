#ifndef KAMER_ROHAN_H
#define KAMER_ROHAN_H

#include <QWidget>

namespace Ui {
  class kamer_rohan;
}

class hoofd_scherm;

class kamer_rohan : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_rohan(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_rohan();

private slots:

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();


    void on_pushButton_8_clicked();

    void on_knop_o_clicked();

    void on_knop_w_clicked();

    void on_knop_n_clicked();



private:
  Ui::kamer_rohan *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_ROHAN_H
