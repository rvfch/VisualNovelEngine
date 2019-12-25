//
// Created by Roman on 25.12.2019.
//

#include "../../include/Core/Window.h"

VNEngine::Window::Window(const WindowProperties& windowProperties) : window(sf::VideoMode(windowProperties.width, windowProperties.height), windowProperties.name) {}

VNEngine::Window::~Window() {
    window.close();
}


void VNEngine::Window::update() {
    // check all the window's events that were triggered since the last iteration of the loop
    sf::Event event{};
    while (window.pollEvent(event))
    {
        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void VNEngine::Window::draw(const sf::Drawable &drawable) {
    window.draw(drawable);
}

bool VNEngine::Window::isOpen() const {
    return window.isOpen();
}

void VNEngine::Window::display() {
    window.display();
}

void VNEngine::Window::clear() {
    // fill all with black color
    window.clear(sf::Color::Black);
}
