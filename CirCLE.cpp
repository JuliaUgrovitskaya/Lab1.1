#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int  r;
	double pi = 3.14;
	float alpha;
	cout << "������� ������: ";
	cin >> r;	// ���� ����� (�������)
	if (r < 0)	 // �������� �� ������������� �����
	{
		cout << "��� ������������� �����!" << endl;
		return 0;
	}
	if (!cin)	 // �������� �� ���� �� ��������� ��������
	{
		cout << "��� �� �����!" << endl;
		return 0;
	}
	cout << "������� ����: ";
	cin >> alpha;	// ���� ����� (����)
	if (alpha < 0 || alpha > 360)	// �������� �� ������������� �����
	{
		cout << "����� �������� ����" << endl;
		return 0;
	}
	if (!cin)	// �������� �� ���� �� ��������� ��������
	{
		cout << "��� �� �����!" << endl;
		return 0;
	}
	cout << "����� ���������� = " << 2 * pi * r << endl;
	cout << "������� ���������� = " << pi * (r * r) << endl;
	float corner = alpha / 360;		// ������ ������������ �������� ��� ������� ������� ��������� �������
	cout << "������� ��������� ������� = " << pi * (r * r) * corner;
	return 0;
}