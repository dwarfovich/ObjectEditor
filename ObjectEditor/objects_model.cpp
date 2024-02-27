#include "objects_model.hpp"

int ObjectsModel::rowCount(const QModelIndex& parent) const
{
    return Q_INVOKABLE int();
}

int ObjectsModel::columnCount(const QModelIndex& parent) const
{
    return Q_INVOKABLE int();
}

QVariant ObjectsModel::data(const QModelIndex& index, int role) const
{
    return Q_INVOKABLE QVariant();
}
