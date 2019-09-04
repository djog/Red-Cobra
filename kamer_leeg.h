#ifndef  kamer_leeg_H
#define  kamer_leeg_H

#include <QWidget>

namespace Ui {
  class  kamer_leeg;
}

class hoofd_scherm;

class  kamer_leeg : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit  kamer_leeg(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~ kamer_leeg();

private slots:

  void on_knop_n_clicked();
  void on_knop_nw_clicked();

  void on_knop_o_clicked();



  void on_pushButton_clicked();

private:
  Ui:: kamer_leeg *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif //  kamer_leeg_H
