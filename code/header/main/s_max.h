#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <list>
#include <cassert>
#include <iterator>

#include "file_parser.h"
#include "tools.h"

class S_max
{
private:
    unsigned int                    k       = 0;
    unsigned int                    m       = 0;
    std::list<std::list<unsigned>>  k_list = {};

public:
    void parse_input(std::string file_relative_path="");
    //TODO def set_random_input(self, k: int, m: int):
    unsigned find_max();

};
#endif //MAIN_H
