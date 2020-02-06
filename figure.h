#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure
{
public:
    Figure();
    virtual ~Figure();
    virtual void Show()=0;
    virtual double CalcArea()=0;

    virtual Figure* Copy()=0;
};


    class Circle : public Figure
    {
        int *r;
    public:
        Circle ();
        Circle(int);
        virtual ~Circle();
        virtual void Show();
        virtual double CalcArea();

        virtual Figure* Copy();

        int Get_r();
        void Set_r(int);
    };


    class Rectangle : public Figure
    {
        int *a, *b;
    public:
        Rectangle ();
        Rectangle(int,int);
        virtual ~Rectangle();
        virtual void Show();
        virtual double CalcArea();

        virtual Figure* Copy();

        int Get_a();
        int Get_b();
        void Set_a(int);
        void Set_b(int);
    };

    class Rhombus : public Figure
    {
        int *a, *b;
    public:
        Rhombus ();
        Rhombus(int,int);
        virtual ~Rhombus();
        virtual void Show();
        virtual double CalcArea();

        virtual Figure* Copy();

        int Get_a();
        int Get_b();
        void Set_a(int);
        void Set_b(int);
    };

#endif // FIGURE_H_INCLUDED
