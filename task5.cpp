#include<iostream>
using namespace std;

float totalIncome(string screen, int row, int columns);
main()
{
    string screen;
    int row;
    int columns;
   cout<<"Enter screen type : ";
   cin >>screen;
   cout<<"Enter number of rows : ";
   cin >>row;
   cout<<"Enter number of columns : ";
   cin>>columns;
   float result;
   result = totalIncome(screen , row , columns);
   cout<<"Total income is : "<<result << " euro";
}
float totalIncome(string screen, int row, int columns)
{
    float result;
    if(screen =="premiere")
    {
        result = row*columns*12;
    }
    else if(screen =="normal")
    {
        result = row*columns*7.5;
    }
     else if(screen =="discount")
    {
        result = row*columns*5;
    }
    return result;


}
