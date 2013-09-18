//
// Created by sliversniper on 9/18/13.
// Copyright (c) 2013 hello. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//



#ifndef __Book_H_
#define __Book_H_

#include <iostream>


class Book {
    public:
        Book(std::string,double);

    virtual int get_price();

    virtual std::string get_name();

    virtual int get_q();

    virtual void set_q(int q);
        int _q;
        int _price;
        std::string _name;
};


#endif //__Book_H_
