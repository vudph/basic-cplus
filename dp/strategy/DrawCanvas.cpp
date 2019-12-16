#include "DrawCanvas.h"

DrawCanvas::DrawCanvas(){}

DrawCanvas::DrawCanvas(DrawStrategy *strategy) : m_strategy(strategy) {
}

void DrawCanvas::setDrawingStrategy(DrawStrategy *strategy) {
    m_strategy = strategy;
}

void DrawCanvas::draw() {
    m_strategy->draw();
}
