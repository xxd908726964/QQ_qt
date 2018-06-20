#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QFontDialog>
#include<QColorDialog>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;

    QFont font_1;
   QString col="red";

};

#endif // WIDGET_H
