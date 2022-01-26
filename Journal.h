//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_JOURNAL_H
#define TEST_QUEST_JOURNAL_H

#include "abstract_Publication.h"

class Journal: public abstract_Publication {
private:
    std::string month_of_release;
    std::set<std::string> themes;
public:std::string &getHeader() override {
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


    void setAuthors(std::map<std::string, std::pair<int, int>> &authors) override {

    }

    std::string &getMonthOfRelease() override {
        return month_of_release;
    }

    void setMonthOfRelease(std::string &monthOfRelease) override {
        this->month_of_release=monthOfRelease;
    }

    std::map<std::string, std::pair<int, int>> &getAuthors() override {
        std::map<std::string,std::pair<int,int>> empty;
        return empty;
    }

    set<std::string> &getThemes() override {
        return themes;
    }

    void setThemes(std::set<std::string> &themes) override {
        this->themes=themes;
    }
};


#endif //TEST_QUEST_JOURNAL_H
