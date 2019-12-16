#include <iostream>
#include "Window.h"
#include "SimpleWindow.h"
#include "VerticalScrollBarDecorator.h"
#include "HorizontalScrollBarDecorator.h"

using namespace std;

int main()
{
    Window *w = new HorizontalScrollBarDecorator(new VerticalScrollBarDecorator(new SimpleWindow()));
    cout << w->getDescription() << endl;

    delete w;
    return 0;
}
