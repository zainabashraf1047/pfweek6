#include<iostream>
using namespace std;

float cost(string product, string city , float quantity);
main()
{
   string product;
   string city; 
   float quantity;
   float result;
   cout<<"Enter product : ";
   cin >>product;
   cout<<"Enter city : ";
   cin >>city;
   cout<<"Enter quantity : ";
   cin >>quantity;
   result = cost(product , city , quantity);
   cout<<"Price is : "<<result;

}
float cost(string product, string city , float quantity)
{
  float result;
  if(product=="coffee" && city == "sofia")
  {
    result = quantity*0.50;
  }
// 
   else if(product=="coffee" && city == "plovdiv")
  {
    result = quantity*0.40;
  } 

  // 
     else if(product=="coffee" && city == "varna")
  {
    result = quantity*0.45;
  }
  // 
     else if(product=="water" && city == "sofia")
  {
    result = quantity*0.80;
  }
  // 
       else if(product=="water" && city == "plovdiv" || "varna")
  {
    result = quantity*0.70;
  }
  //
       else if(product=="beer" && city == "sofia")
  {
    result = quantity*1.20;
  }
  //
         else if(product=="beer" && city == "plovdiv")
  {
    result = quantity*1.15;
  }
         else if(product=="beer" && city == "varna")
  {
    result = quantity*1.10;
  }
  // 
           else if(product=="sweets" && city == "sofia")
  {
    result = quantity*1.45;
  }
// 
           else if(product=="sweets" && city == "plovdiv")
  {
    result = quantity*1.30;
  }
  // 
             else if(product=="sweets" && city == "varna")
  {
    result = quantity*1.35;
  }
  // 
             else if(product=="peanuts" && city == "sofia")
  {
    result = quantity*1.60;
  }
  //
             else if(product=="peanuts" && city == "plovdiv")
  {
    result = quantity*1.50;
  }
  // 
             else if(product=="peanuts" && city == "varna")
  {
    result = quantity*1.55;
  }
  return result;
}