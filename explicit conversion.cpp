//Explicit conversion - it helps to convert datatypes.

#include <iostream>
using namespace std;
int main()
{
	int x = 5;
	float y;
	y= (float)x/2; // datatype converted from int to float
	cout<< "value of Y : " << y << endl;
	return 0;
}
