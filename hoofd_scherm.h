#ifndef HOOFD_SCHERM_H
#define HOOFD_SCHERM_H

#include "kamer_soort.h"
#include "actie_soort.h"
#include "voorwerp_soort.h"

#include <vector>
#include <QDialog>

namespace Ui {
  class hoofd_scherm;
}

class hoofd_scherm : public QDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit hoofd_scherm(QWidget *parent = 0);
  ~hoofd_scherm();

  ///Heeft de speler een bepaald voorwerp in zijn/haar bezit?
  bool heeft_voorwerp(const voorwerp_soort /* soort */) const { return true; }

  ///Laat een tekst zien. Bijvoorbeeld, als een speler een deur wil pakken,
  ///laat dat in tekst zien dat dat niet kan
  void laat_tekst_zien(const QString & tekst);

  ///Lees de actie die de speler wil doen
  actie_soort lees_actie_soort() const;

  ///Ga naar een kamer
  void ga_naar(const kamer_soort kamer);

  ///De speler heeft een voorwerp gepakt
  ///en heeft nu dat voorwerp in bezit
  void voeg_voorwerp_toe(const voorwerp_soort voorwerp);

  ///De speler heeft een voorwerp verbruikt, weggegooid, etc.
  ///en dus niet meer in bezit
  void haal_voorwerp_weg(const voorwerp_soort voorwerp);

private slots:
  ///De speler speelt vals en teleporteert naar een kamer
  void on_box_kamer_valueChanged(int arg1);

private:
  Ui::hoofd_scherm *ui;

  ///Kamer waar de speler nu is
  kamer_soort m_kamer;

  ///Laat het scherm zien van de kamer waar de speler nu is
  void laat_kamer_zien();
};

#endif // HOOFD_SCHERM_H
