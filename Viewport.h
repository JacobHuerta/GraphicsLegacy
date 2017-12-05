#ifndef VIEWPORT_H
#define VIEWPORT_H

class Viewport
{
public:

    enum ViewportMode()
    {
        VIEWPORT_MODE_FULL,
        VIEWPORT_MODE_HALF_CENTER,
        VIEWPORT_MODE_HALF_TOP,
        VIEWPORT_MODE_QUAD,
        VIEWPORT_MODE_RADAR
    };
    
    Viewport();
    ~Viewport();
    
};

#endif // VIEWPORT_H
