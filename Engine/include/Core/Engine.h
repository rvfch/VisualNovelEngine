//
// Created by Roman on 25.12.2019.
//
#ifndef VNENGINE_ENGINE_H
#define VNENGINE_ENGINE_H


#include <SFML/Graphics.hpp>
#include "Window.h"
#include "plog/Log.h"

namespace VNEngine {
    class Game {
        public:
            Game();
            ~Game();

            void update();

            bool isRunning() const;

            void draw();
        private:
            Window *window;
    };
}

#endif