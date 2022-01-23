//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_SHELF_H
#define TEST_QUEST_SHELF_H
#include <deque>
#include "Publication.h"
class Shelf {
private:
    std::deque<Publication*> content;
    size_t size;
public:
    const std::deque<Publication *> &getContent() const {
        return content;
    }

    void setContent(const std::deque<Publication *> &content) {
        Shelf::content = content;
    }
    Publication* getPublication(std::string s){
        for (int i=0;i<content.size();i++){
            if(content[i]->getHeading()==s) {
                return content[i]; }
        }
        return nullptr;
    }
    bool IsEmpty(){
        return content.empty();
    }

    void addPublication(Publication* );

    Shelf(size_t size1)
    {
        size=size1;
        content.resize(size);
    }

    Shelf(){
        Shelf(2);
    }
};


#endif //TEST_QUEST_SHELF_H
