#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class kursor
{
private:
	int first;
	int second;
	int razmer_x; // размер экрана
	int razmer_y; // размер экрана
public:
	kursor(int _first, int _second, int _razmer_x, int _razmer_y)
	{
		first = _first;
		second = _second;
		razmer_x = _razmer_x;
		razmer_y = _razmer_y;
	}
	int changex(int f)
	{
		if (f <= razmer_x && f >= 0)
		{
			first = f;
			return 0;
		}
		else
		{
			return -1;
		}
	}
	int changey(int s)
	{
		if (s <= razmer_y && s>=0)
		{
			second = s;
			return 0;
		}
		else
		{
			return -1;
		}
	}
	void print()
	{
		cout << "x coordinate:" << first << "\ny coordinate:" << second << endl;
	}
};

kursor* make_kursor()
{
	int f, s, rx, ry;
	cin >> f >> s >> rx >> ry;
	kursor *k = new kursor(f, s, rx, ry);
		return k;
}

int main()
{
	int x, y;
	kursor* k = make_kursor();
	cin >> x >> y;
	if (k->changex(x) == -1)
		cout << "mistake coordinate x" << endl;
	if (k->changey(y) == -1)
		cout << "mistake coordinate y" << endl;
	k->print();
	system("pause");
	return 0;
}


