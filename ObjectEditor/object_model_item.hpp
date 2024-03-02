#pragma once

#include "object_graphics_item.hpp"

#include <QString>

#include <memory>

namespace bh {

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