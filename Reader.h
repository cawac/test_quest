//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_READER_H
#define TEST_QUEST_READER_H

#include "abstract_Publication.h"
#include "Bookcase.h"
#include <memory>
#include <iostream>

using namespace std;
typedef class Reader;

class Library {
private:
    std::string name;
    std::vector<Bookcase> bookcases;
    std::string address;
    std::map<Reader,abstract_Publication> sessionLog;
public:
    const std::string &getName() const {
        return name;
    }

    const std::map<Reader, abstract_Publication> &getSessionLog() const {
        return sessionLog;
    }

    void setSessionLog(const std::map<Reader, abstract_Publication> &sessionLog) {
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
private:
    std::shared_ptr<Library> library;
public:
    void putBook(abstract_Publication*);
    void giveBook(abstract_Publication*,Reader);
    bool IsWorking();

    const std::shared_ptr<Library> &getLibrary() const {
        return library;
    }

    void setLibrary(const std::shared_ptr<Library> &library) {
        Librarian::library = library;
    }
};

class Reader {
public:
    void findTheme(Library,std::string);
        /*{std::vector<abstract_Publication*> findPublications;
        for (int i = 0; i < x.getBookcases().size(); ++i) {
            for (int j = 0; j < x.getBookcases()[i].getShelves().size(); ++j) {
                for (int k = 0; k < x.getBookcases()[i].getShelves()[j].getContent().size(); ++k) {
                    if (x.getBookcases()[i].getShelves()[j].getContent()[k]->getThemes().find(b) !=
                        x.getBookcases()[i].getShelves()[j].getContent()[k]->getThemes().end()) {
                        std::cout << x.getBookcases()[i].getShelves()[j].getContent()[k]->getHeader() << " ";
                        findPublications.push_back(x.getBookcases()[i].getShelves()[j].getContent()[k]);
                    }
                }
            }
        }
        std::cout<<"\nвыберите публикацию по номеру или откажитесь нажав 0\n";
        int a;
        std::cin>>a;
        if (a)
            this->requestPublication(librarian ,findPublications[a-1]);
    }*/

    void findAuthor(Library,std::string);
    void findYearOfRelease(Library,int);
    void findAuthorYears(Library,int,std::string);
    /*Алгоритм всех поисков таков:
         * 1)ищем публикацию
         * 2)и выводим все найденные
         * 3)пользаватель выбирает какая ему нужна публикация(идём в метод requestPublication), или отказывается(выходим)
         * */
    void requestPublication(Librarian,abstract_Publication*);
    void returnPublication(Librarian,abstract_Publication*);

    const std::vector<abstract_Publication *> &getOrderedPublications() const {
        return ordered_publications;
    }

    void setOrderedPublications(const std::vector<abstract_Publication *> &orderedPublications) {
        ordered_publications = orderedPublications;
    }

    size_t getSize() const {
        return size;
    }

    void setSize(size_t size) {
        Reader::size = size;
    }
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


private:
    std::vector<abstract_Publication*> ordered_publications;
    size_t size;
};


#endif //TEST_QUEST_READER_H
