#include <iostream>

#include "s_max.h"

int main() {
    std::cout << "Begin RUN!" << std::endl;

    S_max *s_max = new S_max();
    s_max->parse_input("resource/input/non_regression/test1.in");
    unsigned result = s_max->find_max();
    delete s_max;

    std::cout << "End RUN! Result: " << result << std::endl;
    return 0;
}
