#include "s_max.h"


#define f(x) x*x

void S_max::parse_input(const std::string& file_relative_path)
{
    auto                    *fileParser     = new FileParser(file_relative_path);
    std::list<std::string>  line            = fileParser->nextLine();
    auto                    line_iterator   = line.begin();

    this->k         = STRING_TO_UNSIGNED(*line_iterator); std::advance(line_iterator, 1);
    this->m         = STRING_TO_UNSIGNED(*line_iterator); std::advance(line_iterator, 1);

    for (unsigned i=0; i<this->k; ++i)
    {
        line            = fileParser->nextLine();
        line_iterator   = line.begin();

        unsigned                Ni              = STRING_TO_DATA_TYPE(*line_iterator); std::advance(line_iterator, 1);
        std::list<DATA_TYPE>    line_unsigned   = {};
        for (unsigned j=0; j<Ni; ++j)
        {
            DATA_TYPE val = STRING_TO_UNSIGNED(*line_iterator); std::advance(line_iterator, 1);
            line_unsigned.push_back(f(val));
        }
        this->k_list.push_back(line_unsigned);
    }

    delete fileParser;
}

DATA_TYPE S_max::find_max()
{
    std::list<DATA_TYPE> transition_0 = {0};
    auto k_list_iterator = this->k_list.begin();

    for (unsigned i=0; i<this->k; ++i)
    {
        std::list<DATA_TYPE> transition_1 = {};
        std::list<DATA_TYPE> line = *k_list_iterator; advance(k_list_iterator, 1);
        for (DATA_TYPE val_line: line)
        {
            for (DATA_TYPE past_score: transition_0)
            {
                DATA_TYPE s = (val_line + past_score) % this->m;
                //TODO check that is not already in transition1
                transition_1.push_back(s);
            }
        }
        transition_0 = transition_1;
    }

    DATA_TYPE max = transition_0.front();
    for (DATA_TYPE val: transition_0)
    {
        if (val > max)
            max = val;
    }

    return max;
}
