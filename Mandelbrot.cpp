#include "Mandelbrot.h"

Mandelbrot::Mandelbrot(int repetitionLimit, double step) {
	this->repetitionLimit = repetitionLimit;
	this->step = step;
}

Mandelbrot::~Mandelbrot() {

}

void Mandelbrot::generateSet() {

}

bool Mandelbrot::checkRepetition(double n) {
	//check for false input
	if (n > 2 || n < (-2))return false;

	//init
	bool result = false;
	std::vector<double> z;

	//algo
	for (int i = 0; i < step; i++) {
		double f = pow(z.back(), 2) + n;
		for (double &e : z) {
			if (e == f) {
				result = true;
				break;
			}
		}
		z.push_back(f);
	}

	//return
	return result;
}