

#include<stdio.h>
#include <iostream>
#include<time.h>
using namespace std;

int main()
{
	srand(time(0));
	int a;
	char po[1000][1000];
	cout << "Enter the size of your maze\n";
	int fi, se;
	cin >> fi >> se;
	////////////////////////other line
	for (int i = 0; i < fi; i++)
	{
		for (int j = 0; j < se; j++)
		{
			a = rand() % 5;
			if (a > 2)
			{
				po[i][j] = '#';

			}
			else
			{
				po[i][j] = '.';
			}
		}

	}
	for (int i = 1; i < fi; i++)
	{
		for (int j = 0; j < se; j++)
		{
			cout << po[i][j] << " ";
		}
		cout << endl;
	}
}
