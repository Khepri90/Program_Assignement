//
// Created by dariu on 7/21/2021.
//

#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
#include <string>
using namespace std;

template<class ItemType>
class Author {
private:
    string name;

public:
    Author();
    Author(string& aName);
    ~Author();

    string getName();
    void setName(string& aName);

};



#include "Author.cpp"
#endif //UNTITLED1_AUTHOR_H
