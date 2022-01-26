//
// Created by alex on 26/01/2022.
//

#ifndef TEST_QUEST_ABSTRACT_PUBLICATION_H
#define TEST_QUEST_ABSTRACT_PUBLICATION_H

#include <string>
#include <vector>
#include <set>
#include <map>

class abstract_Publication{
protected:
    std::string header;
    std::string publishing_house;
    int year_of_release;
    std::string text;
public:
    virtual std::string &getHeader()=0;
    virtual void setHeader(std::string &header)=0;
    virtual std::string &getPublishingHouse()=0;
    virtual void setPublishingHouse(std::string &publishingHouse)=0;
    virtual int getYearOfRelease()=0;
    virtual void setYearOfRelease(int yearOfRelease)=0;
    virtual std::string &getText()=0;
    virtual void setText(std::string &text)=0;

    virtual std::map<std::string, std::pair<int, int>> & getAuthors() const =0;
    virtual void setAuthors(std::map<std::string, std::pair<int, int>> &authors)=0;
    virtual std::string &getMonthOfRelease()=0;
    virtual void  setMonthOfRelease (std::string &monthOfRelease)=0;
    virtual std::set<std::string> & getThemes() const =0;
    virtual void setThemes(std::set<std::string> &themes)=0;
};
#endif //TEST_QUEST_ABSTRACT_PUBLICATION_H
