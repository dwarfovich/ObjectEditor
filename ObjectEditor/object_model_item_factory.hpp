#pragma once

#include "object_model_item.hpp"

#include <set>

namespace bh {

class ObjectModelItemFactory
{
public:
private:
    std::set<std::unique_ptr<ObjectModelItem>> items;
};

} // namespace bh