#pragma once

#include <QGraphicsScene>

namespace bh
{
class ObjectGraphicsItem; 

class StandardScene : public QGraphicsScene
{
public:
    StandardScene();

    protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent);

    private:
    ObjectGraphicsItem* mainItem = nullptr;
};

}