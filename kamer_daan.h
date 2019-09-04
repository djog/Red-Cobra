#ifndef KAMER_DAAN_H
#define KAMER_DAAN_H

#include <QWidget>

namespace Ui {
  class kamer_daan;
}

class hoofd_scherm;

class kamer_daan : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_daan(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_daan();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
  Ui::kamer_daan *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_DAAN_H
