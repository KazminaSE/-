#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
private:
	static int kol; 
	double x1;
	double x2;
	double x3;
	double y1;
	double y2;
	double y3;
	double p;
	double s;
	double a;
	double b;
	double c;
public:
	//Triangle();
	Triangle();
	void SetTriangle(double x1, double x2, double x3, double y1, double y2, double y3, double p, double s, double a, double b, double c);
	void SetTriangle(double& x1, double& x2, double& x3, double& y1, double& y2, double& y3, double& p, double& s, double& a, double& b, double& c );
	~Triangle() { cout << "\n" << "delete all"; }
	int getkol() { return kol; }
	void Display(void);
	void Plosh();
	void GetTriangle(double& x1, double& x2, double& x3, double& y1, double& y2, double& y3, double& p, double& s, double& a, double& b, double& c);
	void SetTriangle(double x1, double x2, double x3, double y1, double y2, double y3);
};
int Triangle::kol = 0;
Triangle::Triangle()
{
	SetTriangle(4, 0, 0, 0, 0, 3);
	kol++;
}
void Triangle::SetTriangle(double x1, double x2, double x3, double y1, double y2, double y3, double p, double s, double a, double b, double c)
{
	x1 = x1;
	x2 = x2;
	x3 = x3;
	y1 = y1;
	y2 = y2;
	y3 = y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	p = a + b + c;
	s = sqrt(p / 2) * (p / 2 - a) * (p / 2 - b) * (p / 2 - c);
}
void Triangle::SetTriangle(double x1, double x2, double x3, double y1, double y2, double y3)
{
	x1 = x1;
	x2 = x2;
	x3 = x3;
	y1 = y1;
	y2 = y2;
	y3 = y3;
}
void Triangle::GetTriangle(double& x1, double& x2, double& x3, double& y1, double& y2, double& y3, double& p, double& s, double& a, double& b, double& c)
{
	x1 = x1;
	x2 = x2;
	x3 = x3;
	y1 = y1;
	y2 = y2;
	y3 = y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	p = a + b + c;
	s = sqrt(p / 2) * (p / 2 - a) * (p / 2 - b) * (p / 2 - c);
}
void Triangle::Plosh()
{
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	p = a + b + c;
	s = sqrt(p / 2) * (p / 2 - a) * (p / 2 - b) * (p / 2 - c);
};
void Triangle::Display(void)
{
	cout<< "a=" << a<< "\t" << "b=" << b << "\t" << "c=" << c << "\n" << "p=" << p << "\t" << "s=" << s;
}
int main()
{
	Triangle ob1;
	setlocale(LC_ALL, "ru");
	Triangle ap;
	double x1, x2, x3, y1, y2, y3, p, s, a, b, c;
	ap.GetTriangle(x1, x2, x3, y1, y2, y3, p, s, a, b, c);
	ap.Display();
	cout << "\n" << "kol==" << ob1.getkol();
}



