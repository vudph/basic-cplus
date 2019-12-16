#ifndef VERTICALSCROLLBARDECORATOR_H
#define VERTICALSCROLLBARDECORATOR_H

#include "WindowDecorator.h"

class VerticalScrollBarDecorator : public WindowDecorator {
public:
    VerticalScrollBarDecorator(Window *window);
    void draw() override;
    std::string getDescription() override;
    void drawVerticalScrollBar();
};

#endif // VERTICALSCROLLBARDECORATOR_H
