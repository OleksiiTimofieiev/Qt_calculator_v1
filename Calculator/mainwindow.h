#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void    digits_numbers(void);

    void on_pushButton_dot_clicked();
    void operations(void);
    void on_pushButton_clear_clicked();
    void on_pushButton_equals_clicked();
    void math_operations(void);
};

#endif // MAINWINDOW_H
