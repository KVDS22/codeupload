#include "Book.h"

string Book::getTitle()
{
    return this->Title;
}

void Book::setTitle(string Title)
{
    this->Title = Title;
}

string Book::getAuthor()
{
    return this->authorName;
}

void Book::setAuthor(string authorName)
{
    this->authorName = authorName;
}

void Book::printDescription()
{
    cout << "Book title is " << this->Title << endl;
    cout << "Author of the book is " << this->authorName << endl;
}

Book::Book()
{
}