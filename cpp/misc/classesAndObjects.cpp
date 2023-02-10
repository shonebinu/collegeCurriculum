#include <iostream>
using namespace std;

class Book // Class names generally start with a capital letter.
{
public:
  string title;
  string author;
  int pages;
};

int main()
{
  Book book1; // A class is the specification/template of a data type, an object is an actual instance of that class.
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.pages = 500;

  Book book2;
  book2.title = "Lord of the Rings";
  book2.author = "Tolkein";
  book2.pages = 600;

  cout << book1.title;
  cout << book2.title;

  return 0;
}