#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");
    window.clear(sf::Color::Blue);
    window.display();
    sf::sleep(sf::seconds(2));
    return 0;
}
