#include <iostream>
#include "Figures.hpp"

using namespace std;

void Triangle::drowFigure(void)
{
	int offset = 0;

	if (size <= 0) {
		cout << "size <= 0" << endl;
		return;
	}

	cout << endl;
	if (isRightTriangle) {
		for (int i = 0; i <= size; i++) {
			cout << "\t";
			for (int j = 0; j < i; j++) {
				cout << symbol;
			}
			cout << endl;
		}
	} else {
		for (int i = size; i > 0; i--) {
			cout << "\t";
			for (int j = 0; j < i; j++) {
				cout << ' ';
			}
			for (int i = 0; i <= offset * 2; i++) {
				cout << symbol;
			}
			cout << endl;
			offset++;
		}
	}
	cout << endl;
};

void Rectangle::drowFigure(void)
{
	cout << endl;
	for (int i = 0; i < sizeA; i++) {
		cout << "\t";
		for (int j = 0; j < sizeB; j++) {
			cout << symbol;
		}
		cout << endl;
	}
	cout << endl;
};

void Circle::drowFigure(void)
{
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << "\t";
		for (int j = 0; j < 10; j++) {
			if (i == 0 && j == 4 || i == 0 && j == 5 ||
				i == 1 && j == 2 || i == 1 && j == 7 ||
				i == 2 && j == 1 || i == 2 && j == 8 ||
				i == 4 && j == 0 || i == 4 && j == 9 ||
				i == 5 && j == 0 || i == 5 && j == 9 ||
				i == 7 && j == 1 || i == 7 && j == 8 ||
				i == 8 && j == 2 || i == 8 && j == 7 ||
				i == 9 && j == 4 || i == 9 && j == 5) {
				cout << '*';
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
};

int main()
{
	Triangle right('q', 9, true);
	right.drowFigure();

	Triangle isosceles('f', 7, false);
	isosceles.drowFigure();

	Rectangle rect('0', 5, 6);
	rect.drowFigure();

	Rectangle square('r', 7);
	square.drowFigure();

	Circle circle;
	circle.drowFigure();

	return 0;
}