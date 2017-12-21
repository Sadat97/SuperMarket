#include <iostream>
#include "Item.h"
#include "Stock.h"
#include"admin.h"
using namespace std;


int main()
{
    Stock obj;
    Item *it= new Item [obj.s];
    for (int i=0;i<obj.s;i++)
    {
        it[i].set_Name(obj.get_items(i)->get_Name());
        it[i].set_Type(obj.get_items(i)->get_Type());
        it[i].set_ID(obj.get_items(i)->get_ID());
        it[i].set_Price(obj.get_items(i)->get_Price());
        it[i].set_Avamount(obj.get_items(i)->get_Avamount());
    }

    cout<<"   "<<"         NAME    |      "<<"TYPE      |    "<<"ID      |       "<<"AVALIABLE AMOUNT    |     "<<"PRICE\n";
for (int i=0;i<obj.s;i++)
 {
        cout<<setw(2)<<i;
        it[i].display_items(obj.s);
}
    admin o;
    o.addnewitem(obj);
    o.UpExistingItem(*it);

for (int i=0;i<obj.s;i++)
 {
        cout<<setw(2)<<i;
        it[i].display_items(obj.s);
}
    return 0;
}
