//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_PUBLICATION_H
#define TEST_QUEST_PUBLICATION_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <iostream>

class Publication {
private:
    std::string heading;
    std::string publishing_house;
    int year_of_release;
    std::string text;
public:
    const std::string &getHeading() const {
        return heading;
    }

    void setHeading(const std::string &heading) {
        Publication::heading = heading;
    }

    const std::string &getPublishingHouse() const {
        return publishing_house;
    }

    void setPublishingHouse(const std::string &publishingHouse) {
        publishing_house = publishingHouse;
    }

    int getYearOfRelease() const {
        return year_of_release;
    }

    void setYearOfRelease(int yearOfRelease) {
        year_of_release = yearOfRelease;
    }

    const std::string &getText() const {
        return text;
    }

    void setText(const std::string &text) {
        Publication::text = text;
    }

    Publication(Publication const &publication) {

    }
};


#endif //TEST_QUEST_PUBLICATION_H
