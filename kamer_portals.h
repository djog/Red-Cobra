#ifndef KAMER_portals_H
#define KAMER_portals_H

#include <QWidget>

namespace Ui {
  class kamer_portals;
}

class hoofd_scherm;

class kamer_portals : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_portals(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_portals();

private slots:

  void on_knop_n_clicked();
  void on_knop_nw_clicked();

  void on_knop_o_clicked();



  void on_pushButton_clicked();

private:
  Ui::kamer_portals *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_portals_H
