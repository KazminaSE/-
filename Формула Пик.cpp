// Формула Пик.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");

	float s, i, b;
	cout << "Введите количество точек внутри фигуры:" << endl;
	cin >> i;
	cout << "Введите количество точек на фигуре:" << endl;
	cin >> b;
	s = (i + (b / 2)) - 1;
	cout << "Площадь=";
	cout << s << endl;
	return 0;
}


