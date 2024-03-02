#pragma once

#include "object_graphics_item.hpp"

namespace bh {

class PointGraphicsItem : public ObjectGraphicsItem
{
public:
    QRectF boundingRect() const override;
    void   paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;

    private:
    qreal size = 5.;
};

}