#include <iostream>
#include "DrawCanvas.h"
#include "DrawStrategy.h"
#include "LineDrawing.h"
#include "CircleDrawing.h"

using namespace std;

int main()
{
    DrawStrategy *strategy = new LineDrawing();
    DrawCanvas canvas(strategy);
    canvas.draw();

    strategy = new CircleDrawing();
    canvas.setDrawingStrategy(strategy);
    canvas.draw();

    delete strategy;
    return 0;
}
