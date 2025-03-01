#include<iostream>
#include"BooksSystem.h"
using namespace std;

int main(){
    Book b1("Namal", "Nimrah Ahmad", 1200);
    Book b2("Pir-e-Kamil", "Humairah Ahmad", 904);

    cout<<"Title: "<<b1.getTitle() << endl;
    cout<<"Author: "<<b1.getAuthor()<<endl;
    cout<<"Pages: "<<b1.getPages()<<endl;
    cout<<"Is Thick Book? "<<(b1.isThickBook() ? "Yes" : "No")<<endl;
    cout<<"Total Books: "<<Book::getBookCount()<<endl;

    Book b3 = duplicateBook(b1);
    cout << "Duplicated Book Title: " << b3.getTitle() << endl;

  return 0;
  }