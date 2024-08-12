#include<iostream>
using namespace std;
class matrix{
	int item[3][3];
	public:
	void getdata(void);
	void putdata(void);
	matrix add(matrix, matrix)
};
void matrix :: getdata(void)
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin<<item[i][j];
		}
	}
}
void matrix :: putdata(void)
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<item[i][j];
		}
	}
}
void matrix :: add(matrix x, matrix y)
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			item[i][j] = x.item[i][j] + y.item[i][j];
		}
	}
}
int main()
{
	matrix a,b,result;
	cout<<"Enter the values of matrix A : "<<endl;
	a.getdata();
	cout<<"Enter the values of matrix B : "<<endl;
	b.getdata();
	cout<<"You entered values in matrix A : "<<endl;
	a.putdata();
	cout<<"You entered values in matrix B : "<<endl;
	b.putdata();
	result.add(a,b);
	cout<<"Addition : "<<endl;
	result.putdata();
	return 0;
}