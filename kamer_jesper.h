#ifndef KAMER_JESPER_H
#define KAMER_JESPER_H

#include <QWidget>

namespace Ui {
  class kamer_jesper;
}

class hoofd_scherm;

class kamer_jesper : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit kamer_jesper(hoofd_scherm * het_hoofd_scherm, QWidget *parent = 0);
  ~kamer_jesper();

private slots:
  void on_kast_clicked();
  void on_kist_clicked();
  void on_deur_clicked();
  void on_deur_knop_pressed();
  void on_deur_knop_released();
  void on_geheime_deur_clicked();

  void on_geheime_deur_2_clicked();

  void on_antwoord_op_vraag_accepted();

  void on_antwoord_op_vraag_rejected();

  void on_vraag_of_tak_terug_accepted();

private:
  Ui::kamer_jesper *ui;

  bool deur_open = false;
  int items_in_kist = 2;
  int kast_open = 2; // 1 = open 2 = dicht 3 = straks dicht 4 = straks open
  const int kast_open_x = 30;
  const int kast_open_y = 225;
  const int kast_dicht_x = 160;
  const int kast_dicht_y = 250;
  bool je_tak_ligt_er_nog = false;

  hoofd_scherm * const m_hoofd_scherm;
};

#endif // KAMER_JESPER_H
