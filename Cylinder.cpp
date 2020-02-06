#include <iostream>
#include <string.h>
#include "Figure.h"
#include "Cylinder.h"
using namespace std;

Cylinder::Cylinder(Figure* F1, double H1)
{
cout<<"\t Cylinder::Cylinder(Figure* F1, double H1) \n";

    F=F1->Copy();       // копия фигуры
    H=new double;
    *H=H1;
}

Cylinder::~Cylinder()
{
cout<<"\t Cylinder::~Cylinder() \n";
    delete F;
    delete H;
}

void Cylinder::Show()
{
    cout<<"\t\n Cylinder info: \n";
    cout<<"\t\t H= "<<*H<<endl;
    cout<<"\n--------Base info: "<<endl;
    F->Show();
}

double Cylinder::CalcVolume()
{
    return F->CalcArea()*(*H);
}



CirCylinder::CirCylinder(Circle* C1, double H1) :Cylinder(C1,H1)
{
cout<<"\t CirCylinder::CirCylinder(Circle* F1, double H1):Cylinder(F1,H1) \n";
}

CirCylinder::~CirCylinder()
{
cout<<"\t CirCylinder::~CirCylinder() \n";
}

CirCylinder* CirCylinder::CreateInstance(int R1, double H1)
{
cout<<"\t CirCylinder* CirCylinder::CreateInstance(int R1, double H1) :Cylinder(C1,H1) \n";

    Circle* C1 = new Circle(R1);
    CirCylinder *Cyl = new CirCylinder(C1,H1);
    delete C1;
    return Cyl;
}

int CirCylinder::GetRadius()
{
cout<<"\t int CirCylinder::GetRadius() \n";
Circle* C = (Circle*)F;
return C-> Get_r();
}

void CirCylinder::SetRadius(int r1)
{
cout<<"\t int CirCylinder::SetRadius(int r1) \n";
  Circle* C=(Circle*)F;
  C->Set_r(r1);
}


RectCylinder::RectCylinder(Rectangle* F1, double H1) :Cylinder(F1,H1)
{
cout<<"\t RectCylinder::RectCylinder(Rectangle* F1, double H1):Cylinder(F1,H1) \n";
}

RectCylinder::~RectCylinder()
{
cout<<"\t RectCylinder::~RectCylinder() \n";
}

RectCylinder* RectCylinder::CreateInstance(int A1,int B1,double H1)
{
cout<<"\t RectCylinder* RectCylinder::CreateInstance(int A1,int B1,double H1) \n";

    Rectangle* R1 = new Rectangle(A1,B1);
    RectCylinder *Cyl = new RectCylinder(R1,H1);
    delete R1;
    return Cyl;
}

int RectCylinder::GetA()
{
cout<<"\t int RectCylinder::GetA() \n";
Rectangle* R = (Rectangle*)F;
return R->Get_a();
}

int RectCylinder::GetB()
{
cout<<"\t int RectCylinder::GetB() \n";
Rectangle* R = (Rectangle*)F;
return R->Get_b();
}

void RectCylinder::SetA(int a1)
{
cout<<"\t int RectCylinder::SetA(int a1) \n";
Rectangle* R = (Rectangle*)F;
R->Set_a(a1);
}

void RectCylinder::SetB(int b1)
{
cout<<"\t int RectCylinder::SetB(int b1) \n";
Rectangle* R = (Rectangle*)F;
R->Set_b(b1);
}

// Rhombus - ромб

RhCylinder::RhCylinder(Rhombus* F1, double H1) :Cylinder(F1,H1)
{
cout<<"\t RhCylinder::RhCylinder(Rhombus* F1, double H1):Cylinder(F1,H1) \n";
}

RhCylinder::~RhCylinder()
{
cout<<"\t RhCylinder::~RhCylinder() \n";
}

RhCylinder* RhCylinder::CreateInstance(int A1,int B1,double H1)
{
cout<<"\t RhCylinder* RhCylinder::CreateInstance(int A1,int B1,double H1) \n";

    Rhombus* Rh1 = new Rhombus(A1,B1);
    RhCylinder *Cyl = new RhCylinder(Rh1,H1);
    delete Rh1;
    return Cyl;
}

int RhCylinder::GetA()
{
cout<<"\t int RhCylinder::GetA() \n";
Rhombus* Rh = (Rhombus*)F;
return Rh->Get_a();
}

int RhCylinder::GetB()
{
cout<<"\t int RhCylinder::SetB() \n";
Rhombus* Rh = (Rhombus*)F;
return Rh->Get_b();
}

void RhCylinder::SetA(int a1)
{
cout<<"\t int RhCylinder::SetA(int a1) \n";
Rectangle* R = (Rectangle*)F;
return R->Set_a(a1);
}

void RhCylinder::SetB(int b1)
{
cout<<"\t int RhCylinder::SetB(int b1) \n";
Rectangle* R = (Rectangle*)F;
return R->Set_b(b1);
}
