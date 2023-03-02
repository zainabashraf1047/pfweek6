#include<iostream>
using namespace std;
float calculatebudget(int people, string tickettype , float budget);
main()
{
  int people;
  float budget;

  string tickettype;
  float ticket;
  cout<<"Enter your budget : ";
  cin>>budget;
  cout<<"Enter number of people : ";
  cin>>people;
  cout<<"Enter ticket type : ";
  cin>>tickettype;
  ticket = calculatebudget(people,tickettype,budget);
  cout<<"result is : "<<ticket ;

}
float calculatebudget(int people, string tickettype , float budget)
{
    float ticket;
    float budget1;
    if((people >1 && people<=4)&& tickettype=="vip" )
    {
        budget = budget-(budget*75)/100;
        budget1 = budget*499.99 * people;
        if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
        
    }
// 
    if((people >1 && people<=4)&& tickettype=="normal" )
    {
        budget = budget-(budget*75)/100;
        budget1 = budget*249.99 * people;
              if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }


// .....
    if((people>=5 && people<=9)&& tickettype=="vip" )
    {
        budget = budget-(budget*60)/100;
        budget1 = budget*499.99 * people;
            if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
// 

    if((people>=5 && people<=9) && tickettype=="normal")
    {
        budget = budget-(budget*60)/100;
        budget1 = budget*249.99 * people;
                if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
// .....


        if(people>=10 && people<=24 && tickettype=="vip" )
    {
        budget = budget-(budget*50)/100;
        budget1 = budget*499.99 * people;
                if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }

    // 
         if(people>=10 && people<=24 && tickettype=="normal" )
    {
        budget = budget-(budget*50)/100;
        budget1 = budget*249.99 * people;
                if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
// ......

        if(people>=25 && people<=49  && tickettype=="vip")
    {
        budget = budget-(budget*40)/100;
        budget1 = budget*499.99 * people;
                if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
    // 
            if(people>=25 && people<=49  && tickettype=="normal")
    {
        budget = budget-(budget*40)/100;
        budget1 = budget*249.99 * people;
                if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
    // .....



        if(people>=50 && people<=200  && tickettype=="normal")
    {
        budget = budget-(budget*25)/100;
          budget1 = budget*249.99 * people;
                  if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
    // 
            if(people>=50 && people<=200 && tickettype=="vip")
    {
        budget = budget-(budget*25)/100;
         budget1 = budget*499.99 * people;
                 if(budget1>budget)
        {
            ticket=budget-budget1;
        }
        else if(budget1<budget)
        {
            ticket=budget1-budget;
        }
    }
    return ticket;
}