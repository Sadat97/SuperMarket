//
// Created by sadat on 12/18/17.
//
#include "../include/Item.h"
#include "../include/Stock.h"
#include "../include/Customer.h"
#include "../include/Time.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int  Customer :: staticInt = 0;

Time  Customer :: getCheckOut(){

    cout << CheckOutTime.getHour() << " " << CheckOutTime.getMinute() ;
}

Customer :: Customer ()
{

  //Time Functions and Variables
    srand (time(NULL)); // to randomize the numbers every time the program loads

    int x = rand();
    ShoppingDuration.setHour(x % 10 +1 ); // gets a random no. from 1 to 10
    ShoppingDuration.setMinute(x % 59 + 1 ); // gets a random no. from 1 to 59

    CheckOutTime = ArrivalTime + ShoppingDuration ; // gets the checkout by adding the arrival and the duration

  //-------------------------------------------------
  //The Unique ID for each Customer
  //-------------------------------------------------

  ID = staticInt + 1 ;  // Rqm kda Random Generated we Unique
  staticInt++;



}



void Customer :: BuyItems(Item item , int itemAmount)
{

   itemlist[currentArrayPlace] = item;
   amountItem[currentArrayPlace] = itemAmount;
   currentArrayPlace++;
}

int Customer ::GetTotal()
{
    int total = 0 ;
    for (int i = 0 ; i <= currentArrayPlace ; i++)
    {
       total = total + ( itemlist[i].get_Price() * amountItem[i]) ;
    }
    return  total ;

}

