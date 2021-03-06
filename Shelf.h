//
// Created by alex on 12/01/2022.
//

#ifndef TEST_QUEST_SHELF_H
#define TEST_QUEST_SHELF_H

#include "abstract_Publication.h"

class Shelf {
private:
    std::vector<abstract_Publication*> content;
    size_t size;
public:
    const std::vector<abstract_Publication*> &getContent() const {
        return content;
    }

    void setContent(const std::vector<abstract_Publication*> &content) {
        Shelf::content = content;
    }

    size_t getSize() const {
        return size;
    }

    void setSize(size_t size) {
        Shelf::size = size;
    }

//    Publication getPublication(std::string s){
//        for (int i=0;i<content.size();i++){
//            if(content[i]->getHeader()==s) {
//                return content[i]; }
//        }
//        return nullptr;
//    }
//    bool IsEmpty(){
//        return content.empty();
//    }

};


#endif //TEST_QUEST_SHELF_H
