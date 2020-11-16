#pragma once

#include <iostream>
#include <vector>
#include <cmath>

class Mandelbrot {
public:
	int count = 0;
	std::vector <double> points;
	Mandelbrot(int, double);
	~Mandelbrot();
	void generateSet(int);
private:
	int repetitionLimit;
	double step;
	bool checkRepetition(double);
};