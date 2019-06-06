#include "mylistview.h"
#include <QDebug>

MyListView::MyListView(QWidget * parent):QListView(parent)
{
    resize(125,150);
    setGridSize(QSize(100,50));
    string<<"1"<<"2"<<"3";
    model = new QStringListModel;
    model->setStringList(string);
    this->setModel(model);

  //  setLayoutMode(Batched);

    delegate=new MyItemDelegate;
    this->setItemDelegate(delegate);
    connect(delegate,SIGNAL(ling(QModelIndex)),
                     this,  SLOT(ling1(QModelIndex)));
}


MyListView::~ MyListView()
{

}

void MyListView::ling1(QModelIndex index)
{
    qDebug()<<"fadsf";

}

