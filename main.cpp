#include <iostream>
#include <string.h>
#include "Figure.h"
#include "Cylinder.h"

using namespace std;

int main()
{
    CirCylinder *CirCyl = CirCylinder::CreateInstance(2,1);
    CirCyl->Show();
    CirCyl->SetRadius(3);
    CirCyl->Show();
    cout<<"\t \n CIRCLE Cylinder Volume = "<<CirCyl->CalcVolume()<<endl<<endl;
    cout<<"\t \n CIRCLE Cylinder RADIUS = "<<CirCyl->GetRadius()<<endl<<endl;

    delete CirCyl;

 cout<<"\n ----------------------------------------------------------------- \n";

    RectCylinder *RectCyl = RectCylinder::CreateInstance(2,3,5);
    RectCyl->Show();
    RectCyl->SetA(1);
    RectCyl->SetB(2);
    RectCyl->Show();
    cout<<"\t \n RECTANGLE Cylinder Volume = "<<RectCyl->CalcVolume()<<endl<<endl;
    cout<<"\t \n RECTANGLE Cylinder A = "<<RectCyl->GetA()<<endl<<endl;
    cout<<"\t \n RECTANGLE Cylinder B = "<<RectCyl->GetB()<<endl<<endl;

    delete RectCyl;

cout<<"\n ----------------------------------------------------------------- \n";

    RhCylinder *RhCyl = RhCylinder::CreateInstance(3,4,6);
    RhCyl->Show();
    RhCyl->SetB(2);
    RhCyl->Show();
    RhCyl->Show();
    cout<<"\t \n RHOMBUS Cylinder Volume = "<<RhCyl->CalcVolume()<<endl<<endl;
    cout<<"\t \n RHOMBUS Cylinder A = "<<RhCyl->GetA()<<endl<<endl;
    cout<<"\t \n RHOMBUS Cylinder B = "<<RhCyl->GetB()<<endl<<endl;

    delete RhCyl;

    return 0;
}


