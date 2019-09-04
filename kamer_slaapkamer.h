#ifndef KAMER_SLAAPKAMER_H
#define KAMER_SLAAPKAMER_H

#include <QWidget>

namespace Ui {
  class kamer_slaapkamer;
}

class hoofd_scherm;

class kamer_slaapkamer : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_slaapkamer(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_slaapkamer();

private slots:

private:
  Ui::kamer_slaapkamer *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_SLAAPKAMER_H
