#pragma once

#include <QGraphicsView>

namespace bh {

class ObjectView  : public QGraphicsView
{
    Q_OBJECT

public:
    ObjectView(QWidget *parent = nullptr);

    protected:
    void wheelEvent(QWheelEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    private:
    inline static const qreal positiveFactor = 1.1;
        inline static const qreal negativeFactor = 1. / positiveFactor;
};

}