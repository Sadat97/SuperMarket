#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Item
{
    public:
        Item();
        Item(string,string,int,int,int);
        void set_Name(string);
        void set_Type(string);
        void set_ID(int);
        void set_Avamount(int);
        void set_Price(int);

        string get_Name();
        string get_Type();
        int get_ID();
        int get_Avamount();
        int get_Price();
        void display_items(int);


    private:
        string Name;
        string Type;
        int ID;
        int Avamount;
        int Price;

};

#endif // ITEM_H
