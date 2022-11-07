#include"AbsFact.h"

int main()
{
    Client user;
    ClothingShop *shop;
    shop = new StreetwearFactory; //BusinessFactory, ClassicFactory
    user.getClothing(shop, SH);
    user.getClothing(shop, TS);
    user.getClothing(shop, PN);
    user.display();
    delete shop;
    return 0;
}