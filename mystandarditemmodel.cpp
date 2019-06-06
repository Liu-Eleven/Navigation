#include "mystandarditemmodel.h"
#include <QDebug>

MyStandardItemModel::MyStandardItemModel(QObject * parent)
      :QStandardItemModel(parent)
{
    for(int i=0;i<30;i++)
    {
        flag[i]=0;
    }

    setRowCount(0);
    setColumnCount(0);
}


MyStandardItemModel::~ MyStandardItemModel()
{

}

QVariant MyStandardItemModel::data(const QModelIndex & index,int role) const
{
      if (!index.isValid())
          return QVariant();
        if(role == Qt::DisplayRole)
          {
            return stringlist.at(index.row());
          }
        if(role == Qt::UserRole)
          {
            return flag[index.row()];
          }

     return QVariant();
}

bool MyStandardItemModel::setData(const QModelIndex &index,const QVariant &value,int role)
{

          if (index.isValid() && role == Qt::UserRole)
           {

              flag[index.row()]=value.toInt();

              emit dataChanged(index, index);

              return true;
            }
        return false;
 }

/*void MyStandardItemModel::updateModel()
{
   QModelIndex index=QModelIndex().child (num,0);
   flag[num]=0;
   emit dataChanged(index, index);
   qDebug()<<"aa";
}*/

void MyStandardItemModel::setStringList(QStringList list)
{
    stringlist=list;
}

void MyStandardItemModel::noSelection()
{
    QModelIndex index=QModelIndex().child(0,0);
   // qDebug()<<"clear";
    for(int i=0;i<30;i++)
    {
        flag[i]=0;

        emit dataChanged(index, index);
    }


}
