#include <cs/core/session.h>
#include <cs/core/screen.h>
#include <cstdlib>
#include <ctime>
#include <memory>

using namespace cs::core;

int randomId();

void Session::initialize()
{
    srand(time(NULL));
    this->id = rand() % 10000 + 11;

    // Initialize screen
    auto screen = std::make_unique<Screen>();
    screen->initialize();
    screen->alert("Screen initialized");

    // Load command
    screen->openCommand();
    screen->alert("Command loaded");

    // Start interaction
    screen->start();
}

