#include "bookwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(books1);
    QApplication a(argc, argv);
    BookWindow w;
    w.show();
    return a.exec();
}
