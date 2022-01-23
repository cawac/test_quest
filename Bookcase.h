//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_BOOKCASE_H
#define TEST_QUEST_BOOKCASE_H

#include "Shelf.h"

class Bookcase {
private:
    size_t size;
    Shelf* shelves;
    std::string theme;
public:

    Shelf *getShelves() const {
        return shelves;
    }

    void setShelves(Shelf *shelves) {
        Bookcase::shelves = shelves;
    }

    const std::string &getTheme() const {
        return theme;
    }

    void setTheme(const std::string &theme) {
        Bookcase::theme = theme;
    }
    Bookcase(size_t size1){
        size=size1;
        shelves=new Shelf[size1];
    }
    Bookcase(){
        Bookcase(2);
    }
};


#endif //TEST_QUEST_BOOKCASE_H
