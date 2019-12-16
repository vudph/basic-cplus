#ifndef DRAWCANVAS_H
#define DRAWCANVAS_H
#include "DrawStrategy.h"

class DrawCanvas {
 public:
    DrawCanvas();
    DrawCanvas(DrawStrategy* strategy);
    void setDrawingStrategy(DrawStrategy* strategy);
    void draw();

 private:
    DrawStrategy *m_strategy;
};

#endif // DRAWCANVAS_H
