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
    size_t getSize() const {
        return size;
    }

    void setSize(size_t size) {
        Bookcase::size = size;
    }

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
};


#endif //TEST_QUEST_BOOKCASE_H
