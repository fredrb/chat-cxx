#include <cs/core/session.h>
#include <memory>

using namespace cs::core;

int main() 
{ 
    auto session = std::make_unique<Session>();
    session->initialize();
    return 0; 
}
