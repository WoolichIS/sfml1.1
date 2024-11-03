#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

const int LINE_WIDTH = 20;
const int LINE_HEIGHT_MEDIUM = 200;
const int LINE_HEIGHT_LARGE = 400;

int main()
{
    sf::RenderWindow window(sf::VideoMode(900, 600), "Full Name First Letter");

    sf::RectangleShape line1;
    line1.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line1.setOrigin(0, 200);
    line1.setPosition({ 50, 100 });
    line1.rotate(90);
    line1.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line2;
    line2.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line2.setPosition({ 50, 100 });
    line2.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line3;
    line3.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line3.setOrigin(0, 200);
    line3.setPosition({ 50, 300 });
    line3.rotate(90);
    line3.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line4;
    line4.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line4.setPosition({ 230, 300 });
    line4.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line5;
    line5.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line5.setOrigin(0, 200);
    line5.setPosition({ 50, 480 });
    line5.rotate(90);
    line5.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line6;
    line6.setSize({ LINE_WIDTH, LINE_HEIGHT_LARGE });
    line6.setPosition({ 290, 100 });
    line6.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line7;
    line7.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line7.setOrigin(0, 200);
    line7.setPosition({ 290, 100 });
    line7.rotate(90);
    line7.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line8;
    line8.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line8.setOrigin(0, 200);
    line8.setPosition({ 290, 300 });
    line8.rotate(90);
    line8.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line9;
    line9.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line9.setOrigin(0, 200);
    line9.setPosition({ 290, 480 });
    line9.rotate(90);
    line9.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line10;
    line10.setSize({ LINE_WIDTH, LINE_HEIGHT_LARGE });
    line10.setPosition({ 530, 100 });
    line10.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line11;
    line11.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line11.setOrigin(0, 200);
    line11.setPosition({ 550, 100 });
    line11.rotate(135);
    line11.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line12;
    line12.setSize({ LINE_WIDTH, LINE_HEIGHT_MEDIUM });
    line12.setOrigin(0, 200);
    line12.setPosition({ 665, 241 });
    line12.rotate(45);
    line12.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    sf::RectangleShape line13;
    line13.setSize({ LINE_WIDTH, LINE_HEIGHT_LARGE });
    line13.setPosition({ 806, 100 });
    line13.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(line1);
        window.draw(line2);
        window.draw(line3);
        window.draw(line4);
        window.draw(line5);
        window.draw(line6);
        window.draw(line7);
        window.draw(line8);
        window.draw(line9);
        window.draw(line10);
        window.draw(line11);
        window.draw(line12);
        window.draw(line13);

        window.display();
    }

    return 0;
}
