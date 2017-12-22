
#include "../include/admin.h"

admin::admin()
{
}

void admin :: addnewitem(Stock &obj)

{
    int id,price,avamount;
    string name ,type ;
    cout<<"\nEnter the ( name ,Type , Avamount ,ID , Price)\n";
    cin>>name >>type >>avamount>>id >>price;


    ofstream file;

    file.open("Items.txt",ios::app);

    file<<name<<" "<<type<<" "<<avamount<<" "<<id<<" "<<price<<endl;

    file.close();

    obj.s++;

    obj.LoadStock(obj.s);
}


void admin :: UpExistingItem(Item &obj)
{
    int u,up,ua;
    cout<<"what is the Item that you need to do Update :\n";
    cin>>u;
    cout<<"enter the (AVamount) , (price)\n";
    cin>>up>>ua;
    obj.set_Avamount(up);
    obj.set_Price(ua);
}
