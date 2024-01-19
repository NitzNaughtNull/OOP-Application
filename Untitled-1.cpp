#include <iostream>
#include <vector>

// Klasa reprezentująca książkę
class Book {
public:
    // Konstruktor
    Book(std::string title, std::string author, int year)
        : title(title), author(author), year(year) {}

    // Metoda do wyświetlania informacji o książce
    void displayInfo() const {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << year << std::endl;
    }

private:
    // Atrybuty reprezentujące informacje o książce
    std::string title;
    std::string author;
    int year;
};

// Klasa reprezentująca bibliotekę
class Library {
public:
    // Metoda do dodawania książki do biblioteki
    void addBook(const Book& book) {
        books.push_back(book);
    }

    // Metoda do wyświetlania informacji o wszystkich książkach w bibliotece
    void displayAllBooks() const {
        std::cout << "Books in the library:\n";
        for (const auto& book : books) {
            book.displayInfo();
            std::cout << "---------------\n";
        }
    }

private:
    // Wektor przechowujący książki w bibliotece
    std::vector<Book> books;
};

int main() {
    // Tworzymy kilka przykładowych książek
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    Book book3("1984", "George Orwell", 1949);

    // Tworzymy bibliotekę i dodajemy do niej książki
    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Wyświetlamy wszystkie książki w bibliotece
    library.displayAllBooks();

    return 0;
}
