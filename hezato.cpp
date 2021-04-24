// hezato.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<cstdio>
#include <iostream>

using namespace std;
int moverta(int& x, int& y, char arr1[12][13]);
char swicher(char arr[12][13], int x, int y);

int STx, STy;

const char arr2[12][13] = {

{"#""#""#""#""#""#""#""#""#""#""#""#"},
{"#"".""."".""#""."".""."".""."".""#"},
{"."".""#"".""#"".""#""#""#""#"".""#"},
{"#""#""#"".""#""."".""."".""#"".""#"},
{"#""."".""."".""#""#""#"".""#"".""."},
{"#""#""#""#"".""#"".""#"".""#"".""#"},
{"#""."".""#"".""#"".""#"".""#"".""#"},
{"#""#"".""#"".""#"".""#"".""#"".""#"},
{"#""."".""."".""."".""."".""#"".""#"},
{"#""#""#""#""#""#"".""#""#""#"".""#"},
{"#""."".""."".""."".""#"".""."".""#"},
{"#""#""#""#""#""#""#""#""#""#""#""#"}

};

char finall[12][13] = {
{"#""#""#""#""#""#""#""#""#""#""#""#"},
{"#"".""."".""#""."".""."".""."".""#"},
{"."".""#"".""#"".""#""#""#""#"".""#"},
{"#""#""#"".""#""."".""."".""#"".""#"},
{"#""."".""."".""#""#""#"".""#"".""."},
{"#""#""#""#"".""#"".""#"".""#"".""#"},
{"#""."".""#"".""#"".""#"".""#"".""#"},
{"#""#"".""#"".""#"".""#"".""#"".""#"},
{"#""."".""."".""."".""."".""#"".""#"},
{"#""#""#""#""#""#"".""#""#""#"".""#"},
{"#""."".""."".""."".""#"".""."".""#"},
{"#""#""#""#""#""#""#""#""#""#""#""#"}
};
int main()
{
	char arr[12][13] = {
	{"#""#""#""#""#""#""#""#""#""#""#""#"},
	{"#"".""."".""#""."".""."".""."".""#"},
	{"."".""#"".""#"".""#""#""#""#"".""#"},
	{"#""#""#"".""#""."".""."".""#"".""#"},
	{"#""."".""."".""#""#""#"".""#"".""."},
	{"#""#""#""#"".""#"".""#"".""#"".""#"},
	{"#""."".""#"".""#"".""#"".""#"".""#"},
	{"#""#"".""#"".""#"".""#"".""#"".""#"},
	{"#""."".""."".""."".""."".""#"".""#"},
	{"#""#""#""#""#""#"".""#""#""#"".""#"},
	{"#""."".""."".""."".""#"".""."".""#"},
	{"#""#""#""#""#""#""#""#""#""#""#""#"}
	};
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j <13 ; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int x, y;
	cout << "Enter your START point\n";
	cin >> x >> y;
	STx = x;
	STy = y;
	char direct;
	cout << "left:l\tright:r\tup:u\tdown:d\n Enter your move\n";
	moverta(x, y, arr);
	cout << "\nBy by.....";
}

