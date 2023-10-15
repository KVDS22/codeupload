#pragma once
#include "libraries.h"
#include "AudioBook.h"

class BookShop
{
private:
    AudioBook *bookCollection;
    int noOfBooksAdded = 0;
    int index = 0;

public:
    void addBook(string Title, string authorName);
    void addBook(string Title, string authorName, string voiceActor);
    void printDetails();
    BookShop();
    ~BookShop();
};