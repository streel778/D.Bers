#include <iostream>
#include <string.h>
#include "Figure.h"

using namespace std;

Figure::Figure()
{
cout<<"\t Figure::Figure() \n";
}

Figure::~Figure()
{
cout<<"\t Figure::~Figure() \n";
}


Circle::Circle()
{
cout<<"\t Circle::Circle() \n";
    r = new int ;
}

Circle::Circle(int r1)
{
cout<<"\t Circle::Circle(int r1)) \n";
    r = new int;

while (r1<=0)
{
    cout<<"--!-- Set error, r <= 0"<<endl;
    cout<<"--> Enter new r > 0, r= ";
        cin>>r1;
}

    *r=r1;
}

Circle::~Circle()
{
cout<<"\t Circle::~Circle() \n";
    delete r;
}

void Circle::Show()
{
    cout<<"\t\n Circle info: \n";
    cout<<"\t\t Radius = "<<*r<<endl<<endl;
}

double Circle::CalcArea()
{
cout<<"\t double Circle::CalcArea() \n";
    double Area = 3.14*((*r)*(*r));

    return Area;
}

int Circle::Get_r()
{
    cout<<"\t int Get_r()"<<endl;
    return *r;
}

void Circle::Set_r(int r1)
{
    cout<<"\t void Set_r()"<<endl;
    *r=r1;
}

Figure* Circle::Copy()
{
cout<<"\t Figure* Circle::Copy() \n";
    Figure* C = new Circle (*r);        // позднее связывание
    return C;
}



Rectangle::Rectangle()
{
cout<<"\t Rectangle::Rectangle() \n";
    a = new int;
    b = new int;
}

Rectangle::Rectangle(int a1, int b1)
{
cout<<"\t Rectangle::Rectangle(int a1, int b1) \n";
    a = new int;
    b = new int;

while (a1<=0 )
{
    cout<<"--!-- Set error, a <= 0"<<endl;
    cout<<"--> Enter new a > 0, a= ";
        cin>>a1;
}
while (b1<=0)
{
    cout<<"--!-- Set error, b <= 0"<<endl;
    cout<<"--> Enter new b > 0, b= ";
        cin>>b1;
}
    *a=a1;
    *b=b1;
}

Rectangle::~Rectangle()
{
cout<<"\t Rectangle::~Rectangle() \n";
    delete a;
    delete b;
}

void Rectangle::Show()
{
    cout<<"\t\n Rectangle info: \n";
    cout<<"\t\t a = "<<*a<<endl;
    cout<<"\t\t b = "<<*b<<endl<<endl;
}

double Rectangle::CalcArea()
{
cout<<"\t double Rectangle::CalcArea() \n";
    double Area = (*a)*(*b);
    return Area;
}

int Rectangle::Get_a()
{
    cout<<"\t int Get_a()"<<endl;
    return *a;
}

int Rectangle::Get_b()
{
    cout<<"\t int Get_b()"<<endl;
    return *b;
}

void Rectangle::Set_a(int a1)
{
    cout<<"\t void Rectangle::Set_a(int a1)"<<endl;
    *a=a1;
}

void Rectangle::Set_b(int b1)
{
    cout<<"\t void Rectangle::Set_b(int b1)"<<endl;
    *b=b1;
}

Figure* Rectangle::Copy()
{
cout<<"\t Figure* Rectangle::Copy() \n";
    Figure* Rec = new Rectangle (*a,*b);        // позднее связывание
    return Rec;
}



Rhombus::Rhombus()
{
cout<<"\t Rhombus::Rhombus() \n";
    a = new int;
    b = new int;
}

Rhombus::Rhombus(int a1, int b1)
{
cout<<"\t Rhombus::Rhombus(int a1, int b1) \n";
    a = new int;
    b = new int;

while (a1<=0 )
{
    cout<<"--!-- Set error, a <= 0"<<endl;
    cout<<"--> Enter new a > 0, a= ";
        cin>>a1;
}
while (b1<=0)
{
    cout<<"--!-- Set error, b <= 0"<<endl;
    cout<<"--> Enter new b > 0, b= ";
        cin>>b1;
}
    *a=a1;
    *b=b1;
}

Rhombus::~Rhombus()
{
cout<<"\t Rhombus::~Rhombus() \n";
    delete a;
    delete b;
}

void Rhombus::Show()
{
    cout<<"\t\n Rhombus info: \n";
    cout<<"\t\t a = "<<*a<<endl;
    cout<<"\t\t b = "<<*b<<endl<<endl;
}

double Rhombus::CalcArea()
{
cout<<"\t double Rectangle::CalcArea() \n";
    double Area = ((*a)*(*b))/2;
    return Area;
}

int Rhombus::Get_a()
{
    cout<<"\t int Get_a()"<<endl;
    return *a;
}

int Rhombus::Get_b()
{
    cout<<"\t int Get_b()"<<endl;
    return *b;
}

void Rhombus::Set_a(int a1)
{
    cout<<"\t void Rhombus::Set_a(int a1)"<<endl;
    *a=a1;
}

void Rhombus::Set_b(int b1)
{
    cout<<"\t void Rhombus::Set_b(int b1)"<<endl;
    *b=b1;
}

Figure* Rhombus::Copy()
{
cout<<"\t Figure* Rhombus::Copy() \n";
    Figure* Rh = new Rhombus (*a,*b);        // позднее связывание
    return Rh;
}

