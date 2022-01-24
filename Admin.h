//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_ADMIN_H
#define TEST_QUEST_ADMIN_H


#include "Reader.h"
class Admin {
public:
    void createBookcase(Bookcase);
    void removeBookcase(Bookcase);
    void makeThemedBookcase(Bookcase);
    void employLibrarian(Librarian);
    void dismissLibrarian(Librarian);
    void addPublication(Publication);
    const Library *getLibrary() const {
        return library;
    }

    void setLibrary(Library *library) {
        Admin::library = library;
    }

private:
    Library* library;
};


#endif //TEST_QUEST_ADMIN_H
