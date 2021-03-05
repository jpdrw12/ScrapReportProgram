#include "dataview.h"
#include "connection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (!createConnection())
        return 1;
    DataView w;
    w.show();
    return a.exec();
}
