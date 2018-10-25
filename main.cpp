#include "widget.h"
#include <QApplication>
#include <QtWidgets>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");
    QPushButton* pcmdD = new QPushButton("D");

    QPushButton* Ok = new QPushButton("OK");
    QVBoxLayout* under = new QVBoxLayout;
    under->addWidget(Ok);
    Ok->setEnabled(false);
    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    QHBoxLayout* phbxLayout = new QHBoxLayout;
 //   phbxLayout->setContentsMargins(5, 5, 5, 5);
 //   phbxLayout->setSpacing(15);
    phbxLayout->addWidget(pcmdC);
    phbxLayout->addWidget(pcmdD);

    pvbxLayout->setMargin(5);
   pvbxLayout->setSpacing(15);
    pvbxLayout->addWidget(pcmdA);
    pvbxLayout->addWidget(pcmdB);
    pvbxLayout->addLayout(phbxLayout);
    pvbxLayout->addLayout(under);
    w.setLayout(pvbxLayout);
    //w.setLayout(under);
    w.setWindowTitle("test window");


    w.show();

    return a.exec();
}
