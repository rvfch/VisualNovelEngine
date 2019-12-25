//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_PAUSESTATE_H
#define VNENGINE_PAUSESTATE_H

#include "State.h"

class PauseState : public State {
    PauseState();
    ~PauseState();

    void pauseState(StateManager *stateManager);
};

#endif //VNENGINE_PAUSESTATE_H
