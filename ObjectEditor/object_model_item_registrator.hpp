#pragma once

#include "object_model_item.hpp"

#include <memory>
#include <unordered_set>

namespace bh {

class ObjectModelItemRegistartor
{
public:
    using RegisteredItems = std::unordered_set<std::unique_ptr<ObjectModelItem>>;

    static bool                   registerItem(std::unique_ptr<ObjectModelItem> item);
    static const RegisteredItems& registeredItems();
    static RegisteredItems&& takeItems();

    private: // methods
    static ObjectModelItemRegistartor& instance();
    ObjectModelItemRegistartor() = default;

private: // data
    RegisteredItems items;
};

} // namespace bh