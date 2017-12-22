#include "../include/Stock.h"

Stock::Stock()
{
    items=new Item [s];
    LoadStock();
}

Stock :: Stock(Stock &o)
{
    s=o.s;
    items=new Item [s];
    for (int i=0;i<s;i++)
    {
        items[i].set_Name(o.get_items(i)->get_Name());
        items[i].set_Type(o.get_items(i)->get_Type());
        items[i].set_Avamount(o.get_items(i)->get_Avamount());
        items[i].set_Price(o.get_items(i)->get_Price());

    }



}

Stock::Stock(int i)
{
    items=new Item [i];
    LoadStock(i);
}

Stock::~Stock()
{
    delete []items;
}


void Stock :: LoadStock()
{
    ifstream infile("Items.txt");
    string name,type;
    int id,avamount,price;


    for (int i=0;i<s;i++)
    {
        infile>>name>>type>>id>>avamount>>price;
        items[i]= Item(name,type,id,avamount,price);
    }
    infile.close();
}

void Stock :: LoadStock(int si)
{
    delete [] items;
    items =new Item [si];
    ifstream infile("Items.txt");
    string name,type;
    int id,avamount,price;


    for (int i=0;i<si;i++)
    {
        infile>>name>>type>>id>>avamount>>price;
        items[i]= Item(name,type,id,avamount,price);
    }
    infile.close();
}



Item* Stock :: get_items (int i)
{
    return &(items[i]);
}

Stock Stock::operator =(Stock &obj)
{
    delete [] items;
    obj.s=s;
    items =new Item [s];

    for (int i=0;i<s;i++)
    {
        items[i].set_Name(obj.get_items(i)->get_Name());
        items[i].set_Type(obj.get_items(i)->get_Type());
        items[i].set_Avamount(obj.get_items(i)->get_Avamount());
        items[i].set_Price(obj.get_items(i)->get_Price());

    }

}
