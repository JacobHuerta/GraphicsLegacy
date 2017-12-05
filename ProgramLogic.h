#ifndef PROGRAMLOGIC_H
#define PROGRAMLOGIC_H

class ProgramLogic
{
public:
    ProgramLogic() { }
    virtual ~ProgramLogic() { }
    virtual void init() = 0;
    virtual void update(double delta) = 0;
    virtual void render(double delta) = 0;
    virtual void close() = 0;
};

#endif // PROGRAMLOGIC_H
