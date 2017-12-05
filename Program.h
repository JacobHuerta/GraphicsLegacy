#ifndef PROGRAM_H
#define PROGRAM_H

#include <GL/glew.h>

#include <GL/glu.h>

#include <GLFW/glfw3.h>

#include <stdio.h>

#include "ProgramLogic.h"

const int WIDTH = 640, HEIGHT = 480;
const int FPS = 60;

class Program : public ProgramLogic
{
public:
    
    using ProgramLogic::init;
    using ProgramLogic::update;
    using ProgramLogic::render;
    using ProgramLogic::close;
    
    Program();
    ~Program();

    void init();
    
    void update(double delta);
    
    void render(double delta);
    
    void close();

};

#endif // PROGRAM_H
