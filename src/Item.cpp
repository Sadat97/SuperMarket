#include "../include/Item.h"

Item::Item()
{
}

Item::Item(string N,string T,int I,int A,int P)
{
    Name=N;
    Type=T;
    ID=I;
    Avamount=A;
    Price=P;

}

void Item :: display_items(int s)
{
    cout<<"- "<<setw(12)<<this->get_Name()<<"    | "<<setw(10)<<this->get_Type()<<"     | "<<setw(8)<<this->get_ID()
        <<"   |               "<<setw(2)<<this->get_Avamount()<<"          |   "<<setw(2)<<this->get_Price()<<"\n";


}



void Item :: set_Name(string n) {Name=n;}
void Item :: set_Type(string t) {Type=t;}
void Item :: set_ID(int i)      {ID=i;}
void Item :: set_Avamount(int a){Avamount = a;}
void Item :: set_Price(int p)   {Price =p;}


string Item :: get_Name() {return Name;}
string Item :: get_Type() {return Type;}
int Item :: get_ID()      {return ID;}
int Item :: get_Avamount(){return Avamount;}
int Item :: get_Price()   {return Price;}
