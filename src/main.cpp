#include <iostream>
#include "utils.hpp"




int main (int argc, char* argv[]) {
    if (argc >1 && std::string_view{argv[1]}== "--help"){
        std ::cout << "Show help" << std::endl;
        return 0;
    }
    print_hello ();
    std::cout << "end" << std::endl;
    return 0;
}