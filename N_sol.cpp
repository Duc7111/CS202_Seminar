#include<iostream>

#include"Clothing.h"

using namespace std;

int main()
{
    Client c;
    c.getClothing(7);
    c.printClothing();
    cin.get();
    return 0;
}