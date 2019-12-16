#include "WindowDecorator.h"

WindowDecorator::WindowDecorator(Window *window) : m_windowToBeDecorated(window) {
}

void WindowDecorator::draw() {
    m_windowToBeDecorated->draw();
}

std::string WindowDecorator::getDescription() {
    return m_windowToBeDecorated->getDescription();
}
