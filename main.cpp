#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

const int WINDOW_WIDTH_SIZE = 96;
const int WINDOW_HEIGHT_SIZE = 286;
const int CIRCLE_RAD_SIZE = 38;
const int CIRCLE_FULL_SIZE = (CIRCLE_RAD_SIZE * 2) + 10;
const int CIRCLE_X_POZITION = 10;
const int CIRCLE_FIRST_Y_POZITION = 20;
const int CIRCLE_SECOND_Y_POZITION = CIRCLE_FIRST_Y_POZITION + CIRCLE_FULL_SIZE;
const int CIRCLE_THIRD_Y_POZITION = CIRCLE_SECOND_Y_POZITION + CIRCLE_FULL_SIZE;

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH_SIZE, WINDOW_HEIGHT_SIZE), "title");

    sf::RectangleShape rectangleBackground;
    rectangleBackground.setSize({WINDOW_WIDTH_SIZE, WINDOW_HEIGHT_SIZE});
    rectangleBackground.setPosition(0, 0);
    rectangleBackground.setFillColor(sf::Color(0xA9, 0xA9, 0xA9));

    sf::CircleShape greenCircle(CIRCLE_RAD_SIZE);
    greenCircle.setPosition({ CIRCLE_X_POZITION, CIRCLE_FIRST_Y_POZITION });
    greenCircle.setFillColor(sf::Color(0x0, 0x64, 0x0));

    sf::CircleShape yellowCircle(CIRCLE_RAD_SIZE);
    yellowCircle.setPosition({ CIRCLE_X_POZITION, CIRCLE_SECOND_Y_POZITION});
    yellowCircle.setFillColor(sf::Color(0xFF, 0xFF, 0x0));

    sf::CircleShape redCircle(CIRCLE_RAD_SIZE);
    redCircle.setPosition({ CIRCLE_X_POZITION, CIRCLE_THIRD_Y_POZITION });
    redCircle.setFillColor(sf::Color(0xFF, 0x0, 0x0));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(rectangleBackground);
        window.draw(greenCircle);
        window.draw(yellowCircle);
        window.draw(redCircle);

        window.display();
    }

    return 0;
}
