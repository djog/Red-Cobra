#include "dial_pong_dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  dial_pong_dialog w;
  w.show();

  return a.exec();
}
