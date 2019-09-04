#ifndef KAMER_SLAAPKAMER_OUDERS_H
#define KAMER_SLAAPKAMER_OUDERS_H

#include <QWidget>

namespace Ui {
  class kamer_slaapkamer_ouders;
}

class hoofd_scherm;

class kamer_slaapkamer_ouders : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_slaapkamer_ouders(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_slaapkamer_ouders();

private slots:

private:
  Ui::kamer_slaapkamer_ouders *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_slaapkamer_ouders_H
