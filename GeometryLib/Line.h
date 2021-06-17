#pragma once
# define PI           3.14159265358979323846
class Line
{
	private:
		float _x1;
		float _y1;
		float _x2;
		float _y2;
		float getWidth() {
			return _x2 - _x1; ;
		}
		float getHeight()
		{
			return _y2 - _y1;
		}
	public:
		Line(float x1, float y1, float x2, float y2) {
			_x1 = x1;
			_y1 = y1;
			_x2 = x2;
			_y2 = y2;
		}
		~Line() {
		}
		float* getCoordinates() {
			float arr[4] = {_x1, _y1, _x2, _y2};
			return arr;
		}
		double length() {
			double w = getWidth();
			double h = getHeight();
			double len = sqrt(pow(w, 2) + pow(h, 2));
			return round(len*100)/100;
		}
		float getAngleOX() {
			float w = getWidth();
			float angle = acos(w / length()) * (180 / PI);
			float result = round(angle*100)/100;
			return result;
		}
		float getAngleOY()
		{
			float h = getHeight();
			float angle = acos(h / length()) * (180 / PI);
			float result = round(angle*100)/100;
			return result;
		}
};

