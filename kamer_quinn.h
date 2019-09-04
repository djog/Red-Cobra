#ifndef KAMER_QUINN_H
#define KAMER_QUINN_H

#include <QWidget>

namespace Ui {
  class kamer_quinn;
}

class hoofd_scherm;

class kamer_quinn : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_quinn(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_quinn();

private slots:

  void on_knop_n_clicked();
  void on_knop_nw_clicked();

  void on_knop_o_clicked();



  void on_pushButton_clicked();

private:
  Ui::kamer_quinn *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_QUINN_H
