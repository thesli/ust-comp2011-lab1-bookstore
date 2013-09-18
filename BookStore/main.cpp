//
//  main.cpp
//  BookStore
//
//  Copyright (c) 2013 hello. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include "Book.h"
#include "BookStore.h"



void p(int s){
    std::cout << s;
}
void p(std::string s){
    std::cout << s;
}

int main(int argc, const char * argv[])
{
    // insert code here...
    std::vector<Book> bookList;
    bookList.push_back(Book("The Programming Language",30.00));
    bookList.push_back(Book("Thinking in C++",20.00));
    bookList.push_back(Book("C++ How to Program",40.00));
    BookStore bs(bookList,1.1,8.0);
    int qs[bs.getBookListSize()];
    unsigned int j = 0;
    while(j<bs.getBookListSize()){
        qs[j] = 0;
        j++;
    }
    while(true){
        unsigned int bookId;
        int temp_q;
        char fin;
        bs.listBooks();
        p("Please select your Books('1'/'2'/'3'): ");
        std::cin >> bookId;
        bookId--;
        std::printf("Quantity to Add(Now:%d): ",qs[bookId]);
        std::cin >> temp_q;
        qs[bookId]+=temp_q;
        p("Finished Shopping?('y' for yes,'n' for no): ");
        std::cin >> fin;
        if(fin=='y'){
            break;
        }
    }
    char payment;
    p("Select payment type('c for cash/'r' for credit card): ");
    std::cin >> payment;
    p("Select Currency('u for US$,'h' for HK$): ");
    char currency;
    std::cin >> currency;
    bs._qs = qs;
    bs.printReceipt(payment,currency);
    return 0;
}
