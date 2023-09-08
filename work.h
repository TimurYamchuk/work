#include <iostream>

using namespace std;

class work
{
    // реализация класса- закрытая часть
    char* model;
    char* color;
    int year;
    double price;

public: // ИНТЕРФЕЙС класса- открытая часть

    work();
    work(const char* m, const char* c, int y, double pr);
    ~work();
    void Input();
    void Print();

    // инспекторы
    char* GetModel();
    char* GetColor();
    int GetYear();
    double GetPrice();

    //модификаторы
    void SetModel(const char* m);
    void SetColor(const char* c);
    void SetYear(int y);
    void SetPrice(double pr);

};

