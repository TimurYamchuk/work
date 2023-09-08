#include <iostream>

using namespace std;

class work
{
    // ���������� ������- �������� �����
    char* model;
    char* color;
    int year;
    double price;

public: // ��������� ������- �������� �����

    work();
    work(const char* m, const char* c, int y, double pr);
    ~work();
    void Input();
    void Print();

    // ����������
    char* GetModel();
    char* GetColor();
    int GetYear();
    double GetPrice();

    //������������
    void SetModel(const char* m);
    void SetColor(const char* c);
    void SetYear(int y);
    void SetPrice(double pr);

};

