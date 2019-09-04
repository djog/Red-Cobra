#ifndef KAMER_KYRILL_H
#define KAMER_KYRILL_H

#include <QWidget>

namespace Ui {
  class kamer_kyrill;
}

class hoofd_scherm;

class kamer_kyrill : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_kyrill(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_kyrill();

private slots:

private:
  Ui::kamer_kyrill *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_KYRILL_H
