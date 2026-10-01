#ifndef Operator_Overloading
#define Operator_Overloading

class Point
{
private:
	int x;
	int y;
	int arr[5] = { 1, 2, 3, 4, 5 };
public:
	Point(int x, int y);
	Point();
	~Point();
	bool operator==(const Point& other) const;
	bool operator!=(const Point& other) const;
	Point operator+(const Point& other) const;
	Point operator-(const Point& other) const;
	Point operator*(const Point& other) const;
	Point operator/(const Point& other) const;
	Point& operator++();
	Point& operator++(int value);
	Point& operator--();
	Point& operator--(int value);
	int& operator[](int index);
	void Print() const;
};

#endif 