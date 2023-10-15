#pragma once
#include "libraries.h"

class Book
{
protected:
    string Title;
    string authorName;

public:
    string getTitle();
    void setTitle(string Title);
    string getAuthor();
    void setAuthor(string authorName);
    virtual void printDescription();
    Book();
};