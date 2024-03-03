#include "object_view.hpp"

#include <QWheelEvent>

namespace bh {

    ObjectView::ObjectView(QWidget *parent) : QGraphicsView(parent)
{
}

    void ObjectView::wheelEvent(QWheelEvent *event)
{
    if (event->angleDelta().y() > 0) {
        scale(positiveFactor, positiveFactor);
    } else {
        scale(negativeFactor, negativeFactor);
    }
}

void ObjectView::mousePressEvent(QMouseEvent *event)
{
    int p = 4287;
    QGraphicsView::mousePressEvent(event);
}

void ObjectView::mouseMoveEvent(QMouseEvent *event)
{
}

void ObjectView::mouseReleaseEvent(QMouseEvent *event)
{
    QGraphicsView::mouseReleaseEvent(event);
}


} // namespace bh