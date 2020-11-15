#pragma once

#include <iostream>
#include <vector>

class Mandelbrot {
public:
	int count = 0;
	std::vector < std::vector<double>> points;
	Mandelbrot();
	~Mandelbrot();
	void generateSet(double step);
};