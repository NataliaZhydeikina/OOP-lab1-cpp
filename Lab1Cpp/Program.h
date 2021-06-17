#pragma once
#include <iostream>
#include "../GeometryLib/Line.h"

using namespace std;
class Program
{
	int main() {
        Line line1(-1, 1, -2, 2);
        cout<<"Line distance: " + to_string(line1.length());
        cout << "Angle between a line and the x-axis: " + to_string(line1.getAngleOX());
        cout << "Angle between a line and the y-axis: " + to_string(line1.getAngleOY());

        Line line2(-7, -5, -12, 45);
        cout << "Line2 distance: " + to_string(line2.length());
        cout << "Angle between a line2 and the x-axis: " + to_string(line2.getAngleOX());
        cout << "Angle between a line2 and the y-axis: " + to_string(line2.getAngleOY());
		cout << endl;
	}
};

