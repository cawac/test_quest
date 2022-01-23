//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_READER_H
#define TEST_QUEST_READER_H


#include <string>
#include "Publication.h"
class Reader {
public:
    void findHeader(std::string);
    void findTheme(std::string);
    void findAuthor(std::string);
    void findReleaseYear(int);
    void findAuthorYears(int);
    void requestBook(Publication*);
    void returnBook(Publication*);
private:
    std::vector<Publication*> ordered_Publications;
};


#endif //TEST_QUEST_READER_H
