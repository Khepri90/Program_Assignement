//
// Created by dariu on 7/21/2021.
//

#include "Book.h"
template<class ItemType>
Book<ItemType>::Book() {

}

template<class ItemType>
Book<ItemType>::Book(string title, string isbn, string datePublished, string publisher, string numOfPages) {

}

template<class ItemType>
Book<ItemType>::~Book() {

}

template<class ItemType>
string Book<ItemType>::getTitle() {
    return title;
}

template<class ItemType>
string Book<ItemType>::getIsbn() {
    return isbn;
}

template<class ItemType>
string Book<ItemType>::getDatePub() {
    return datePublished;
}

template<class ItemType>
string Book<ItemType>::getPublisher() {
    return publisher;
}

template<class ItemType>
string Book<ItemType>::getNumOfPages() {
    return numOfPages;
}

template<class ItemType>
void Book<ItemType>::setTitle(string title) {
    this->title = title;
}

template<class ItemType>
void Book<ItemType>::setIsbn(string isbn) {
    this->isbn = isbn;
}

template<class ItemType>
void Book<ItemType>::setDatePub(string datePublished) {
    this->datePublished = datePublished;
}

template<class ItemType>
void Book<ItemType>::setPublisher(string publisher) {
    this->publisher = publisher;
}

template<class ItemType>
void Book<ItemType>::setNumOfPages(string numOfPages) {
    this->numOfPages = numOfPages;
}
