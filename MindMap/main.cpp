#include <QApplication>
#include <QFile>

#include <mainwindow.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleFile( ":/styles.qss" );
    styleFile.open( QFile::ReadOnly );

    MainWindow w;
    a.setStyleSheet(QString::fromLatin1( styleFile.readAll() ));
    w.show();

    styleFile.close();

    return a.exec();
}
