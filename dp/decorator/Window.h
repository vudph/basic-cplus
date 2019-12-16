#ifndef WINDOW_H
#define WINDOW_H

#include <string>

class Window {
public:
    virtual void draw() = 0;
    virtual std::string getDescription() = 0;
    virtual ~Window();
};

#endif // WINDOW_H
