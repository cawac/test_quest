//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_LIBRARY_H
#define TEST_QUEST_LIBRARY_H


#include <string>
#include "Bookcase.h"
#include "Reader.h"

class Library {
private:
    std::string name;
    std::vector<Bookcase> bookcases;
    std::string address;
    std::map<Reader,Publication> sessionLog;
public:
    const std::string &getName() const {
        return name;
    }

    const std::map<Reader, Publication> &getSessionLog() const {
        return sessionLog;
    }

    void setSessionLog(const std::map<Reader, Publication> &sessionLog) {
        Library::sessionLog = sessionLog;
    }

    void setName(const std::string &name) {
        Library::name = name;
    }

    const std::vector<Bookcase> &getBookcases() const {
        return bookcases;
    }

    void setBookcases( std::vector<Bookcase> &bookcases) {
        Library::bookcases = bookcases;
    }

    const std::string &getAddress() const {
        return address;
    }

    void setAddress(const std::string &address) {
        Library::address = address;
    }
};


#endif //TEST_QUEST_LIBRARY_H
