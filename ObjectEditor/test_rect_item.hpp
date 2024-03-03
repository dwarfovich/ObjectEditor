#pragma once

#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class TestRectItem : public QGraphicsRectItem
{
public:
    TestRectItem(const QRect& rect = {});

    QRectF boundingRect() const override;
    void   paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;

    protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override { event->ignore(); };

    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override { event->ignore(); };
};
