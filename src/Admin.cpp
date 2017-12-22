#include "../include/Admin.h"

Admin::Admin(int a,int b,int c)
{
    TotalRevenue=a;
    TotalCustomers=b;
    MaxReceipt=c;
}
void Admin::ReportTotalRevenue()
{
    cout<<"Total Revenue = "<<TotalRevenue;
}
void Admin::DisplayTotalCustomers()
{
    cout<<"The currently available customers are "<<TotalCustomers;
}
void Admin::DisplayMaxReceipt()
{
    cout<<"Max Receipt Value = "<<MaxReceipt;
}
    void Admin::Set_TotalRevenue(int a)  {TotalRevenue=a;}
    void Admin::Set_TotalCustomers(int b){TotalCustomers=b;}
    void Admin::Set_MaxReceipt(int c)    {MaxReceipt=c;}
    int  Admin::Get_TotalRevenue()  {return TotalRevenue;}
    int  Admin::Get_TotalCustomers(){return TotalCustomers;}
    int  Admin::Get_MaxReceipt()    {return MaxReceipt;}
