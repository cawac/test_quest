//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_JOURNAL_H
#define TEST_QUEST_JOURNAL_H

#include <map>
#include "abstract_Publication.h"

class Journal: public abstract_Publication {
private:
    std::string month_of_release;
    std::map<std::string,int> themes;
};


#endif //TEST_QUEST_JOURNAL_H
