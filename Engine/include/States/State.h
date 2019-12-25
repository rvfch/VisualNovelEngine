//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_STATE_H
#define VNENGINE_STATE_H

#include "StateManager.h"

class State {
    public:
    virtual void menuState(StateManager *stateManager);
    virtual void pauseState(StateManager *stateManager);
    virtual void settingsState(StateManager *stateManager);
    virtual void playState(StateManager *stateManager);

};

#endif //VNENGINE_STATE_H
