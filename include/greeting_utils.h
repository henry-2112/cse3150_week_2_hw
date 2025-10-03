#ifndef greeting_utils
#define greeting_utils
#include <iostream>
#include <string>

namespace greetingUtils{
    std::string create_message(const std::string& name);
    char* format_as_c_string(const std::string& msg);
}


#endif
