#pragma once

#include <QAbstractTableModel>

class ObjectsModel : public QAbstractTableModel
{
public:
    int rowCount(const QModelIndex& parent) const override;
    int columnCount(const QModelIndex& parent) const override;
    QVariant data(const QModelIndex& index, int role) const override;

    private:

};
