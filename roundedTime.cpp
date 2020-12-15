#include <iostream>

using namespace std;

int main()
{
	int h, m, s;
	cout << "Enter hours, minutes and seconds in one row" << endl;
	cin >> h >> m >> s;
	cout << h << "h " << m << "m " << s << "s -> ";
	cout << h << "h " << m + (s / 30) << "m -> ";
	cout << h + (m / 30) << "h" << endl;
	system("pause");
}
