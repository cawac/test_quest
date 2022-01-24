//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_READER_H
#define TEST_QUEST_READER_H


#include "Publication.h"
#include "Library.h"

#include "Publication.h"
#include "Bookcase.h"

#include <string>
typedef class Reader;
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

class Librarian {
public:
    void putBook(Publication);
    void giveBook(Publication,Reader);
    bool IsWorking();
private:
    Library* library;
public:
    Library *getLibrary() const {
        return library;
    }

    void setLibrary(Library *library) {
        Librarian::library = library;
    }
};

class Reader {
public:
    void findHeader(Library,std::string);
    void findTheme(Library,std::string);
    void findAuthor(Library,std::string);
    void findYearOfRelease(Library,int);
    void findAuthorYears(Library,int,std::string);

//    void requestPublication(Library library,Publication* x){
//        ordered_Publications.push_back(x);
//    }
    void returnPublication(Librarian librarian,Publication x){
        for (int i = 0; i < ordered_publications.size(); ++i) {
            if (ordered_publications[i]==x)
            {
                ordered_publications.erase(ordered_publications.begin()+i);
                librarian.putBook(x);
            }
        }
    }
    void requestPublication(Librarian librarian,Publication x){

        //        size++;
//        Publication* buffer;
//        buffer=new Publication[size];
//        for (int i = 0; i < size-1; ++i) {
//            buffer[i]=ordered_publications[i];
//        }
//        buffer[size-1]=x;
//        ordered_publications=delete[];
//        ordered_publications=new Publication[size];
//        for (int i = 0; i < size; ++i) {
//            ordered_publications[i]=buffer[i];
//        }

    }
private:
    std::vector<Publication> ordered_publications;
    size_t size=0;
};


#endif //TEST_QUEST_READER_H
