#ifndef ADMIN_H
#define ADMIN_H
#include"Stock.h"
#include "Item.h"
#include "fstream"
class admin
{
    public:
        admin();
       void UpExistingItem(Item&);
       void ReportAvailableItems(Stock RAI);
       void addnewitem(Stock &);
       void setnam(string n);



};

#endif // ADMIN_H
