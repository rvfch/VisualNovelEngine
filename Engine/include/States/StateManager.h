//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_STATEMANAGER_H
#define VNENGINE_STATEMANAGER_H

namespace VNEngine {
    class StateManager {
        class State *currentState;

    public:
        StateManager();

        void setCurrent(State *state);
    };
}

#endif //VNENGINE_STATEMANAGER_H
