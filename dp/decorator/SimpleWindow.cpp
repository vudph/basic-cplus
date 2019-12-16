#include "SimpleWindow.h"
#include <iostream>

void SimpleWindow::draw() {
    std::cout << "Draw simple window \n";
}

std::string SimpleWindow::getDescription() {
    return "Simple window";
}
