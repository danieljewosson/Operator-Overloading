#include <iostream>
#include "OperatorOverloading.h"


Point::Point(int x, int y) : x(x), y(y) {}

Point::Point() {}

Point::~Point() {}

bool Point::operator ==(const Point & other) const
{
	return this->x == other.x && this->y == other.y;
}

bool Point::operator!=(const Point& other) const
{
	return !(this->x == other.x && this->y == other.y);
}

Point Point::operator+(const Point& other) const
{
	return Point(this->x + other.x, this->y + other.y);
}

Point Point::operator-(const Point& other) const
{
	return Point(this->x - other.x, this->y - other.y);
}

Point Point::operator*(const Point& other) const
{
	return Point(this->x * other.x, this->y * other.y);
}

Point Point::operator/(const Point& other) const
{
	return Point(this->x / other.x, this->y / other.y);
}

Point& Point::operator++() 
{
	this->x++;
	this->y++;
	return *this;
}

Point& Point::operator++(int value)
{
	Point temp = *this;
	this->x++;
	this->y++;
	return temp;
}

Point& Point::operator--()
{
	this->x--;
	this->y--;
	return *this;
}

Point& Point::operator--(int value)
{
	Point temp = *this;
	this->x--;
	this->y--;
	return temp;
}

int& Point::operator[](int index)
{
	return arr[index];
}

void Point::Print() const
{
	std::cout << "Point(" << x << " , " << y << ")" << std::endl;
}
