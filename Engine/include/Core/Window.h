//
// Created by Roman on 25.12.2019.
//

#ifndef VNENGINE_WINDOW_H
#define VNENGINE_WINDOW_H

#include <SFML/Graphics.hpp>
#include <string>

namespace VNEngine {

    struct WindowProperties {
        int width;
        int height;
        std::string name;
    };

    class Window {
        public:
            Window(const WindowProperties& windowProperties);
            ~Window();

            void update();

            void draw(const sf::Drawable &drawable);
            void display();

            void clear();

            bool isOpen() const;


        private:
            sf::RenderWindow window;
    };
}


#endif //VNENGINE_WINDOW_H
