#pragma once

#include <iostream>

class Figure
{
public:
	virtual void drowFigure(void) = 0;
};

class Triangle : public Figure
{
private:
	char symbol;
	int size;
	bool isRightTriangle; // otherwise isosceles

public:
	Triangle(char symbol, int size, bool isRightTriangle)
	{
		this->symbol = symbol;
		this->size = size;
		this->isRightTriangle = isRightTriangle;
	}

	void drowFigure(void);
};

class Rectangle : public Figure
{
private:
	char symbol;
	int sizeA;
	int sizeB;

public:
	Rectangle(char symbol, int sizeA, int sizeB)
	{
		this->symbol = symbol;
		this->sizeA = sizeA;
		this->sizeB = sizeB;
	}

	Rectangle(char symbol, int size) // square
	{
		this->symbol = symbol;
		this->sizeA = size;
		this->sizeB = size;
	}

	void drowFigure(void);
};

class Circle : public Figure
{
public:
	void drowFigure(void);
};
