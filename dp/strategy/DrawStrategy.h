#ifndef DRAWSTRATEGY_H
#define DRAWSTRATEGY_H

class DrawStrategy {
 public:
    virtual void draw() = 0;
    virtual ~DrawStrategy();
};

#endif // DRAWSTRATEGY_H
