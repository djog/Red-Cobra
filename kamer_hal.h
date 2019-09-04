#ifndef KAMER_HAL_H
#define KAMER_HAL_H

#include <QWidget>

namespace Ui {
  class kamer_hal;
}

class hoofd_scherm;

class kamer_hal : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_hal(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_hal();

private slots:


private:
  Ui::kamer_hal *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_hal_H
