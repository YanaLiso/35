#include <iostream>
#include <ctime>
using namespace std;



/*double powerA3(double a) {

	//double res = a * a * a;
	//return res;
	return a * a * a;
}
int main() {

	/*Proc1.������� ������� PowerA3(A), ����������� ������
	������� ����� A � ������������ ��(�������� ������������).
	� ������� ���� ������� ����� ������ ������� ���� ��������� �����.*/
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << " x = " << x << "x^3 = " << x3 << endl;
	}*/

	/*Proc2.������� 2 ������� powerA2(�), powerA4(A), ����������� ������
	� ��������� ������� ����� A � ������������ ��� �������(���������
	�������� �������������).� ������� ���� ������� ����� ������ � 
	��������� ������� ���� ��������� �����*/


/*double powerA2(double a) {
	return a * a;
}
double powerA4(double a) {
	return powerA2(a)* powerA2(a);

}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x4 = powerA4(x);
		double x2 = powerA2(x);
		cout << " x = " << x << "x^2 = " << x2 << "X^4" << x4 << endl;


}*/


/*Proc3.������� 2 ������� aMean(X, Y), gMean(X, Y), ����������� ������� ��������������
aMean = (X + Y) / 2 � ������� �������������� gMean = ? X�Y ���� ������������� �����
X � Y(X � Y � ������� ��������� ������������� ����).� ������� ���� ������� ����� �������
�������������� � ������� �������������� ��� 10 ��� ��������� �����.*/


/*double aMean(double x, double y) {
	return (x + y) / 2;
}
double gMean(double x, double y) {
	return sqrt(x * y);
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 20; i++) {
		double x1 = rand() % 101 * 0.1;
		double y2 = rand() % 101 * 0.1;
		cout << " x = " << x1 << "y = " << y1 << "sr_aref = " <<
			aMean(x1, y2) << " sr_geom = " << gMean(x1, y2) << endl;*/


	/*Proc4.������� 2 ������� triangleP(a) � triangleS(a), ����������� �� �������
	a ��������������� ������������ ��� �������� P = 3�a � ������� S = a 2 � ? 3 / 4 
	(��������� �������� �������������).� ������� ���� ������� ����� ��������� � �������
	���� �������������� ������������� � ������� ���������(������� ������ � ����������).*/



/*double triangleP(double a) {
	return 3 * a;
}
double triangleS(double a) {
	return a * a * sqrt(3) / 4;
}
int main() {
	double a;
	for (int i = 1; i <= 5; i++) {
		cout << "vvedite torony treygolnika";
		cin >> a;
		cout << " P = " << triangleP(a) << "S = " << triangleS(a) << endl;
	}
}*/



/*Proc5.������� 2 ������� rectP(x1, y1, x2, y2) � rectS(x1, y1, x2, y2), ����������� ��������
P � ������� S �������������� �� ���������, ������������� ���� ���������, �� �����������(x1, y1),
(x2, y2) ��� ��������������� ������.� ������� ���� ������� ����� ��������� � ������� ����
��������������� � ������� ���������������� ���������.*/



double rectP(double x1, double y1, double x2, double y2) {
	double a = abs(x2 - x1);
	double b = abs(y2 - y1);
	return a * 2 + b * 2;
	
}
double rectS(double x1, double y1, double x2, double y2) {
	double a = abs(x2 - x1);
	double b = abs(y2 - y1);
	return a * b;
}
int main() {
	double x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "vvedite koordinaty pryamougolnika";
	cout << " P = " << rectP(x1, x2, y1, y2) << "S = " << rectS(x1, x2, y1, y2) << endl;
}