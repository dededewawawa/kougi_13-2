#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <math.h>

using namespace std;
#include "Counter.h"

int main()
{
	int i;
	Counter x, y;


	for(i=0; i<5; i++)
	{
		if(!x) cout << "�[���ł�\n";
		cout << unsigned(x) << endl;
		cout << x++ << " " << ++y << endl;
	}

	for(i=0; i < 5; i++)
	{
		if(!y) cout << "�[���ł�\n";
		cout << x-- << " " << --y << endl;
	}

                     
	return 0;
}



