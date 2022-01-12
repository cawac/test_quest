//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_LIBRARIAN_H
#define TEST_QUEST_LIBRARIAN_H
#include "Library.h"

class Librarian {
public:
    void Put_Book(abstract_Publication*);
    void Give_Book(abstract_Publication*);
    friend class Library;
private:
    bool is_employed;
};


#endif //TEST_QUEST_LIBRARIAN_H
