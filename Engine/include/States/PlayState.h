//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_PLAYSTATE_H
#define VNENGINE_PLAYSTATE_H

#include "State.h"

class PlayState : public State {
    PlayState();
    ~PlayState();

    void playState(StateManager *stateManager);
};

#endif //VNENGINE_PLAYSTATE_H
