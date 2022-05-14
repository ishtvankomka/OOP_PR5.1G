#pragma once
#include <string>
#include <iostream>
#include "Triangle.hpp"
using namespace std;

class RightAngled : public Triangle
{
private:
    double area;
public:
    RightAngled();
    RightAngled(double, double, double);
    RightAngled(RightAngled&);
    RightAngled& operator = (const RightAngled&);

    friend void Read(RightAngled&);
    friend void Display(RightAngled&);
    friend bool Init(Triangle&);
    
    void set_area(double value) { area = value; };
    double get_area();

    void area_calculate();
};
