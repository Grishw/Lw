#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;

int main() 
{
    RenderWindow window(VideoMode({ 800, 600 }), "title");
    window.clear();
    CircleShape shape1(40);
    shape1.setPosition({ 200, 120 });
    shape1.setFillColor(Color(0xFF, 0x0, 0x0));
    window.draw(shape1);

    window.display();
    sleep(seconds(5));
}