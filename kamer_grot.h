#ifndef KAMER_GROT_H
#define KAMER_GROT_H

#include <QWidget>

namespace Ui {
  class kamer_grot;
}

class hoofd_scherm;

class kamer_grot : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_grot(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_grot();

private slots:
  void on_knop_zo_clicked();

  void on_knop_n_clicked();

  void on_knop_w_clicked();

  void on_knop_spiegel_clicked();

private:
  Ui::kamer_grot *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_GROT_H
