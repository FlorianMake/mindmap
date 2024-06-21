#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

class QPushButton;
class QLayout;
class QWidget;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow();

public slots:
    void onOkButtonClick();


private:
    QWidget *m_central;
    QPushButton *m_okTestButton;
    QLayout *m_layout;
};

#endif // MAINWINDOW_HPP
