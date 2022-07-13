#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
    int y = 1;
    int x = 1;
}

void Player::CallInput()
{
    char UserInput = ' ';
    cin >> UserInput;

    switch(UserInput)
    {
        case 'w':
            y = y + 1;
            cout << "The Player is moving Up" << endl;
            break;
        
        case 's':
            y = y - 1;
            cout << "The Player is moving Down" << endl;
            break;
        
        case 'd':
            x = x + 1;
            cout << "The Player is moving to the Right" << endl;
            break;
        
        case 'a':
            x = x - 1;
            cout << "The Player is moving to the Left" << endl;
            break;
    }

    cout << "The Player is located at this coordinates: " << x << ";" << y << endl;
}