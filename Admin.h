//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_ADMIN_H
#define TEST_QUEST_ADMIN_H


#include "Library.h"

class Admin {
public:
    void createBookcase();
    void removeBookcase();
    void makeTethmedBookcase();
    void employLibrarian();
    void dismissLibrarian();
    void giveBook();
    const Library &getLibrary() const {
        return library;
    }

    void setLibrary(const Library &library) {
        Admin::library = library;
    }

private:
    Library library;
};


#endif //TEST_QUEST_ADMIN_H
