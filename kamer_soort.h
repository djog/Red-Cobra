#ifndef KAMER_SOORT_H
#define KAMER_SOORT_H

#include <string>

/// De soorten kamers.
/// Kamers met de naam van een programmeur zijn oefenkamers
///
/// Kamers moeten op alfabet staan
enum class kamer_soort
{
  daan,
  garage,
  hal,
  jasper,
  jesper,
  judith,
  kyrill,
  lab,
  mees,
  oliver,
  quinn,
  richel,
  rohan,
  seny,
  slaapkamer,
  slaapkamer_ouders
};

///Vertaal de kamer_soort naar een woord
std::string als_woord(const kamer_soort k);

void test_kamer_soort();

#endif // KAMER_SOORT_H
