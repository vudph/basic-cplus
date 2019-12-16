#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QLabel;
class QLineEdit;
class QPushButton;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void BuildWindow();
    void DatabaseConnect();
    void DatabaseInit();
    void DatabasePopulate();

private slots:
    void OnInput();
    void OnSearchClicked();

private:
    QLineEdit * mInputText;
    QPushButton * mButtonSearch;
    QLabel * mOutputText;

};
#endif // MAINWINDOW_H
