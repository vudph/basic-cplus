#ifndef HORIZONTALSCROLLBARDECORATOR_H
#define HORIZONTALSCROLLBARDECORATOR_H

#include "WindowDecorator.h"

class HorizontalScrollBarDecorator : public WindowDecorator {
public:
    HorizontalScrollBarDecorator(Window *window);
    void draw() override;
    std::string getDescription() override;
    void drawHorizontalScrollBar();
};

#endif // HORIZONTALSCROLLBARDECORATOR_H
