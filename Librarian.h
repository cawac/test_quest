//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_LIBRARIAN_H
#define TEST_QUEST_LIBRARIAN_H
#include "Library.h"

class Librarian {
public:
    void putBook(Publication*);
    void giveBook(Publication*);
    bool IsWorking();
private:
    bool is_employed;
    Library* library;
};


#endif //TEST_QUEST_LIBRARIAN_H
