#include <iostream>
using namespace std;
float calculateBudget(int, int, string);

main()
{
    int budget;
    int people;
    string typeofticket;
    float result;

    cout << "Enter your budget: ";
    cin >> budget;
    cout<<"Enter ticket type : ";
    cin >> typeofticket;
    cout<<"Enter number of people : ";
    cin >> people;
    result = calculateBudget(budget, people, typeofticket);

    if(result >= 0)
    {
        cout << "You can go you have  " << result << " rial" << endl;
    }
    else
    {
        cout << "You cannot go you need  " << result*(-1) << " rial" << endl;
    }

}


float calculateBudget(int budget, int people, string typeofticket)
{
    float amount;

    if(people>0 && people < 5) 
    {
        amount = budget -(budget*75)/100;
    }
    else if(people <= 10)
    {
       amount = budget -(budget*60)/100;
    }
    else if(people <= 25)
    {
       amount = budget -(budget*50)/100;
    }
    else if(people <= 50)
    {
      amount = budget -(budget*40)/100;
    }
    else if(people > 50)
    {
       amount = budget -(budget*25)/100;
    }


    if(typeofticket == "Vip") 
    {
        amount = amount - 499.99*people;
    }
    if(typeofticket == "Normal")
    {
        amount = amount - 249.99*people;
    }
    return amount;
}