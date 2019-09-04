#include "kamer_richel.h"
#include "ui_kamer_richel.h"
#include "hoofd_scherm.h"
#include "voorwerp_soort.h"

#include <QMouseEvent>

kamer_richel::kamer_richel(
  hoofd_scherm * het_hoofd_scherm,
  QWidget *parent
) : QWidget(parent),
    ui(new Ui::kamer_richel),
    m_hoofd_scherm{het_hoofd_scherm}
{
  ui->setupUi(this);
}

kamer_richel::~kamer_richel()
{
  delete ui;
}


void kamer_richel::mousePressEvent(QMouseEvent *event)
{
  //De machine links van de deur
  if (event->pos().x() > 300
    && event->pos().x() < 450
    && event->pos().y() > 230
    && event->pos().y() < 380
  )
  {
    if (m_hoofd_scherm->lees_actie_soort() == actie_soort::bekijk)
    {
      m_hoofd_scherm->laat_tekst_zien(
        "Dit is een machine. "
        "Geen idee wat 'ie doet."
      );
    }
    if (m_hoofd_scherm->lees_actie_soort() == actie_soort::pak)
    {
      m_hoofd_scherm->laat_tekst_zien(
        "De machine weegt ongeveer 314159265 kilo. "
        "Dat is voor jou net te zwaar om op te tillen. "
      );
    }
  }
  //De deur
  if (event->pos().x() > 500
    && event->pos().x() < 650
    && event->pos().y() > 100
    && event->pos().y() < 380
  )
  {
    if (m_hoofd_scherm->lees_actie_soort() == actie_soort::bekijk)
    {
      m_hoofd_scherm->laat_tekst_zien(
        "Dit is een deur. "
        "Het is een speciale deur, want dit is een laboratorium."
      );
    }
    if (m_hoofd_scherm->lees_actie_soort() == actie_soort::pak)
    {
      m_hoofd_scherm->laat_tekst_zien(
        "Je trekt en trekt... "
        "Nee, je kunt de deur niet pakken. "
      );
    }
  }
  // Het plaatje van de spiegel
  if (ui->spiegel->geometry().contains(event->pos()))
  {
    if (ui->spiegel->isVisible())
    {
      if (m_hoofd_scherm->lees_actie_soort() == actie_soort::bekijk)
      {
        m_hoofd_scherm->laat_tekst_zien(
          "Dit is een grote spiegel van 1 bij 1 meter. "
          "Hij hangt aan een haakje. "
        );
      }
      if (m_hoofd_scherm->lees_actie_soort() == actie_soort::pak)
      {
        m_hoofd_scherm->laat_tekst_zien(
          "Je pakt de spiegel en doet deze in je rugtas. "
          "Gelukkig heb je een grote rugtas. "
        );
        this->m_hoofd_scherm->voeg_voorwerp_toe(voorwerp_soort::spiegel);
        this->ui->spiegel->hide();
      }
    }
  }
}
