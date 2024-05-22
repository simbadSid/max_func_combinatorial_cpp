#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <list>
#include <cassert>
#include <iterator>

#include "file_parser.h"
#include "tools.h"


#define DATA_TYPE unsigned long long int


#define STRING_TO_UNSIGNED(st)  static_cast<unsigned int>  (stoul(st))
#define STRING_TO_DATA_TYPE(st) static_cast<DATA_TYPE>     (stoul(st))

class S_max
{
private:
    unsigned int                    k       = 0;
    unsigned int                    m       = 0;
    std::list<std::list<DATA_TYPE>> k_list = {};

public:
    void parse_input(const std::string& file_relative_path="");
    //TODO def set_random_input(self, k: int, m: int):
    DATA_TYPE find_max();

};
#endif //MAIN_H
