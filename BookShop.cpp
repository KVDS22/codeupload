#include "Bookshop.h"

void BookShop::addBook(string Title, string author)
{
    new (&bookCollection[noOfBooksAdded]) AudioBook();
    bookCollection[noOfBooksAdded].setTitle(Title);
    bookCollection[noOfBooksAdded].setAuthor(author);
    noOfBooksAdded++;
}

void BookShop::addBook(string Title, string author, string voiceActor)
{
    new (&bookCollection[noOfBooksAdded]) AudioBook();
    bookCollection[noOfBooksAdded].setTitle(Title);
    bookCollection[noOfBooksAdded].setAuthor(author);
    bookCollection[noOfBooksAdded].setVoiceActor(voiceActor);
    noOfBooksAdded++;
}

void BookShop::printDetails()
{
    for (int i = 0; i < noOfBooksAdded; i++)
        cout << bookCollection[i].getTitle() << ", " << bookCollection[i].getAuthor() << ", " << bookCollection[i].getVoiceActor() << endl;
}

BookShop::BookShop()
{
    this->bookCollection = static_cast<AudioBook *>(malloc(1000 * sizeof(AudioBook)));
}

BookShop::~BookShop()
{
    delete bookCollection;
}