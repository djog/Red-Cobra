#ifndef KAMER_SENY_H
#define KAMER_SENY_H

#include <QWidget>

namespace Ui {
  class kamer_seny;
}

class hoofd_scherm;

class kamer_seny : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_seny(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_seny();

private slots:

private:
  Ui::kamer_seny *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_SENY_H
