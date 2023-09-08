#include <iostream>
#include "work.h"
using namespace std;

int main()
{

work a ("Audi A5","Red", 2021, 25000);
char* model = a. GetModel();
cout<<model<<endl;
a.SetColor("White");
char*color = a.GetColor();
cout<<color<<endl;
int year = a.GetYear();
cout<< year <<endl;
double price = a.GetPrice();
cout << price <<endl;

}

