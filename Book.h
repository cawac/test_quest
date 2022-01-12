//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_BOOK_H
#define TEST_QUEST_BOOK_H

#include "abstract_Publication.h"

class Book:public abstract_Publication {
private:
    std::map<std::string,std::pair<int,int>> authors;
};


#endif //TEST_QUEST_BOOK_H
