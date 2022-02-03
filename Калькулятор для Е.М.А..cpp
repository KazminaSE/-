// Калькулятор для Максимки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b,q, it, ed, selection;
	while (true)
	{
		cout << "Введите два числа" << endl;
		a = 0;
		b = 0;
		cin >> a >> b;
		cout << "Выберете математическую операцию" << endl <<
			"1. Сложение:" << endl <<
			"2. Вычитание:" << endl <<
			"3. Умножение:" << endl <<
			"4. Деление:" << endl <<
			"5. Возедение в степень:" << endl <<
			"6. Возведение в корень:" << endl <<
			"7. Расчет массы:" << endl;
		cin >> selection;
		switch (selection)
		{
		case 1:
			cout << "Сложение:" << a + b << endl;
			break;
		case 2:
			cout << "Вычитание:" << a - b << endl;
			break;
		case 3:
			cout << "Деление:" << a * b << endl;
			break;
		case 4:
			if (b != 0)
			{
				cout << "Деление:" << a / b << endl;
			}
			else
			{
				cout << "Ошибка" << endl;
			}
			break;
		case 5:
			cout << "Возведение в степень:" << pow(a, b) << endl; "/n";
			break;
		case 6:
			cout << "Возведение в корень:" << sqrt(a) << endl;
			break;
		case 7:
			cout << "Введите массу в кг:";
			cin >> a, b;
			cout << "Введите еиницу измерения массы(8-кг, 9-мг, 10-г, 11-т, 12-ц): ";
			cin >> ed;
			switch (ed)
			{
			case 8:
				cout << "Киллограмм" << (it = a * 1) << endl;
				break;
			case 9:
				cout << "Миллиграмм" << (it = a * 10000000) << endl;
				break;
			case 10:
				cout << "Грамм" << (it = a * 1000) << endl;
				break;
			case 11:
				cout << "Тонн" << (it = a / 1000) << endl;
				break;
			case 12:
				cout << "Центнеров" << (it = a / 100) << endl;
				break;
			}

		}
	}
	if (a = q)
	{
		cout << "Введите число чтобы продолжить счет" << endl;
		exit(q);
	}
	else
		cout << "Ошибка" << endl;
}


	


