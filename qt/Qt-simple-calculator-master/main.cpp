//
// Created by Bychin on 17.11.2017.
//

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("logo.png"));

    MainWindow window;
    window.show();

    return a.exec();
}
