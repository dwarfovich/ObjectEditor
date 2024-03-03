#include "object_graphics_item.hpp"
#include "point_graphics_item.hpp"
#include "bh_graphics_item_type.h"

#include <QPainter>
#include <QGraphicsScene>

namespace bh {

    ObjectGraphicsItem::ObjectGraphicsItem(QGraphicsItem* parent)
{
        setFlag(QGraphicsItem::ItemIgnoresTransformations);
    }

void ObjectGraphicsItem::addPointItem(const QPointF& point)
{
    auto* item = new PointGraphicsItem { point, this };
    points.push_back(item);
}

int ObjectGraphicsItem::type() const
{
    return static_cast<std::underlying_type_t<GraphicsItemType>>(GraphicsItemType::Object);
}

QRectF ObjectGraphicsItem::boundingRect() const
{
    if (points.empty()) {
    return {-10,-10,20,20};
    } else {
        return childrenBoundingRect();
    }
}

void ObjectGraphicsItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->drawLine(x(), y() - 10, x(), y() + 10);
    painter->drawLine(x() - 10, y(), x() + 10, y());
}

}
