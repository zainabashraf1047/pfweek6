#include<iostream>
using namespace std;

string same(int num1, int num2 , int num3);
main()
{
    int num1, num2 , num3;
    string result;
    cout<<"Enter number 1 : ";
    cin>>num1;
    cout<<"Enter number 2 : ";
    cin>>num2;
    cout<<"Enter number 3 : ";
    cin>>num3;
    result = same( num1,num2,num3);
    cout<<"Are the numbers same : " <<result;

}

string same(int num1, int num2 , int num3)
{
    string result;
    if(num1 == num2 && num2 == num3 && num1 == num3)
    {
        result ="Yes";
    }
        if(num1 != num2 && num2 != num3 && num1 != num3)
    {
        result ="No";
    }
    return result;
}
