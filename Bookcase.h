//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_BOOKCASE_H
#define TEST_QUEST_BOOKCASE_H

#include "Shelf.h"

class Bookcase {
private:
    size_t size;
    size_t capacity;
    Shelf* shelves;
    std::string theme;
public:


    /*void addShelf(Shelf x){
        if(capacity+1<=size){
        Shelf* buffer=new Shelf[capacity+1];
        for (int i = 0; i < capacity; ++i) {
            buffer[i]=shelves[i];
        }
        buffer[capacity]=x;
        capacity++;
        delete shelves;
        shelves=new Shelf[capacity];
        for (int i = 0; i < capacity; ++i) {
            shelves[i]=buffer[i];
        }
        }
    }*/

    const std::string &getTheme() const {
        return theme;
    }

    size_t getSize() const {
        return size;
    }

    void setSize(size_t size) {
        Bookcase::size = size;
    }

    void setTheme(const std::string &theme) {
        Bookcase::theme = theme;
    }
};


#endif //TEST_QUEST_BOOKCASE_H
