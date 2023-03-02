#include<iostream>
using namespace std;
string chktitle(int age , char gender);
main()
{
    int age;
    char gender;
    cout<<"please enter your age : ";
    cin >>age;
    cout<<"Enter your gender : ";
    cin >>gender;
    string result;
    result = chktitle(age , gender);
    cout <<result;
}
string chktitle(int age , char gender)
{
    string result;
    if(gender == 'm' && age >=16)
    {
        result = "Mr. ";
    }
      else  if(gender == 'm' && age <16)
    {
       result ="Master ";
    }
      else  if(gender == 'f' && age >=16)
    {
        result ="Ms. ";
    }
      else  if(gender == 'f' && age <16)
    {
       result = "Miss";
    }
    return result;
}