#pragma once

#include "ui_main_window.h"
#include "object_view.hpp"
#include "standard_scene.hpp"

#include <QtWidgets/QMainWindow>

namespace bh
{

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    Ui::MainWindowClass ui;
    ObjectView          view;
    StandardScene       scene;
};

}