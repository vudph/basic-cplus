#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include <QMainWindow>

#include <QtWidgets>
#include <QtSql>

#include "ui_bookwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class BookWindow; }
QT_END_NAMESPACE

class BookWindow : public QMainWindow
{
    Q_OBJECT

public:
    BookWindow();

private slots:
    void about();

    void on_yearEdit_valueChanged(const QString &arg1);

private:
    Ui::BookWindow ui;
    void showError(const QSqlError &err);
    QSqlRelationalTableModel *model;
    int authorIdx, genreIdx;

    void createMenuBar();
};
#endif // BOOKWINDOW_H
