//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_READER_H
#define TEST_QUEST_READER_H


#include <string>
#include "abstract_Publication.h"
class Reader {
public:
    void Find(std::string);
    void Find_by_theme(std::string);
    void Find_by_author(std::string);
    void Find_by_release_year(int);
    void Find_by_author_years(int);
    void Request_Book(abstract_Publication*);
    void Return_book(std::string);
private:
    std::vector<abstract_Publication*> ordered_Publications;
};


#endif //TEST_QUEST_READER_H
