#include "point_graphics_item.hpp"

#include <QPainter>

namespace bh {

QRectF PointGraphicsItem::boundingRect() const
{
    return { -size / 2., -size / 2. , size, size};
}

void PointGraphicsItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->drawEllipse(boundingRect());
}

}