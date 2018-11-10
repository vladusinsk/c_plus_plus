#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class stepen
{
private:
	int first;
	int second;
public:
	stepen(int _first, int _second)
	{
		first = _first;
		second = _second;
	}
	int power()
	{
		int b=1;
		for (int i = 0; i < second; i++)
		{
			b = b * first;
		}
		return b;
	}
	void display()
	{
		cout << first << " " << second << endl;
	}
};

stepen* make_stepen()
{
	int f, s;
	cin >> f >> s;
	stepen *p = new stepen(f, s);
	return p;
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{
	stepen* p = make_stepen();
	p->display();
	cout << p->power() << endl;
	system("pause");
	return 0;
}


