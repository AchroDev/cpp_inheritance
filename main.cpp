#include <iostream>

// Example Entity Class
class Entity
{
public:
    float X, Y;

    // Example Move function taking two parameters 'xa' AND 'ya'
    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

// Example Player class that has two types 'Player' AND 'Entity'
class Player : public Entity
{
public:
    const char *Name;
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{

    std::cin.get();
}
