#include "standard_scene.hpp"
#include "object_graphics_item.hpp"
#include "bh_graphics_item_type.h"

#include <QGraphicsSceneMouseEvent>
#include <QDebug>

namespace bh {
StandardScene::StandardScene() : mainItem { new ObjectGraphicsItem }
{
    addItem(mainItem);
    setBackgroundBrush(Qt::CrossPattern);
}
void StandardScene::mousePressEvent(QGraphicsSceneMouseEvent* mouseEvent)
{
    auto clickedItems = items(mouseEvent->scenePos());
    for (auto* item : clickedItems) {
        auto  t          = item->type();
        //auto* objectItem = qgraphicsitem_cast<ObjectGraphicsItem*>(item);
        auto* objectItem = dynamic_cast<ObjectGraphicsItem*>(item);
        if (objectItem) {
            //objectItem->addPointItem(mouseEvent->scenePos());
            qDebug() << "QRU" << t;
        } else {
            qDebug() << "NOT QRU" << t;
        }
    }
}

} // namespace bh