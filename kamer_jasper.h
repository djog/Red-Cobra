#ifndef KAMER_JASPER_H
#define KAMER_JASPER_H

#include <QWidget>

namespace Ui {
  class kamer_jasper;
}

class hoofd_scherm;

class kamer_jasper : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_jasper(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_jasper();

private slots:

    void on_pushButton_2_clicked();

    void on_checkBox_clicked();

private:
  Ui::kamer_jasper *ui;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_JASPER_H
