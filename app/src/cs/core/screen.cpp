#include <cs/core/screen.h>
#include <iostream>

using namespace cs::core;

void Screen::alert(std::string text)
{
    std::cout << text << std::endl;
}

void Screen::initialize()
{
    // load screen components
}

void Screen::openCommand()
{
    // load user commands
}

void Screen::start()
{
    this->mainLoop();
}

void Screen::mainLoop()
{
    this->alert("Main loop started");
}
