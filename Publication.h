//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_PUBLICATION_H
#define TEST_QUEST_PUBLICATION_H

#include "abstract_Publication.h"

class Publication: public abstract_Publication{
public:
    std::string &getHeader() override {
        return header;
    }

    void setHeader(std::string &header) override {
         this->header=header;
    }

    std::string &getPublishingHouse() override {
        return publishing_house;
    }

    void setPublishingHouse(std::string &publishingHouse) override {
        this->publishing_house=publishingHouse;
    }

    int getYearOfRelease() override {
        return year_of_release;
    }

    void setYearOfRelease(int yearOfRelease) override {
        this->year_of_release=yearOfRelease;
    }

    std::string &getText() override {
        return text;
    }

    void setText(std::string &text) override {
        this->text=text;
    }

    std::map<std::string, std::pair<int, int>> &getAuthors() override {
        std::map<std::string,std::pair<int,int>> empty;
        return empty;
    }

    void setAuthors(std::map<std::string, std::pair<int, int>> &authors) override {

    }

    std::string &getMonthOfRelease() override {
        std::string empty;
        return empty;
    }

    void setMonthOfRelease(std::string &monthOfRelease) override {

    }

    std::set<std::string> &getThemes() override {
        std::set<std::string> empty;
        return empty;
    }

    void setThemes(std::set<std::string> &themes) override {

    }

};


#endif //TEST_QUEST_PUBLICATION_H
