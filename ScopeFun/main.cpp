#include <iostream>
using namespace std;

void someFunction(int aParam);
void modifyGlobal();

double myGlobalDouble = 3.14159;
int counter = 0;


int main()
{
	int localToMain = 20;
	cout << "The local to main variable is " << localToMain << endl;
	cout << "global doube (in main) is " << myGlobalDouble << endl;

	cout << "Counter before looping " << counter << endl;
	for (int i = 0; i < 100; i++)
	{
		modifyGlobal();
	}

	someFunction(25);
	someFunction(28);
	someFunction(32);

	return 0;
}

void someFunction(int aParam)
{
	int myLocalNum = 100;
	myLocalNum++;
	myGlobalDouble++;

	cout << "My local number is " << myLocalNum << endl;
	cout << "The parameter is " << aParam << endl;
	cout << "My global double (in someFunction) is " << myGlobalDouble << endl;
}

void modifyGlobal()
{
	counter++;
	cout << counter << endl;
}