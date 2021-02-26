#include <SFML/Window.hpp>

using namespace sf;

int main()
{
    Window window(VideoMode(800, 600), "My Window");
    
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
    }
    return 0;
}
