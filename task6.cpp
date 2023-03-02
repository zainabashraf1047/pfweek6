#include<iostream>
using namespace std;
float lowprice(int km, string time);
main()
{
    string time;
    int km;
    float result;
    cout<<"Enter time : ";
    cin >>time;
    cout<<"Enter distance you want to travel : ";
    cin >>km;
    result = lowprice(km,time);
    cout<<"The minimum fare is : " <<result;

}
float lowprice(int km, string time)
{
    float result;
    if((time == "day " || "night") && km <=20)
    {
        result = km*0.09;
    }
     else if((time == "day" || "night") && (km <= 100 && km>20))
    {
        result = km*0.06;
    }
     else if(time == "day" && km > 100)
    {
        result = (km*0.79)+0.70;
    }
      else if(time == "night" && km > 100)
    {
          result =(km*0.90)+0.70;
    }
    return result;
}