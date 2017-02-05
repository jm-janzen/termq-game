#include <iostream>
#include "game.h"

int main() {

    vec2ui v1 = {1,0};
    vec2ui v2 = {2,0};

    if (v1.x > v2.x) {
        std::cout << static_cast<int>(v1.x) << " is greater than " << static_cast<int>(v2.x) << std::endl;
    } else {
        std::cout << static_cast<int>(v1.x) << " is not greater than " << static_cast<int>(v2.x) << std::endl;
    }


}
