#include "connection.h"
#include "table.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    if (!createConnection())
        return 1;
    Table w;
    w.show();

    return app.exec();
}
