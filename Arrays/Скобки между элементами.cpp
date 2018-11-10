#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void brackets_between()
{
	char s[1000];
	int k,i=0;
	cin >> s;
	k = strlen(s);
	if (k % 2 == 1)
	{
		for (int i = 0; i < k; i++)
		{
			if (i < k / 2)
			{
				cout << s[i] << "(";
			}
			else if (i > k / 2)
			{
				cout << s[i] << ")";
			}
		}
	}
	else if (k % 2 == 0)
	{
		for (int i = 0; i < k; i++)
		{
			if (i < k / 2)
			{
				cout << s[i] << "(";
			}
			else if (i > k / 2)
			{
				cout << ")" << s[i];
			}
		}
	}
	cout << endl;
}

int main()
{
	brackets_between();
	system("pause");
	return 0;
}