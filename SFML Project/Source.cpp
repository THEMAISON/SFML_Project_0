#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(1280, 720), "Game!");
    RectangleShape rect;
    rect.setSize(Vector2f(150, 150));
    rect.setFillColor(Color::Blue);
    float pX, pY;
    pX = pY = 400;
    rect.setPosition(Vector2f(pX, pY));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if (Keyboard::isKeyPressed(Keyboard::D)) {
                pX += 5;
                Vector2f newPos = Vector2f(pX, pY);
                rect.setPosition(newPos);
            }
            if (Keyboard::isKeyPressed(Keyboard::A)) {
                pX -= 5;
                Vector2f newPos = Vector2f(pX, pY);
                rect.setPosition(newPos);
            }
            if (Keyboard::isKeyPressed(Keyboard::W)) {
                pY -= 5;
                Vector2f newPos = Vector2f(pX, pY);
                rect.setPosition(newPos);
            }
            if (Keyboard::isKeyPressed(Keyboard::S)) {
                pY += 5;
                Vector2f newPos = Vector2f(pX, pY);
                rect.setPosition(newPos);
            }
        }

        window.clear();
        window.draw(rect);
        window.display();
    }

    return 0;
}