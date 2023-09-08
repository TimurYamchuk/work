#include "work.h"
#include <iostream>
using namespace std;
work::work()
{
    model = nullptr;
    color = nullptr;
    year = 0;
    price = 0.0;

}

work::work(const char *m, const char *c, int y, double pr)
{
    this->model = new char [strlen(m) + 1];
    strcpy(model,m);
  this->color = new char [strlen(c) + 1];
    strcpy(color,c);
    year = y;
    price = pr;


}

work::~work()
{
    delete [] model;
    delete [] color;
}

void work::Input()
{
    char temp[100]; 
    cout << "Enter model: ";
    cin.getline(temp, 100);
    if (model != nullptr) {
        delete[] model; 
    }
    model = new char[strlen(temp) + 1];
    strcpy(model, temp);

    cout << "Enter color: ";
    cin.getline(temp, 100);
    if (color != nullptr) {
        delete[] color;
    }
    color = new char[strlen(temp) + 1];
    strcpy(color, temp);

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter price: ";
    cin >> price;
}


void work::Print()
{
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
}

char *work::GetModel()
{
    return nullptr;
}

char *work::GetColor()
{
    return nullptr;
}

int work::GetYear()
{
    return year;
}

double work::GetPrice()
{
    return price;
}

void work::SetModel(const char *m)
{
       if(model != nullptr)
{
    cout << model << ".... delete\n";
    delete[]color;
}
     this->model = new char [strlen(m) + 1];
    strcpy(model,m);

}

void work::SetColor(const char *c)
{
    if(color != nullptr)
{
    cout << color << ".... delete\n";
    delete[]color;
}
     this->color = new char [strlen(c) + 1];
    strcpy(color,c);
}

void work::SetYear(int y)
{
    if (year >= 1990 && year <= 2023) {
        this->year = y;
    } else {
        cout << "Year is within the range from 1990 to 2023." << endl;
    }
}

void work::SetPrice(double pr)
{
    if (price >= 10.000 && year <= 100.000) {
           this->price = pr;
    } else {
        cout << "This price from 10000 to 100000." << endl;
    }
 
}
int main()
{
    work a("Audi A5","Red", 2021, 25000);
    a.Print();
    a.Input();
    a.Print();

    return 0;
}