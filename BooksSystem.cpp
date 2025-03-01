#include<iostream>
#include"BooksSystem.h"
using namespace std;

void Book::setTitle(string t) {
    title = t;
}

void Book::setAuthor(string a) {
    author = a;
}

void Book::setPages(int p) {
    pages = p;
}

int Book::bookCount = 0;

int Book::getBookCount(){
  return bookCount;
  }

Book duplicateBook(const Book& original) {
    return Book(original);
}
