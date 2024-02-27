#pragma once

#include <QString>

#include <memory>

namespace bh {

class ObjectGraphicsItem;

class ObjectModelItem
{
public:

private:
    std::unique_ptr<ObjectGraphicsItem> graphicsItem = nullptr;
    QString                             name;
    QString                             info;
    int                                 weight = 0;
};

} // namespace bh