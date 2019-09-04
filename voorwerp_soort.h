#ifndef VOORWERP_SOORT_H
#define VOORWERP_SOORT_H

#include <string>

///De soorten voorwerpen
///(ik schrijf expres niet 'de voorwerpen', want dat is iets anders)
enum class voorwerp_soort
{
  pistool,
  sleutel,
  spiegel,
  tak,
  steeksleutel
};

///Maak een woord van een voorwerp,
///bijvoorbeeld voorwerp_soort::spiegel wordt het woord 'spiegel'
std::string als_woord(const voorwerp_soort voorwerp);

///Test de functies die met voorwerp_soort te maken hebben
void test_voorwerp_soort();

#endif // VOORWERP_SOORT_H
