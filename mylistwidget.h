#ifndef MYLISTWIDGET_H
#define MYLISTWIDGET_H
#include <QWidget>
#include <QListWidget>

class MyListWidget: public QListWidget
{

    Q_OBJECT

public:
    MyListWidget(QObject * parent=0);

};

#endif // MYLISTWIDGET_H
