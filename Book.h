//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_BOOK_H
#define TEST_QUEST_BOOK_H

#include "Publication.h"

class Book:public Publication {
private:
    std::vector<std::pair<std::string,std::pair<int,int>>> authors;// автор, <год рождения, год смерти>
public:
    const std::vector<std::pair<std::string, std::pair<int, int>>> &getAuthors() const {
        return authors;
    }

    void setAuthors(const std::vector<std::pair<std::string, std::pair<int, int>>> &authors) {
        Book::authors = authors;
    }
//    void addAuthor(std::string s, int dateofbirth,int dateofdeath){
//            authors[s].first=dateofbirth;
//            authors[s].second=dateofdeath;
//    }//сам не знаю зачем

};


#endif //TEST_QUEST_BOOK_H
