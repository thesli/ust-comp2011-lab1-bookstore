//
// Created by sliversniper on 9/18/13.
// Copyright (c) 2013 hello. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#include "Book.h"


Book::Book(std::string name, double price) {
    _name = name;
    _price = price;
}

int Book::get_price() {
    return _price;
}

std::string Book::get_name() {
    return _name;
}

int Book::get_q() {
    return _q;
}

void Book::set_q(int q) {
    _q = q;
}
