#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;

void renderingThread(RenderWindow* window)
{
    window->setActive();
    while(window->isOpen())
    {
        //draw
        
        //end the current rame
        window->display();
    }
}

int main()
{
    RenderWindow window(VideoMode(800, 600), "My Window");
    window.setActive(false);
    Thread thread(&renderingThread, &window);
    thread.launch();
    CircleShape shape(50.0f);
    CircleShape shape2(70.0f);
    shape.setFillColor(Color(0, 100, 70));
    shape2.setFillColor(Color(200, 200, 100));
    
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
        window.draw(shape2);
        window.display();
    }
    return 0;
}
