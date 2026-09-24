#include <iostream>
#include "visuals.h"
#include <unistd.h>
#include <termios.h>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

char leseTaste() {
    char ch = 0;
    struct termios alt, neu;
    
    tcgetattr(STDIN_FILENO, &alt);
    neu = alt;
    
    neu.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &neu);
    
    read(STDIN_FILENO, &ch, 1);
    
    tcsetattr(STDIN_FILENO, TCSANOW, &alt);
    return ch;
}


void MainMenu()
{
    system("clear");

    displayMainMenu();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            break;
        case '2':
            break;
        default:
            cout << "ERROR 101: Invalid input. Please try again." << endl;
            MainMenu();
    }
}