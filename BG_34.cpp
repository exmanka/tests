#include <iostream>>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float X, Y, A, B;
	cout << "������� X (�� ���������� ������)" << endl;
	cin >> X;
	cout << "������� A (���� ���������� ������)" << endl;
	cin >> A;
	cout << "������� Y (�� ������)" << endl;
	cin >> Y;
	cout << "������� B (���� ������)" << endl;
	cin >> B;

	cout << "1 �� ���������� ������ ����� " << A / X << " ������" << endl;
	cout << "1 �� ������ ����� " << B / Y << " ������" << endl;
	cout << "���������� ������� ������ ������ � " << (A / X) / (B / Y) << " ���" << endl;
}