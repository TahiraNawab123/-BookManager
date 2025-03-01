#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include "catch.hpp"
#include "BooksSystem.h"

TEST_CASE("Book Default Constructor initializes with empty values") {
    Book b;
    REQUIRE(b.getTitle() == "");
    REQUIRE(b.getAuthor() == "");
    REQUIRE(b.getPages() == 0);
}

TEST_CASE("Book Parameterized Constructor sets values correctly") {
    Book b("1984", "George Orwell", 328);
    REQUIRE(b.getTitle() == "1984");
    REQUIRE(b.getAuthor() == "George Orwell");
    REQUIRE(b.getPages() == 328);
}

TEST_CASE("Book Copy Constructor creates an exact copy") {
    Book original("The Hobbit", "J.R.R. Tolkien", 310);
    Book copy = duplicateBook(original);
    
    REQUIRE(copy.getTitle() == original.getTitle());
    REQUIRE(copy.getAuthor() == original.getAuthor());
    REQUIRE(copy.getPages() == original.getPages());
}

TEST_CASE("Setter and Getter functions update and retrieve values") {
    Book b;
    b.setTitle("To Kill a Mockingbird");
    b.setAuthor("Harper Lee");
    b.setPages(281);

    REQUIRE(b.getTitle() == "To Kill a Mockingbird");
    REQUIRE(b.getAuthor() == "Harper Lee");
    REQUIRE(b.getPages() == 281);
}

TEST_CASE("isThickBook() correctly identifies thick books") {
    Book b1("Short Book", "Author", 200);
    Book b2("Thick Book", "Another Author", 600);

    REQUIRE(b1.isThickBook() == false);
    REQUIRE(b2.isThickBook() == true);
}

TEST_CASE("Destructor decreases bookCount") {
    int initialCount = Book::getBookCount(); // Use Book::getBookCount()
    Book tempBook("Temporary", "Author", 123);
    REQUIRE(Book::getBookCount() == initialCount + 1);
}
