#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "visuals.h"
#include "functions.h"

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

char leseTaste();

void growingArea()
{
    system("clear");

    displayGrowingArea();

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
            drugLab();
            break;
        default:
            growingArea();
    }
}

void lab()
{
    system("clear");

    displayLab();

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
            break;
        case '5':
            drugLab();
            break;
        default:
            lab();
    }
}