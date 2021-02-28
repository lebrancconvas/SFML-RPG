#include <iostream>
#include <SFML/System.hpp>

using namespace std;
using namespace sf;

void func()
{
    for(int i = 0; i <= 10; i++)
    {
        cout << "I am a thread number one." << endl;
    }
}

int main()
{
    Thread thread(&func);
    thread.launch();
    
    for(int i = 0; i <= 10; i++)
    {
        cout << "I am a main thread." << endl;
    }
    
    return 0;
}
