#include <iostream>
#include <string>

class Book {
public:
    Book(std::string title, std::string author);
    ~Book();

    void displayInfo();

private:
    std::string title;
    std::string author;
};

Book::Book(std::string title, std::string author) : title(title), author(author) {
    std::cout << "Book created: " << title << " by " << author << std::endl;
}

Book::~Book() {
    std::cout << "Book destroyed: " << title << " by " << author << std::endl;
}

void Book::displayInfo() {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
}

int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald");
    myBook.displayInfo();
    return 0;
}

