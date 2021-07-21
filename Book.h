//
// Created by dariu on 7/21/2021.
//

#ifndef UNTITLED1_BOOK_H
#define UNTITLED1_BOOK_H
#include <string>
using namespace std;

template<class ItemType>
class Book {
private:
    string title;
    string isbn;
    string datePublished;
    string publisher;
    string numOfPages;

public:
    Book();
    Book(string title, string isbn, string datePublished, string publisher,
         string numOfPages);
    ~Book();

    string getTitle();
    string getIsbn();
    string getDatePub();
    string getPublisher();
    string getNumOfPages();

    void setTitle(string title);
    void setIsbn(string isbn);
    void setDatePub(string datePublished);
    void setPublisher(string publisher);
    void setNumOfPages(string numOfPages);


};



#include "Book.cpp"

#endif //UNTITLED1_BOOK_H
