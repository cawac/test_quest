#include "Publication.h"
#include "Admin.h"
#include "Journal.h"
#include "Book.h"
#include "Bookcase.h"
#include "Library.h"
#include "Librarian.h"
#include "Reader.h"
#include "Shelf.h"
int main(){
    Book* ba;
    Journal* ja;
    Publication *pa;
    std::vector<Publication> shh;

    Shelf shelfa;
    Shelf *shelfb;

    Bookcase bookcasea;
    Bookcase bookcaseb;

    std::vector<Bookcase> bookcases;
    Library library;

    std::map<std::string,std::pair<int,int>> authors;
    std::pair<int,int> buffer;
    buffer.first=2003;
    buffer.second=2022;
    authors["Sasha"]=buffer;
    buffer.second=2100;
    authors["Masha"]=buffer;
    ba->setAuthors(authors);
    ba->setHeader((string &)"blabla");
    ba->setPublishingHouse((string &) "BLABLA");
    ba->setText((string &) "balblalblalblalbalslagdslkgfskjadlgjfaksdlfasd");
    ba->setYearOfRelease(2022);

    ja->setMonthOfRelease((string &) "May");
    std::set<std::string> themes;
    themes.insert("what is set?");
    themes.insert("what is multiset?");
    themes.insert("what is map?");
    themes.insert("what is map?");
    ja->setThemes(themes);
    ja->setYearOfRelease(2022);
    ja->setText((string &) "map is sandfjasdkflasdk...");
    ja->setPublishingHouse((string &) "aversev");
    ja->setHeader((string &) "с++ для чайников");

    pa->setHeader((string &) "clean code");
    pa->setPublishingHouse((string &) "BSUIR");
    pa->setText((string &) "clean code main oasdfkl;asdk;flkas");
    pa->setYearOfRelease(2022);
    std::map<Reader,Publication*> map;

    return 0;
}