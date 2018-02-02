#include <QCoreApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    printf("Available styles:\n %s\n",QStyleFactory::keys().join("\n ").toUtf8().constData());

    return a.exec();
}
