//
// Created by Roman on 25.12.2019.
//

#include "../../include/Core/Engine.h"

VNEngine::Game::Game() {
    // setting up window properties
    WindowProperties windowProperties = {
            1280,
            720,
            "VN_Test"};

    // creating window
    window = new Window(windowProperties);
}

VNEngine::Game::~Game() {

}

bool VNEngine::Game::isRunning() const {
    return window->isOpen();
}

void VNEngine::Game::update() {
    window->update();
}

void VNEngine::Game::draw() {
    // clearing
    window->clear();

    // drawing

    // displaying
    window->display();
}

