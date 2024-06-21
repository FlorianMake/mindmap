#include "mainwindow.hpp"

#include <QPushButton>
#include <QLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow() {
    m_central = new QWidget(this);
    setCentralWidget(m_central);
    m_layout = new QHBoxLayout;
    m_central->setLayout(m_layout);

    m_okTestButton = new QPushButton;
    m_okTestButton->setText("ok");
    m_layout->addWidget(m_okTestButton);
    connect(m_okTestButton, &QPushButton::clicked, this, &MainWindow::onOkButtonClick);
}

void MainWindow::onOkButtonClick()
{

}
