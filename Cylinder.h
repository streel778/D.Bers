#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED

class Cylinder
{
    double* H;  // высота
protected:
    Figure *F;  // фигура
public:
    Cylinder(Figure*, double);
    ~Cylinder();
    double CalcVolume();
    void Show();
};

class CirCylinder : public Cylinder
{
    CirCylinder(Circle*, double);
public:
    static CirCylinder* CreateInstance(int,double);
    int GetRadius();
    void SetRadius(int);
    ~CirCylinder();
};

class RectCylinder : public Cylinder
{
    RectCylinder(Rectangle*, double);
public:
    static RectCylinder* CreateInstance(int,int,double);
    int GetA();
    int GetB();
    void SetA(int);
    void SetB(int);
    ~RectCylinder();
};

class RhCylinder : public Cylinder
{
    RhCylinder(Rhombus*, double);
public:
    static RhCylinder* CreateInstance(int,int,double);
    int GetA();
    int GetB();
    void SetA(int);
    void SetB(int);
    ~RhCylinder();
};

#endif // CYLINDER_H_INCLUDED
