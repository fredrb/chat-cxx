#ifndef CS_CORE_SESSION
#define CS_CORE_SESSION

namespace cs { namespace core {

    class Session
    {
        private:
            int id;
        public:
            void initialize();
            Session() {};
            ~Session() {};
    };
}}

#endif
