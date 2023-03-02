#include<iostream>
using namespace std;
int isgreat(int num1,int num2,int num3);
main()
{
  int result , num1 , num2 ,num3 ;
  cout<<"Enter number 1 : ";
  cin >> num1;
  cout<<"Enter number 2 : ";
  cin >> num2;
  cout<<"Enter number 3 : ";
  cin >> num3;
  result = isgreat(num1 , num2 , num3);
  cout <<result;

}

int isgreat(int num1, int num2, int num3)
{
  int result;

  if(num1 > num2 && num1 > num3 )
  {
   result = num1;
  }

   else if(num2 > num1 && num2 > num3 )
  {
   result = num2;
  }

   else if(num3 > num1 && num3 > num2 )
  {
    result = num3;
  }
  else{
    result = num1;
  }
  return result;
}