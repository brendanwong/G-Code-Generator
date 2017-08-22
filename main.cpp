#include <QApplication>
#include "wizard.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Wizard wizardWindow;

    wizardWindow.setWindowFlags(Qt::FramelessWindowHint);
    wizardWindow.resize(660, 400);

    QPainterPath path;
    path.addRoundedRect(wizardWindow.rect(), 5, 5);
    QRegion mask = QRegion(path.toFillPolygon().toPolygon());
    wizardWindow.setMask(mask);

//    wizardWindow.setAttribute(Qt::WA_TranslucentBackground, true);

    wizardWindow.show();


    return app.exec();
}
