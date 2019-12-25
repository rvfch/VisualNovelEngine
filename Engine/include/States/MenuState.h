//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_MENUSTATE_H
#define VNENGINE_MENUSTATE_H

#include "State.h"

class MenuState : public State {
    MenuState();
    ~MenuState();

    void menuState(StateManager *stateManager);
};

#endif //VNENGINE_MENUSTATE_H
