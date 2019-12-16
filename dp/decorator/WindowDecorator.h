#ifndef WINDOWDECORATOR_H
#define WINDOWDECORATOR_H

#include "Window.h"

class WindowDecorator : public Window {
public:
    WindowDecorator(Window *window);
    virtual void draw() override;
    virtual std::string getDescription() override;

private:
    Window *m_windowToBeDecorated;
};

#endif // WINDOWDECORATOR_H
