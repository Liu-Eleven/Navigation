#ifndef MYTABLEVIEW_H
#define MYTABLEVIEW_H
#include<QTableView>
#include<QItemDelegate>
#include<QStandardItemModel>
#include <QPixmap>
#include <QFocusEvent>
#include "mystandarditemmodel.h"
#include "myitemdelegate.h"


class MyTableView:public QTableView
{ Q_OBJECT
public:
   MyTableView(QWidget * parent=0);
    virtual ~ MyTableView(){}
   void setStringList(QStringList list);
   void setWidth(int width);
   void noSelection();
//protected:
  //  void mouseMoveEvent(QMouseEvent * event);
 //  void focusOutEvent(QFocusEvent *);

signals:
   void selectionClear();

private slots:
  //void getViewWidth();
  void selection();

private:
 //  void updateModel();
   void updateView();


private:
   MyItemDelegate * delegate;
   MyStandardItemModel * model;
};

#endif
