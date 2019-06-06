#include "myitemdelegate.h"
#include<QPainter>
#include<QDebug>
#include<QMouseEvent>
#include<QStyledItemDelegate>
#include<QApplication>
#include<QPushButton>
#include<QAbstractButton>
MyItemDelegate::MyItemDelegate(QObject * parent):QItemDelegate(parent)
{
}

void MyItemDelegate::paint(QPainter * painter,const QStyleOptionViewItem & option,const QModelIndex & index) const
{
    QStyleOptionViewItemV4 opt = setOptions(index, option);
    const int& number = qvariant_cast<int>(index.data(Qt::UserRole));

    if(number==1)
    {
      //  qDebug()<<"ff";
        painter->save();
        QPen pen;
        pen.setWidth(1);
        pen.setColor(QColor(119,118,118));
        painter->setRenderHint(QPainter::Antialiasing,true);
        painter->setPen(pen);
        painter->setBrush(QColor(119,118,118));
        painter->drawRoundRect(QRect(opt.rect.topLeft(), QSize(wid, 40-1)),0,0);

    //    qDebug()<<opt.rect.topLeft();

        painter->restore();
    }

    const QString& pix = qvariant_cast<QString>(index.data(Qt::DisplayRole));
    QFont font("Helvetica [Cronyx]", 12);

  //  qDebug()<<wid;

    painter->setFont(font);
    QFontMetrics fontMetric(font);
    int textWidth=  fontMetric.width(pix);
    int textHeight=  fontMetric.height();

    QRect displayRect = QRect(opt.rect.topLeft()+QPoint((wid-textWidth)/2,(40-textHeight)/2),QSize(90,20));

    painter->drawText(displayRect, pix);



    QPixmap pix1;
    pix1.load(":/1.png");
    int pix1x=pix1.width();
   // int pix1y=pix1.height();

    QRect decorationRect = QRect(opt.rect.topLeft()+QPoint(wid-pix1x,9), QSize(20,20));


  // QRect a=visualRect ( const QModelIndex & index ) const = 0

   // qDebug()<<opt.rect.width()-pix1x-5<<(opt.rect.height()+pix1y)/2;

    painter->drawPixmap(decorationRect,pix1);


}

bool MyItemDelegate::editorEvent(QEvent * event,QAbstractItemModel * model,const QStyleOptionViewItem & option,const QModelIndex & index)
{

      if(event->type()==QEvent::MouseButtonPress)
        {
           emit selection();
          //qDebug()<<"dfadsf";
           model->setData(index, 1, Qt::UserRole);
        }
      return false;
}

void MyItemDelegate::setWidth(int width)
{
    wid=width;

}
