#ifndef SIMPLEWINDOW_H
#define SIMPLEWINDOW_H

#include "Window.h"

class SimpleWindow : public Window {
public:
    void draw() override;
    std::string getDescription() override;
};

#endif // SIMPLEWINDOW_H
