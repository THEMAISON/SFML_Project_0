#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(1280, 720), "Game!");
    RectangleShape rect;
    rect.setPosition(Vector2f(1280, 720));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}