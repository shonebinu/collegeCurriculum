#include <iostream>
using namespace std;

class Book // Class names generally start with a capital letter.
{
public:
  string title;
  string author;
  int pages;

  Book() // function overloading -> multiple functions with the same name
  {
    title = "no title";
    author = "no author";
    pages = 0;
  }

  Book(string aTitle, string aAuthor, int aPages) // Constructor -> this fn gets called with the class
  {
    title = aTitle;
    author = aAuthor;
    pages = aPages;
  }
};

int main()
{
  Book book1("Harry Potter", "JK Rowling", 500); // A class is the specification/template of a data type, an object is an actual instance of that class.
  // book1.title = "Harry Potter";
  // book1.author = "JK Rowling";
  // book1.pages = 500;

  Book book2("Lord of the rings", "Tolkein", 600);
  // book2.title = "Lord of the Rings";
  // book2.author = "Tolkein";
  // book2.pages = 600;

  // cout << book1.title;
  // cout << book2.title;

  Book book3;

  cout << book1.title << endl;

  cout << book3.title << endl;

  return 0;
}