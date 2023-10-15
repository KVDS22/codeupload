#include "Book.h"
#include "AudioBook.h"
#include "BookShop.h"

int main()
{
    string response1 = "yes", response2;
    string title, author, voiceActor;
    int bookCount = 0;

    BookShop bs;

    while (response1 == "yes")
    {
        cout << "Enter the type of book (Book / Audio Book) : " << endl;
        getline(cin, response2);

        cout << "Enter the book title : " << endl;
        getline(cin, title);

        cout << "Enter the author : " << endl;
        getline(cin, author);

        if (response2 == "Book")
        {
            Book b;
            b.setTitle(title);
            b.setAuthor(author);
            bs.addBook(title, author);
            bookCount++;
        }

        else if (response2 == "Audio Book")
        {
            AudioBook ab;
            cout << "Enter the voice actor: " << endl;
            getline(cin, voiceActor);

            ab.setTitle(title);
            ab.setAuthor(author);
            ab.setVoiceActor(voiceActor);
            bs.addBook(author, title, voiceActor);
            bookCount++;
        }

        else
        {
            cout << "Inavalid" << endl;
        }

        cout << "Do you want to add another book? (yes/no) : " << endl;
        getline(cin, response1);
    }

    bs.printDetails();

    // delete bs;

    return 0;
}