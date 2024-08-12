#include<iostream>
using namespace<iostream>
class matrix{
    int item[3][3];
    public:
    void getdata(void);
    void putdata(void);
    matrix product(matrix, matrix);
};
void matrix :: getdata(void)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>item[i][j];
        }
    }
}
matrix matrix :: product(matrix x, matrix y)
{
    matrix h;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            h.item[i][j] = x.item[i][j] * y.item[i][j];
        }
    }
    return (h);
}
void matrix :: putdata(void)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<item[i][j]<<" ";
        }
    }
}
int main()
{
    matrix a,b,c,result;
    cout<<"enter matrix a :"<< endl;
    a.getdata();
    cout<<"enter matrix b :"<< endl;
    b.getdata();
    cout<<"you entered matrix a : "<< endl;
    a.putdata();
    cout<<"you entered matrix b : "<< endl;
    b.putdata();
    result=c.product(a,b);
    cout<<"Multiplication : "<<endl;
    result.putdata();
}