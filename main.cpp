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
    string status;

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

        status = "Available";

        file << bookID << "|"
             << title << "|"
             << author << "|"
             << status << endl;

        file.close();

        cout << "\nBook Added Successfully!\n";
    }

    void displayBooks()
    {
        ifstream file("books.txt");

        cout << "\n----- Book Records -----\n";

        while(file >> bookID)
        {
            file.ignore();

            getline(file, title, '|');
            getline(file, author, '|');
            getline(file, status);

            cout << "\nBook ID: " << bookID << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Status: " << status << endl;
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
            getline(file, author, '|');
            getline(file, status);

            if(bookID == searchID)
            {
                cout << "\nBook Found!\n";

                cout << "Book ID: " << bookID << endl;
                cout << "Title: " << title << endl;
                cout << "Author: " << author << endl;
                cout << "Status: " << status << endl;

                found = true;
            }
        }

        if(found == false)
        {
            cout << "\nBook Not Found!\n";
        }

        file.close();
    }

    void deleteBook()
    {
        ifstream file("books.txt");

        ofstream tempFile("temp.txt");

        int deleteID;

        bool found = false;

        cout << "\nEnter Book ID to Delete: ";
        cin >> deleteID;

        while(file >> bookID)
        {
            file.ignore();

            getline(file, title, '|');
            getline(file, author, '|');
            getline(file, status);

            if(bookID == deleteID)
            {
                found = true;

                continue;
            }

            tempFile << bookID << "|"
                     << title << "|"
                     << author << "|"
                     << status << endl;
        }

        file.close();
        tempFile.close();

        remove("books.txt");
        rename("temp.txt", "books.txt");

        if(found)
        {
            cout << "\nBook Deleted Successfully!\n";
        }
        else
        {
            cout << "\nBook Not Found!\n";
        }
    }

    void updateBook()
    {
        ifstream file("books.txt");

        ofstream tempFile("temp.txt");

        int updateID;

        bool found = false;

        cout << "\nEnter Book ID to Update: ";
        cin >> updateID;

        cin.ignore();

        while(file >> bookID)
        {
            file.ignore();

            getline(file, title, '|');
            getline(file, author, '|');
            getline(file, status);

            if(bookID == updateID)
            {
                found = true;

                cout << "\nEnter New Book Title: ";
                getline(cin, title);

                cout << "Enter New Author Name: ";
                getline(cin, author);
            }

            tempFile << bookID << "|"
                     << title << "|"
                     << author << "|"
                     << status << endl;
        }

        file.close();
        tempFile.close();

        remove("books.txt");
        rename("temp.txt", "books.txt");

        if(found)
        {
            cout << "\nBook Updated Successfully!\n";
        }
        else
        {
            cout << "\nBook Not Found!\n";
        }
    }

    void issueBook()
    {
        ifstream file("books.txt");

        ofstream tempFile("temp.txt");

        int issueID;

        bool found = false;

        cout << "\nEnter Book ID to Issue: ";
        cin >> issueID;

        while(file >> bookID)
        {
            file.ignore();

            getline(file, title, '|');
            getline(file, author, '|');
            getline(file, status);

            if(bookID == issueID)
            {
                found = true;

                if(status == "Issued")
                {
                    cout << "\nBook Already Issued!\n";
                }
                else
                {
                    status = "Issued";

                    cout << "\nBook Issued Successfully!\n";
                }
            }

            tempFile << bookID << "|"
                     << title << "|"
                     << author << "|"
                     << status << endl;
        }

        file.close();
        tempFile.close();

        remove("books.txt");
        rename("temp.txt", "books.txt");

        if(found == false)
        {
            cout << "\nBook Not Found!\n";
        }
    }

    void returnBook()
    {
        ifstream file("books.txt");

        ofstream tempFile("temp.txt");

        int returnID;

        bool found = false;

        cout << "\nEnter Book ID to Return: ";
        cin >> returnID;

        while(file >> bookID)
        {
            file.ignore();

            getline(file, title, '|');
            getline(file, author, '|');
            getline(file, status);

            if(bookID == returnID)
            {
                found = true;

                if(status == "Available")
                {
                    cout << "\nBook Already Available!\n";
                }
                else
                {
                    status = "Available";

                    cout << "\nBook Returned Successfully!\n";
                }
            }

            tempFile << bookID << "|"
                     << title << "|"
                     << author << "|"
                     << status << endl;
        }

        file.close();
        tempFile.close();

        remove("books.txt");
        rename("temp.txt", "books.txt");

        if(found == false)
        {
            cout << "\nBook Not Found!\n";
        }
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
        cout << "4. Delete Book\n";
        cout << "5. Update Book\n";
        cout << "6. Issue Book\n";
        cout << "7. Return Book\n";
        cout << "8. Exit\n";

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
                b.deleteBook();
                break;

            case 5:
                b.updateBook();
                break;

            case 6:
                b.issueBook();
                break;

            case 7:
                b.returnBook();
                break;

            case 8:
                cout << "\nExiting Program...\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 8);

    return 0;
}