//
// Created by sadat on 12/18/17.
//

#ifndef SUPERMARKETSIM_CUSTOMER_H
#define SUPERMARKETSIM_CUSTOMER_H

#include <iostream>
#include "Time.h"
#include "Item.h"

class Customer {

private:
  int ID ,currentArrayPlace ;
    static  int staticInt ;
  Time ArrivalTime , CheckOutTime;
  Item * itemlist  = new   Item  [currentArrayPlace];
  int  * amountItem = new   int   [currentArrayPlace];
  Time  ShoppingDuration;
public:
    Customer();
    void BuyItems(int item_id , int itemAmount);
    int  GetTotal();
  /*  //--Getters--\\ */
   Time getCheckOut();


};





#endif //SUPERMARKETSIM_CUSTOMER_H
