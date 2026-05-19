#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;

public:

    void addBook()
    {
        ofstream file("books.txt", ios::app);

        cout << "Enter Book ID: ";
        cin >> bookID;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        file << bookID << "|" << title << "|" << author << endl;

        file.close();

        cout << "\nBook Added Successfully!\n";
    }

    void displayBooks()
    {
        ifstream file("books.txt");

        string line;

        cout << "\n----- Book Records -----\n";

        while(getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }

    void searchBook()
    {
        ifstream file("books.txt");

        int searchID;

        bool found = false;

        cout << "\nEnter Book ID to Search: ";
        cin >> searchID;

        while(file >> bookID)
        {
            file.ignore();

            getline(file, title, '|');
            getline(file, author);

            if(bookID == searchID)
            {
                cout << "\nBook Found!\n";

                cout << "Book ID: " << bookID << endl;
                cout << "Title: " << title << endl;
                cout << "Author: " << author << endl;

                found = true;
            }
        }

        if(found == false)
        {
            cout << "\nBook Not Found!\n";
        }

        file.close();
    }
};

int main()
{
    Book b;

    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";

        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.addBook();
                break;

            case 2:
                b.displayBooks();
                break;

            case 3:
                b.searchBook();
                break;

            case 4:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}git add .