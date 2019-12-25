//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_SETTINGSSTATE_H
#define VNENGINE_SETTINGSSTATE_H

#include "State.h"

class SettingsState : public State {
    SettingsState();
    ~SettingsState();

    void settingsState(StateManager *stateManager);
};

#endif //VNENGINE_SETTINGSSTATE_H
