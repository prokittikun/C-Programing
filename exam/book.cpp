#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Book
{
private:
    string name;
    float price;

public:
    Book(string name, float price)
    {
        this->name = name;
        this->price = price;
    }
    string getName()
    {
        return name;
    }
    float getPrice()
    {
        return price;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
};

class BookStore
{
private:
    Book **book;
    int totalBook;

public:
    BookStore()
    {
        book = new Book *[10];
        totalBook = 0;
    }

    void add(string name, float price)
    {   
        book[totalBook] = new Book(name,price);
        totalBook++;
    }

    int getTotalBook(){
        return totalBook;
    }
    
    Book *findBook(string search)
    {
        for (int i = 0; i < totalBook; i++)
        {
            if (search == book[i]->getName())
            {
                return book[i];
            }
        }
        return NULL;
    }

    float getAveragePrice()
    {
        float sum;
        for (int i = 0; i < totalBook; i++)
        {
            sum += book[i]->getPrice() - book[i]->getPrice() * 20 / 100;
        }
        return sum / totalBook;
    }
};

int main()
{
    BookStore proShop;
    proShop.add("yai-ba", 100);
    proShop.add("one-peace", 120);
    proShop.add("naruto", 150);
    cout << proShop.findBook("one-peace")->getPrice() << endl;
    cout << proShop.getAveragePrice();

}