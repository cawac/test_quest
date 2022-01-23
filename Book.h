//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_BOOK_H
#define TEST_QUEST_BOOK_H

#include "Publication.h"

class Book:public Publication {
private:
    std::map<std::string,std::pair<int,int>> authors;// автор, <год рождения, год смерти>
public:
    const std::map<std::string, std::pair<int, int>> &getAuthors() const {
        return authors;
    }
    void addAuthor(std::string s, int dateofbirth,int dateofdeath){
            authors[s].first=dateofbirth;
            authors[s].second=dateofdeath;
    }//сам не знаю зачем
    void setAuthors(const std::map<std::string, std::pair<int, int>> &authors) {
        Book::authors = authors;
    }
};


#endif //TEST_QUEST_BOOK_H
