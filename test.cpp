#include<iostream>
#include <cstdlib>
#include "test.h"

using namespace std;

void triangle(int n)
{
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1;j <= i;j++)
            cout << "*";
        cout << endl;
    }
}


void square(int n)
{
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
            cout << "*";
        cout << endl;
    }
}

void empty_square(int n)
{
    for(int i = 1; i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
			if(i==1 || j==1 || i==n || j==n)
            	cout << "*";
			else
				cout << " ";
        cout << endl;
    }
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    triangle(n);
	empty_square(n);
}
