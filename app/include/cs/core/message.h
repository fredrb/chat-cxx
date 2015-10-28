#ifndef CS_CORE_MESSAGE
#define CS_CORE_MESSAGE

namespace cs { namespace core {

    typedef struct 
    {
        std::string sender;
        std::string body;
        int type;
    } S_MESSAGE;

    class Message
    {
        public:
            Message() {};
            ~Message() {};
    };
}}

#endif
