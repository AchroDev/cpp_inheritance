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

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    std::cout << "Size of Entity: " << sizeof(Entity) << " Bytes" << std::endl; // Outputting the size of Entity in bytes [8]
    std::cout << "Size of Player: " << sizeof(Player) << " Bytes" << std::endl; // Outputting the size of Player in bytes [16] // char* is 8 bytes on 64-bit

    Player player;
    player.Name = "AchroDev"; // Setting the name of the player
    player.PrintName();       // Printing the name
    player.Move(5, 5);        // Example showing since the player is of type Entity as well, we have access to move
    player.X = 2;             // We also have access to X
    player.Y = 3;             // and Y
    std::cin.get();
}
