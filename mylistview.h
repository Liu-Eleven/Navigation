#ifndef MYLISTVIEW_H
#define MYLISTVIEW_H
#include <QListView>
#include <QWidget>
#include "mystandarditemmodel.h"
#include  <QStringListModel>
#include "myitemdelegate.h"


class MyListView:public QListView
{

    Q_OBJECT
public:
    MyListView(QWidget * parent=0);
    virtual ~ MyListView();
private slots:
 void ling1( QModelIndex index);

private:
    QStringList string;
    QStringListModel *model;
    MyItemDelegate * delegate;
};


#endif // MYLISTVIEW_H
