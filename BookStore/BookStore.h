//
// Created by sliversniper on 9/18/13.
// Copyright (c) 2013 hello. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//



#ifndef __BookStore_H_
#define __BookStore_H_

#include <iostream>
#include "Book.h"


class BookStore {
    public:
        BookStore(std::vector<Book>,double,double);
    virtual void getTotalPrice(char,char);
    virtual void setBookQ(int,int);
    virtual std::vector<Book> get_bookList();
    virtual void listBooks();
    virtual int getBookListSize();
    int *_qs;
    virtual void printReceipt(char,char);
private:
        std::vector<Book> _bookList;
        double _creditCardExtra;
        double _conversionRate;
        int _bookListSize();
        int _tempQ;

};


#endif //__BookStore_H_
