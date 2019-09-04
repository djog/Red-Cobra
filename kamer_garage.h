#ifndef KAMER_GARAGE_H
#define KAMER_GARAGE_H

#include <QWidget>

namespace Ui {
  class kamer_garage;
}

class hoofd_scherm;

class kamer_garage : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_garage(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_garage();

private slots:

private:
  Ui::kamer_garage *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_garage_H
