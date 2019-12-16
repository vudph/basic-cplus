#include "VerticalScrollBarDecorator.h"
#include <iostream>

VerticalScrollBarDecorator::VerticalScrollBarDecorator(Window *window) : WindowDecorator(window){
}

void VerticalScrollBarDecorator::draw() {
    WindowDecorator::draw();
    drawVerticalScrollBar();
}

void VerticalScrollBarDecorator::drawVerticalScrollBar() {
    std::cout << "Draw vertical scrollbar \n";
}

std::string VerticalScrollBarDecorator::getDescription() {
    return WindowDecorator::getDescription() + ", including vertical scrollbar";
}
