#include "kamer_soort.h"

#include <cassert>

std::string als_woord(const kamer_soort k) //!OCLINT dit is inderdaad een ingewikkelde functie
{
  switch (k)
  {
    case kamer_soort::daan: return "daan";
    case kamer_soort::garage: return "garage";
    case kamer_soort::hal:  return "hal";
    case kamer_soort::jasper: return "jasper";
    case kamer_soort::jesper: return "jesper";
    case kamer_soort::judith: return "judith";
    case kamer_soort::kyrill: return "kyrill";
    case kamer_soort::lab: return "lab";
    case kamer_soort::mees: return "mees";
    case kamer_soort::oliver: return "oliver";
    case kamer_soort::quinn: return "quinn";
    case kamer_soort::richel: return "richel";
    case kamer_soort::rohan: return "rohan";
    case kamer_soort::seny: return "seny";
    case kamer_soort::slaapkamer: return "slaapkamer";
    default:
      //Als je deze foutmelding krijgt, dan staat jouw nieuwe kamer
      //niet in het rijtje hierboven
      assert(k == kamer_soort::slaapkamer_ouders);
      return "slaapkamer_ouders";
  }
}

void test_kamer_soort()
{
  //Alle kamers van het huis bestaan
  {
    static_assert(static_cast<bool>(kamer_soort::garage), "");
    static_assert(static_cast<bool>(kamer_soort::hal), "");
    static_assert(static_cast<bool>(kamer_soort::lab), "");
    static_assert(static_cast<bool>(kamer_soort::slaapkamer), "");
    static_assert(static_cast<bool>(kamer_soort::slaapkamer_ouders), "");
  }
}
