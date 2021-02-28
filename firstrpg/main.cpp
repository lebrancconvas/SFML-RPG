#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), "My Window");
    CircleShape shape(50.0f);
    shape.setFillColor(Color(100, 250, 50));
    
    while(window.isOpen())
    {
        Event event;
        
        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                window.close();
            }
        }
        
        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
