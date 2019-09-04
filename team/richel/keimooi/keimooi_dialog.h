#ifndef KEIMOOI_DIALOG_H
#define KEIMOOI_DIALOG_H

#include <QDialog>

namespace Ui {
  class keimooi_dialog;
}

class keimooi_dialog : public QDialog
{
  Q_OBJECT

public:
  explicit keimooi_dialog(QWidget *parent = 0);
  ~keimooi_dialog();

private slots:
  void on_button_woestijn_clicked();

  void on_button_horror_clicked();

private:
  Ui::keimooi_dialog *ui;
};

#endif // KEIMOOI_DIALOG_H
