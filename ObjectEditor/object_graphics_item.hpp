#pragma once

#include "point_graphics_item.hpp"

#include <QGraphicsItem>

namespace bh {

class ObjectGraphicsItem : public QGraphicsItem
{
public:
    ObjectGraphicsItem(QGraphicsItem* parent = nullptr);

    void addPointItem(const QPointF& point);
    int  type() const override;

private:
    std::vector<PointGraphicsItem*> points;

    QRectF boundingRect() const override;
    void   paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
};

} // namespace bh