char swicher(char arr[12][13], int x, int y)
{

	if (arr[x + 1][y] == '#' && arr[x][y + 1] == '#')
	{
		if (arr[x][y - 1] == '#' && arr[x - 1][y] == '#')
		{
			return -21;
		}
	}
	cout << endl;
	if (arr[x][y + 1] == '.')
	{
		cout << "Right\t";
	}

	if (arr[x - 1][y] == '.')
	{
		cout << "UP\t";

	}
	if (arr[x + 1][y] == '.')
	{
		cout << "Down\t";
	}
	if (arr[x][y - 1] == '.')
	{
		cout << "Left\t";
	}

}
int k = 0;
int moverta(int& x, int& y, char arr1[12][13])
{

	swicher(arr1, x, y);
	char dirre;
	cin >> dirre;
	switch (dirre)
	{
	case'u':
		x -= 1;
		if (y == 11)
		{
			if (arr1[x][11] == '.')
			{
				k++;
				if (k==1)
				{
					cout << " You Winsssssss congrajolaetion";
				}
				return 100;
			}
		}
		
		if (arr1[x][y] == '.')
		{
			arr1[x][y] = '#';

			finall[x][y] = 'S';
			for (int op = 0; op < 12; op++)
			{
				for (int opp = 0; opp < 13; opp++)
				{
					cout << finall[op][opp]<<" ";
				}
				cout << endl;
			}
			cout << "(" << x << " , " << y << ") ";
			moverta(x, y, arr1);
		}
		else
		{
			cout << "No No No false truen \n\nSTAT Begin\n Enter your START point";

			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 12; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 13; j++)
				{
					finall[i][j] = arr2[i][j];
				}
			}
			cin >> x >> y;
			moverta(x, y, arr1);
		}
		break;
	case 'd':
		
		x += 1;
		if (y == 11)
		{
			if (arr1[x][11] == '.')
			{

				k++;
				if (k == 1)
				{
					cout << " You Winsssssss congrajolaetion";
				}
				return 100;
			}
		}
		if (arr1[x][y] == '.')
		{
			arr1[x][y] = '#';

			finall[x][y] = 'S';
			for (int op = 0; op < 12; op++)
			{
				for (int opp = 0; opp < 13; opp++)
				{
					cout << finall[op][opp]<<" ";
				}
				cout << endl;
			}
			cout << "(" << x << " , " << y << ") ";
			moverta(x, y, arr1);
		}
		else
		{
			cout << "No No No false truen \n\nSTAT Begin\nEnter your START point";
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 12; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 13; j++)
				{
					finall[i][j] = arr2[i][j];
				}
			}
			cin >> x >> y;
			moverta(x, y, arr1);

		}
		break;
	case 'l':
		
		y -= 1;
		if (y == 11)
		{
			if (arr1[x][11] == '.')
			{
				k++;
				if (k == 1)
				{
					cout << " You Winsssssss congrajolaetion";
				}
				return 100;
			}
		}
		if (arr1[x][y] == '.')
		{
			arr1[x][y] = '#';

			finall[x][y] = 'S';
			for (int op = 0; op < 12; op++)
			{
				for (int opp = 0; opp < 13; opp++)
				{
					cout << finall[op][opp]<<" ";
				}
				cout << endl;
			}
			cout << "(" << x << " , " << y << ") ";
			moverta(x, y, arr1);
		}
		else
		{
			cout << "No No No false truen \n\nSTAT Begin\nEnter your START point";
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 12; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 13; j++)
				{
					finall[i][j] = arr2[i][j];
				}
			}
			cin >> x >> y;
			moverta(x, y, arr1);
		}
		break;
	case'r':
		y += 1;
		if (y == 11)
		{
			if (arr1[x][11] == '.')
			{
				k++;
				if (k == 1)
				{
					cout << " You Winsssssss congrajolaetion";
				}
				return 100;
			}
		}
		
		if (arr1[x][y] == '.')
		{
			arr1[x][y] = '#';

			finall[x][y] = 'S';
			for (int op = 0; op < 12; op++)
			{
				for (int opp = 0; opp < 13; opp++)
				{
					cout << finall[op][opp]<<" ";
				}
				cout << endl;
			}
			cout << "(" << x << " , " << y << ") ";
			moverta(x, y, arr1);
		}
		else
		{
			cout << "No No No false truen \n\nSTAT Begin\nEnter your START point";
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 12; j++)
				{
					arr1[i][j] = arr2[i][j];
				}
			}
			for (int i = 0; i <= 11; i++)
			{
				for (int j = 0; j <= 13; j++)
				{
					finall[i][j] = arr2[i][j];
				}
			}
			cin >> x >> y;
			moverta(x, y, arr1);
		}
		break;
	default:
		cout << "You'r wrong\n\n\nSTART AGAIN\n\nEnter your START point";
		for (int i = 0; i <= 11; i++)
		{
			for (int j = 0; j <= 13; j++)
			{
				arr1[i][j] = arr2[i][j];
			}
		}
		for (int i = 0; i <= 11; i++)
		{
			for (int j = 0; j <= 13; j++)
			{
				finall[i][j] = arr2[i][j];
			}
		}
		cin >> x >> y;
		moverta(x, y, arr1);

		break;

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
