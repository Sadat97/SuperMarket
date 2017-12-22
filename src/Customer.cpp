//
// Created by sadat on 12/18/17.
//
#include "../include/Stock.h"
#include "../include/Customer.h"
#include "../include/Time.h"
#include <iostream>
#include <cstdlib>
using namespace std;


int  Customer :: staticInt = 0;

Time  Customer ::getCheckOut(){

    cout << CheckOutTime.getHour() << " " << CheckOutTime.getMinute() ;
}

Customer :: Customer ()
{

  //Time Functions and Variables
    srand (time(NULL));

    int x = rand();
    ShoppingDuration.setHour(x % 10 +1 );
    ShoppingDuration.setMinute(x % 59 + 1 );

    CheckOutTime = ArrivalTime + ShoppingDuration ;

  //-------------------------------------------------
  //The Unique ID for each Customer
  //-------------------------------------------------

  ID = staticInt + 1 ;  // Rqm kda Random Generated we Unique
  staticInt++;



}



void Customer ::BuyItems(int item_id , int itemAmount)
{
   Stock item;
   itemlist[currentArrayPlace] = item.get_items(item_id);
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

