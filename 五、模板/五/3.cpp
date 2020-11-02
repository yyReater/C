#include <iostream>
#include <math.h>

using namespace std;

class Mean {
private:
	double v1;
	double v2;
public:
	Mean(double v1 = 0, double v2 = 0) : v1(v1), v2(v2) {}
	void mesg(double &v1, double &v2) const;
};

void Mean::mesg(double &v1, double &v2)const{
    double ans = 2.0 * v1 * v2 / (v1 + v2);
}

double mean(double a, double b);

/*从这里填写你的代码*/
double mean(double a, double b){
    Mean *ff = new Mean(a, b);
    ff->mesg(a, b);
    return 2.0 * a * b / (a + b);
}

int main() {
	double x, y, z;
	cin >> x >> y;

	try {
		z = mean(x, y);
		cout << z << endl;
	}
	catch (Mean & bg) {
		double a, b;
		bg.mesg(a, b);
		cout << "throw exception " << a << " " << b << endl;
	}

	return 0;
}