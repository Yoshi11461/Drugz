#include <iostream>
#include "visuals.h"
#include "drugLabFunctions.h"
#include <unistd.h>
#include <termios.h>
#include <cstdlib>
#include <string>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

void gameMenu();
void tutorial();
void drugLab();
void internet();
void bank();
void inventory();
void travel();
void policestation();

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


void mainMenu()
{
    system("clear");

    displayMainMenu();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            gameMenu();
            break;
        case '2':
            tutorial();
            break;
        case '3':
            system("clear");
            break;
        default:
            mainMenu();
    }
}

void gameMenu()
{
    system("clear");

    displayGameMenu();
    
    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            drugLab();
            break;
        case '2':
            internet();
            break;
        case '3':
            bank();
            break;
        case '4':
            inventory();
            break;
        case '5':
            travel();
            break;
        case '6':
            policestation();
            break;
        case '7':
            mainMenu();
            break;
        default:
            gameMenu();
    }
}

void tutorial()
{
    system("clear");

    displayTutorial();
    sleep_for(5s);
    mainMenu();
}

void drugLab()
{
    system("clear");

    displayDrugLab();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            growingArea();
            break;
        case '2':
            lab();
            break;
        case '3':
            gameMenu();
            break;
        default:
            drugLab();
    }
}

void internet()
{
    system("clear");

    displayInternet();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            gameMenu();
            break;
        default:
            internet();
    }
}

void bank()
{
    system("clear");

    displayBank();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            gameMenu();
            break;
        default:
            bank();
    }
}

void inventory()
{
    system("clear");

    displayInventory();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            gameMenu();
            break;
        default:
            inventory();
    }
}

void travel()
{
    system("clear");

    displayTravel();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            gameMenu();
            break;
        default:
            travel();
    }
}

void policestation()
{
    system("clear");

    displayPolicestation();

    char choice = leseTaste();

    switch (choice)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            gameMenu();
            break;
        default:
            policestation();
    }
}