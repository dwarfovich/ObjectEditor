#include "test_rect_item.hpp"

#include <QGraphicsScene>
#include <QPainter>

TestRectItem::TestRectItem(const QRect& rect) : QGraphicsRectItem {rect}
{
    setAcceptedMouseButtons(Qt::NoButton);
    setEnabled(false);
}

QRectF TestRectItem::boundingRect() const
{
    return scene()->sceneRect();
}

void TestRectItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->setPen(pen());
    painter->drawRect(boundingRect());
}
