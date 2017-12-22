#ifndef ADMIN_H_INCLUDED
#define ADMIN_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class Admin
{
public:
    Admin(int,int,int);
    void ReportTotalRevenue();
    void DisplayTotalCustomers();
    void DisplayMaxReceipt();

    void Set_TotalRevenue(int);
    void Set_TotalCustomers(int);
    void Set_MaxReceipt(int);
    int  Get_TotalRevenue();
    int  Get_TotalCustomers();
    int  Get_MaxReceipt();
private:
    int TotalRevenue,TotalCustomers,MaxReceipt;


};



#endif // ADMIN_H_INCLUDED
