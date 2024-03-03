#include "main_window.hpp"
#include "point_graphics_item.hpp"
#include "test_rect_item.hpp"

#include <QGraphicsRectItem>
namespace bh {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    scene.setSceneRect({ -100, -100, 200, 200 });
    auto item = new TestRectItem{ { -100, -100, 200, 200 } };
    //item->setZValue(0);
    item->setPen(QPen { Qt::red });
    scene.addItem(item);
    ui.view->setScene(&scene);
    /*auto item = new PointGraphicsItem;
    scene.addItem(item);*/
}

}