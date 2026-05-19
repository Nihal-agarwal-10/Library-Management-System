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

        file << bookID << " "
             << title << " "
             << author << endl;

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
        cout << "3. Exit\n";

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
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}