//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_JOURNAL_H
#define TEST_QUEST_JOURNAL_H

#include <set>
#include "Publication.h"

class Journal: public Publication {
private:
    std::string month_of_release;
    std::set<std::string> themes;
public:
    const std::string &getMonthOfRelease() const {
        return month_of_release;
    }

    void setMonthOfRelease(const std::string &monthOfRelease) {
        month_of_release = monthOfRelease;
    }

    const std::set<std::string> &getThemes() const {
        return themes;
    }

    void setThemes(const std::set<std::string> &themes) {
        Journal::themes = themes;
    }
};


#endif //TEST_QUEST_JOURNAL_H
