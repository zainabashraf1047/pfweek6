#include<iostream>
using namespace std;
float calculateDiscount(float amount ,string day , string month);
main()
{
  float amount;
  float payable;
  string month;
  string day;
  cout<<"Enter amount : ";
   cin >>amount ;
    cout<<"Enter month : ";
    cin >>month ;
    cout<<"Enter day : ";
    cin >>day ;
   payable = calculateDiscount(amount , day , month);
   cout<<"Price after discount is : "<<payable;

}
float calculateDiscount(float amount ,string day , string month)
{
    float payable = amount;
    if(day == "sunday" && ( month == "october" || month=="march " || month == "august"))
    {
            payable = amount -(amount*10)/100;
            return payable;
    }
    if(day == "monday" && ( month == "november" || month=="december"))
    {
            payable = amount -(amount*5)/100;
            return payable;
    }

    return payable;
}