#ifndef CS_CORE_SCREEN
#define CS_CORE_SCREEN

#include <string>
#include <cs/core/action.h>
#include <cs/core/message.h>

namespace cs { namespace core {

    class Screen
    {
        private:
            void mainLoop();
            Action onSentMessage(S_MESSAGE *msg);
            Action onReceivedMessage(S_MESSAGE *msg);
        public :
            void alert(std::string text);
            void initialize();
            void openCommand();
            void start();
            Screen() {};
            ~Screen() {};
    };
}}

#endif
