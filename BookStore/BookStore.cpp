//
// Created by sliversniper on 9/18/13.
// Copyright (c) 2013 hello. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include "BookStore.h"
#include "Book.h"




BookStore::BookStore(std::vector<Book> bookList, double creditCardExtra, double conversionRate) {
    _bookList = bookList;
    _creditCardExtra = creditCardExtra;
    _conversionRate = conversionRate;
}

void BookStore::getTotalPrice(char p,char c) {
     double total=0;
    for (int j = 0; j < getBookListSize(); j++) {
        total += get_bookList()[j].get_price() * _qs[j];
    }
    char* caption = "$USD";
    if(p=='r'){
        total *= _creditCardExtra;
    }
    if(c=='h'){
        total *= _conversionRate;
        caption = "HKD$";
    }
    std::printf("Total Charge: %s %5.2f \n",caption,total);
}

void BookStore::setBookQ(int i, int i1) {

}

void BookStore::listBooks() {
    std::cout << "---List of Books---\n";
    std::cout << std::setw(3) << "#" << std::setw(32) << "Name" << std::setw(15) << "Price" <<  "\n";
    for(int i=0;i< getBookListSize();i++){
        std::cout << std::setw(3) << i+1 << ". " << std::setw(30) << _bookList[i].get_name() << std::setw(10) << "US$ " << _bookList[i].get_price() << ".00\n";
    }
    std::cout << "---End of List--- \n";
}

int BookStore::getBookListSize() {
    return (int) _bookList.size();
}


std::vector<Book> BookStore::get_bookList() {
    return _bookList;
}

void BookStore::printReceipt(char payment,char currency) {
    std::cout << "---Your Receipt---" << std::endl;
    std::cout << std::setw(35) << "Title" << std::setw(20) << "Quantity\n";
    for (int j = 0; j < getBookListSize(); j++) {
        if(_qs[j]!=0){
            std::cout << std::setw(35) << _bookList[j].get_name() << std::setw(19) << _qs[j]<<"\n";
        }
    };
    getTotalPrice(payment, currency);
    std::cout << "---End Receipt---" << std::endl;
    std::cout << "Thank you for your purchase ";

}
