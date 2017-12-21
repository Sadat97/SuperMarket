#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include "Item.h"
#include <fstream>

using namespace std;


class Stock
{
    public:
        Stock(int);
        Stock (Stock &);
        Stock();
        ~Stock();
        void LoadStock();
        void LoadStock(int);
        Item* get_items (int);
        int s=13;
        Stock operator=(Stock&);
    private:
            Item *items;

};

#endif // STOCK_H
