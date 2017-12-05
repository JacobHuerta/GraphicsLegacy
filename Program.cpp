#include "Program.h"

Program::Program()
{
}

Program::~Program()
{
}

void Program::init()
{
    
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    
    glOrtho( 0.0, WIDTH, HEIGHT, 0.0, 1.0f, -1.0 );
    
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    
    glClearColor( 0.f, 0.f, 0.f, 0.f );
    
    GLenum error = glGetError();
    if( error != GL_NO_ERROR )
    {
        printf( "Error initializing Opengl!", gluErrorString( error ) );
    }
}

void Program::update(double delta)
{
    
}

void Program::render(double delta)
{
    //Clear color buffer
    glClear( GL_COLOR_BUFFER_BIT );

    //Reset modelview matrix
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    //Move to center of the screen
    glTranslatef( WIDTH / 2.f, HEIGHT / 2.f, 0.f );
    glBegin( GL_QUADS );
        glColor3f( 0.f, 1.f, 1.f );
        glVertex2f( -50.f, -50.f );
        glVertex2f(  50.f, -50.f );
        glVertex2f(  50.f,  50.f );
        glVertex2f( -50.f,  50.f );
    glEnd();
}

void Program::close()
{
    
}