#ifndef BOOKSSYSTEM_H
#define BOOKSSYSTEM_H
#include<iostream>
using namespace std;

class Book{
private:
     string title;
     string author;
     int pages;
     static int bookCount;
public:
  static int getBookCount();
  //Default constructor
     Book(){
       title = "";
       author = "";
       pages = 0;
       bookCount++;
       };
  // Parameterized Constructors
     Book(string t, string a, int p){
       title = t;
       author = a;
       pages = p;
       bookCount++;
       };
  // Copy Constructor
     Book(const Book & obj){
       title = obj.title;
       author = obj.author;
       pages = obj.pages;
       bookCount++;
       };
 //Destructor
     ~Book(){
         bookCount--;
         }

    bool isThickBook(){
      return pages > 500;
       }
    void setTitle(string t);
    string getTitle(){
      return title;
      }

    void setAuthor(string a);
    string getAuthor(){
      return author;
      }

    void setPages(int p);
    int getPages(){
      return pages;
      }

  Book duplicateBook(const Book& original);

  };
void setTitle(string t);
void setAuthor(string a);
void setPages(int p);
Book duplicateBook(const Book& original);


#endif //BOOKSSYSTEM_H
