#include <QApplication>
#include "mylistview.h"
#include "navigation.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Navigation w;
    QIcon icon= QIcon(":/button.png");

    QStringList list;
    list<<"emma"<<"karl"<<"jame";

    QStringList list1;
    list1<<"abc"<<"sun"<<"moon"<<"wind";

    QStringList list2;
    list2<<"edu"<<"jack";

    w.addNavigationBar("pushbutton1",icon,list);
    w.addNavigationBar("pushbutton2",icon,list1);
    w.addNavigationBar("pushbutton3",icon,list2);
    w.addVerticalSpacer();
    w.show();
    w.resize(250,600);
    return a.exec();
}
