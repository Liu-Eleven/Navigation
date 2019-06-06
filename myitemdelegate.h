#ifndef MYITEMDELEGATE_H
#define MYITEMDELEGATE_H
#include<QItemDelegate>
#include<QTextCodec>
class MyItemDelegate:public QItemDelegate
{
  Q_OBJECT
public:
    MyItemDelegate(QObject * parent=0);
    virtual ~ MyItemDelegate(){}


    void paint(QPainter * painter,const QStyleOptionViewItem & option,const QModelIndex & index) const;
    bool editorEvent(QEvent * event,QAbstractItemModel * model,const QStyleOptionViewItem & option,const QModelIndex & index);
    void setWidth(int width);
signals:
  // void getViewWidth();
    void selection();

private:
    int wid;



};
#endif // MYITEMDELEGATE_H
