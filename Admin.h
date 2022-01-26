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
    void addPublication(abstract_Publication*);

    const std::shared_ptr<Library> &getLibrary() const {
        return library;
    }

    void setLibrary(const std::shared_ptr<Library> &library) {
        Admin::library = library;
    }

private:
    std::shared_ptr<Library> library;
};


#endif //TEST_QUEST_ADMIN_H
