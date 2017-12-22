#include "Stock.h"

Stock::Stock()
{
    items=new Item [s];
    LoadStock();
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
    items =new Item [s];
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



Item* Stock :: get_items (int i)
{
    return &(items[i]);
}
