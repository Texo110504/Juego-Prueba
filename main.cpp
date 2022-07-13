#include <iostream> // Biblioteca Principal
#include "Headers-Src/Player.h" // Header de Player.cpp
#include "Headers-Src/MapCell.h" // Header de MapCell.cpp

using namespace std; // dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar.

int main() // Funcion Principal
{
    bool isGameOver = false;

    Player Hero; // Player-Character
    cout << "Welcome to the Game" << endl;

    while(isGameOver == false)
    {
        // This is the loop of the game
        Hero.CallInput();
    };

    return 0;
}
