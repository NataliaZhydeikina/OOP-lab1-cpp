// GeometryLab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma once
#include <iostream>
#include <iomanip>
#include "../GeometryLib/Line.h"

using namespace std;

    int main() {
        Line line1(-1, 1, -2, 2);
        cout << "Line distance: " << setprecision(6) << line1.length()<<endl;
        cout << "Angle between a line and the x-axis: " << setprecision(6) << line1.getAngleOX()<<endl;
        cout << "Angle between a line and the y-axis: " << setprecision(6) << line1.getAngleOY()<<endl;

        Line line2(-7, -5, -12, 45);
        cout << "Line2 distance: " << setprecision(6) << line2.length()<<endl;
        cout << "Angle between a line2 and the x-axis: " << setprecision(6) << line2.getAngleOX()<<endl;
        cout << "Angle between a line2 and the y-axis: " << setprecision(6) << line2.getAngleOY()<<endl;
    }



