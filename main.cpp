#include "Publication.h"
#include "Admin.h"
#include "Journal.h"
#include "Book.h"
#include "Bookcase.h"
#include "Library.h"
#include "Librarian.h"
#include "Reader.h"
#include "Shelf.h"
#include <iostream>
#include <vector>
#include <memory>
int main(){
    Book ba;
    Journal ja;
    Publication pa;
    std::vector<Publication> shh;

    Publication* shelfc;
    Shelf shelfa;
    Shelf *shelfb;

    Bookcase bookcasea(2);
    Bookcase bookcaseb(2);

    std::vector<Bookcase> bookcases;
    Library library;

    std::map<std::string,std::pair<int,int>> authors;
    std::pair<int,int> buffer;
    buffer.first=2003;
    buffer.second=2022;
    authors["Sasha"]=buffer;
    buffer.second=2100;
    authors["Masha"]=buffer;
    ba.setAuthors(authors);
    ba.setHeading("blabla");
    ba.setPublishingHouse("BLABLA");
    ba.setText("balblalblalblalbalslagdslkgfskjadlgjfaksdlfasd");
    ba.setYearOfRelease(2022);

    ja.setMonthOfRelease("May");
    std::set<std::string> themes;
    themes.insert("what is set?");
    themes.insert("what is multiset?");
    themes.insert("what is map?");
    themes.insert("what is map?");
    ja.setThemes(themes);
    ja.setYearOfRelease(2022);
    ja.setText("map is sandfjasdkflasdk...");
    ja.setPublishingHouse("aversev");
    ja.setHeading("с++ для чайников");

    pa.setHeading("clean code");
    pa.setPublishingHouse("BSUIR");
    pa.setText("clean code main oasdfkl;asdk;flkas");
    pa.setYearOfRelease(2022);
    std::map<Reader,Publication*> map;
    Reader r;
    Journal jb;
    shelfc=new Publication[3];
    shelfc[0]=ba;
    shelfc[1]=ja;
    shelfc[2]=pa;
    shelfa.setContent(shelfc);
    Shelf asdf;
    Shelf* shelllll=new Shelf[3];
    shelllll[0]=shelfa;
    shelllll[1]=shelfa;
    shelllll[2]=shelfa;

//    shelfa.setContent(ja);
    //bookcasea.setShelves(shelfa);
    bookcaseb.setShelves(shelllll);

    bookcases.push_back(bookcaseb);
    bookcases.push_back(bookcaseb);
    //bookcases.push_back(bookcaseb);
    library.setBookcases(bookcases);
//    std::cout<<library.getBookcases()[0].getShelves()[1].getContent()->getMonthOfRelease();
//    std::cout<<library.getBookcases()[1].getShelves()[1].getContent()->getMonthOfRelease();
//    std::cout<<library.getBookcases()[1].getShelves()[1].getContent()->getMonthOfRelease();
    std::cout<<ja.getMonthOfRelease();
    return 0;
}