#ifndef KAMER_lab_H
#define KAMER_lab_H

#include <QWidget>

namespace Ui {
  class kamer_lab;
}

class hoofd_scherm;

class kamer_lab : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_lab(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_lab();

private slots:

private:
  Ui::kamer_lab *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_lab_H
