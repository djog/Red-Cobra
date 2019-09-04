#ifndef KAMER_TEST_H
#define KAMER_TEST_H

#include <QWidget>

namespace Ui {
  class kamer_test;
}

class hoofd_scherm;

class kamer_test : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_test(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_test();

private slots:

private:
  Ui::kamer_test *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_TEST_H
