#include "hoofd_scherm.h"
#include "voorwerp_soort.h"
#include <QApplication>
#include <iostream>

void test()
{
  test_voorwerp_soort();
}

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  #ifndef NDEBUG
  test();
  #else
  assert(1 == 2); //Release mode, alle asserts zijn dan weg
  #endif

  const std::vector<std::string> args(argv, argv + argc);
  if (std::count(std::begin(args), std::end(args), "--versie")) {
    std::cout << "Dit is de versie van vandaag\n";
    return 0; // 0: alles ging goed
  }

  hoofd_scherm w;
  w.show();

  return a.exec();
}
