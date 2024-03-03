#include "point_graphics_item.hpp"
#include "bh_graphics_item_type.h"

#include <QPainter>

namespace bh {

PointGraphicsItem::PointGraphicsItem(QGraphicsItem* parent) : QGraphicsItem {parent}
{
    setFlag(QGraphicsItem::ItemIgnoresTransformations);
}

PointGraphicsItem::PointGraphicsItem(const QPointF& point, QGraphicsItem* parent) : QGraphicsItem { parent }
{
    setFlag(QGraphicsItem::ItemIgnoresTransformations);
    setPos(point);
}

QRectF PointGraphicsItem::boundingRect() const
{
    return { -size / 2., -size / 2. , size, size};
}

void PointGraphicsItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->drawEllipse(boundingRect());
}

int PointGraphicsItem::type() const
{
    return static_cast<std::underlying_type_t<GraphicsItemType>>(GraphicsItemType::Point);
}

}