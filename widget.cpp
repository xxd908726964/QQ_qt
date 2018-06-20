#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QTextCharFormat>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //    font_1.setFamily("黑体");
    //   font_1.setPointSize(18);

    //ui->textEdit->setFont(font_1);

}

Widget::~Widget()
{
    delete ui;
}






void Widget::on_pushButton_clicked()
{
    if(!ui->textEdit->toPlainText().size())return;


    int size = font_1.pointSize();

    QString strMsg(ui->textEdit->toPlainText());
    QString face(font_1.family());

    QString strContent = QString("<p><span style=\"%2\"><font face=\"%3\" >%4</font></p>").arg(size).arg(col).arg(face).arg(strMsg);
    qDebug()<<size;
    qDebug()<<col;
    qDebug()<<face;
    qDebug()<<strMsg;

    ui->textEdit_2->append(strContent);



    ui->textEdit->clear();
}

void Widget::on_pushButton_2_clicked()
{
    bool ok;
    font_1=QFontDialog::getFont(&ok,QFont("黑体",14),this);
qDebug()<<font_1<<font_1.pointSize();
}

void Widget::on_pushButton_3_clicked()
{

    col=QString("color:")+ QColorDialog::getColor(QColor("black"),this).name();



}
