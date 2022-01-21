//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_SHELF_H
#define TEST_QUEST_SHELF_H

#include "Publication.h"
class Shelf {
private:
    Publication* content;
    size_t size;
public:
    Publication *getContent() const {
        return content;
    }

    void setContent(Publication *content) {
        Shelf::content = content;
    }

    size_t getSize() const {
        return size;
    }

    void setSize(size_t size) {
        Shelf::size = size;
    }
};


#endif //TEST_QUEST_SHELF_H
