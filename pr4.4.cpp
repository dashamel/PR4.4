// Lab_04.4.cpp
// < ������� ���'� >
// ����������� ������ � 4.4
// ��������� �������, ������ ��������: ������� � �����������
// ������ 10
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
	int main()
{
		int x;//������� ��������
	double y; //��������� ���������� ������
	double R; //������� ��������
	double xp;
	double xk;
	double dx;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	//������������ � ����� ����

	x = xp;
	while (x <= xk)
	{
		if (x <= (-8 - R))
			y = R;
		else
			if ((-8 - R) <= x <= -8)
				y = -(sqrt(R * R - (x + 8) * (x + 8)));
			else
				if (-8 <= x <= (-8 + R))
					y = -(sqrt(R * R - (x + 8) * (x + 8)));
				else
					if ((-8 + R) <= x <= -4)
						y = R;
					else
						if (-4 <= x <= 2)
							y = ((-5 + R) / 6.0) * x;
						else
							if (2 <= x)
								y = x - 3;
		cout << "|" << setw(7) << setprecision(2) << y << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	cin.get();
	return 0;
}