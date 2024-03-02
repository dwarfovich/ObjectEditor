#include "object_model_item_registrator.hpp"

namespace bh {

bool ObjectModelItemRegistartor::registerItem(std::unique_ptr<ObjectModelItem> item)
{
    const auto inserted = instance().items.insert(std::move(item));

    return inserted.second;
}

auto ObjectModelItemRegistartor::registeredItems() -> const RegisteredItems&
{
    return instance().items;
}

 auto ObjectModelItemRegistartor::takeItems() -> RegisteredItems&&
{
    return std::move(instance().items);
}

ObjectModelItemRegistartor& ObjectModelItemRegistartor::instance()
{
    static ObjectModelItemRegistartor registrator;

    return registrator;
}

}