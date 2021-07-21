//
// Created by dariu on 7/21/2021.
//

#include "Author.h"

template<class ItemType>
Author<ItemType>::Author() {

}

template<class ItemType>
Author<ItemType>::Author(string &aName) {

}

template<class ItemType>
Author<ItemType>::~Author() {

}

template<class ItemType>
string Author<ItemType>::getName() {
    return name;
}

template<class ItemType>
void Author<ItemType>::setName(string& aName) {
    name = aName;
}