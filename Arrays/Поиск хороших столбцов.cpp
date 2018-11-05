/*
https://informatics.msk.ru/moodle/mod/statements/view3.php?chapterid=1412&run_id=2115r216281#1
Дана таблица N × N, заполненная целыми числами. Петр Первый считает столбец хорошим, если тот содержит число Х. Требуется для каждого столбца выяснить, является ли тот хорошим.

Входные данные
В первой строке число X, не превышающее по модулю 2*109. Во второй строке число N (1 <= N <= 100), В следующих N строках по N целых чисел, не превышающих по модулю 2*109 – числа в ячейках таблицы.

Выходные данные
Для каждого столбца выведите YES, если в нем есть число Х, и NO в противном случае. (Каждый ответ с новой строки)

Примеры
входные данные
1789
1
1789
выходные данные
YES
*/

#include <iostream>
#include <stdio.h>  
 
using namespace std;
 
void matrix()
{
    int N,x,k=0;
    cin >> x >> N;
    int** mas;
    mas = new int*[N];
    for (int i = 0; i < N; i++)
    {
        mas[i] = new int[N];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mas[i][j];
        }
    }
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < N; i++)
        {
            if (mas[i][j] == x)
            {
                cout << "YES" << endl;
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            cout << "NO" << endl;
        }
        k = 0;
    }
}
 
int main()
{
    matrix();
    system("pause");
    return 0;
}