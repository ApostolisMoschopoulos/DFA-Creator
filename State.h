#ifndef STATE_H
#define STATE_H
#include <iostream>


class State
{
    public:
        State(int id);
        int value;
        State *alpha;
        State *beta;
};


#endif // STATE_H
