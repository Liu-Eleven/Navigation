#ifndef MYSTANDARDITEMMODEL_H
#define MYSTANDARDITEMMODEL_H

#include <QWidget>
#include <QStandardItemModel>
#include <QStringListModel>
class MyStandardItemModel:public QStandardItemModel
{
    Q_OBJECT

public:
    MyStandardItemModel(QObject *parent = 0);
    virtual ~ MyStandardItemModel();
    QVariant data(const QModelIndex & index,int role=Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value,int role);
   // void updateModel();
    void setStringList(QStringList list);
   void noSelection();
private:
   int flag[30];
   QStringList stringlist;



};

#endif // MYSTANDARDITEMMODEL_H




