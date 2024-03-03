#pragma once

#include <QGraphicsItem>

namespace bh {

class PointGraphicsItem : public QGraphicsItem
{
public:
    explicit PointGraphicsItem(QGraphicsItem* parent = nullptr);
    explicit PointGraphicsItem(const QPointF& point, QGraphicsItem* parent = nullptr);

    QRectF boundingRect() const override;
    void   paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;
    int    type() const override;

private:
    qreal size = 5.;
};

} // namespace bh