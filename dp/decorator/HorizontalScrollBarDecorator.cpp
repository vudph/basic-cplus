#include "HorizontalScrollBarDecorator.h"
#include <iostream>

HorizontalScrollBarDecorator::HorizontalScrollBarDecorator(Window *window) : WindowDecorator(window) {
}

void HorizontalScrollBarDecorator::draw() {
    WindowDecorator::draw();
    drawHorizontalScrollBar();
}

void HorizontalScrollBarDecorator::drawHorizontalScrollBar() {
    std::cout << "Draw horizonal scrollbar \n";
}

std::string HorizontalScrollBarDecorator::getDescription() {
    return WindowDecorator::getDescription() + ", including horizontal scrollbar";
}

