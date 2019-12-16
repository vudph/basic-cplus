#include "blackjack.h"

#include <QApplication>
#include <QTextStream>
#include <QInputDialog>
#include <QMessageBox>
#include "carddeck.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BlackJack w;
    w.show();

    return a.exec();
}
