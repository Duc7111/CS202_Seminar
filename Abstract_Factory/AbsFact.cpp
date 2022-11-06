#include<iostream>

#include"AbsFact.h"

using namespace std;

void StreetwearShirt::print()
{
    cout << "Streetwear shirt" << endl;
}
void StreetwearTShirt::print()
{
    cout << "Streetwear T-shirt" << endl;
}
void StreetwearPants::print()
{
    cout << "Streetwear pants" << endl;
}

void BusinessShirt::print()
{
    cout << "Business shirt" << endl;
}
void BusinessTShirt::print()
{
    cout << "Business T-shirt" << endl;
}
void BusinessPants::print()
{
    cout << "Business pants" << endl;
}

void ClassicShirt::print()
{
    cout << "Classic shirt" << endl;
}
void ClassicTShirt::print()
{
    cout << "Classic T-shirt" << endl;
}
void ClassicPants::print()
{
    cout << "Classic pants" << endl;
}

Shirt* StreetwearFactory::getShirt()
{
    return new StreetwearShirt;
}
TShirt* StreetwearFactory::getTShirt()
{
    return new StreetwearTShirt;
}
Pants* StreetwearFactory::getPants()
{
    return new StreetwearPants;
}

Shirt* BusinessFactory::getShirt()
{
    return new BusinessShirt;
}
TShirt* BusinessFactory::getTShirt()
{
    return new BusinessTShirt;
}
Pants* BusinessFactory::getPants()
{
    return new BusinessPants;
}

Shirt* ClassicFactory::getShirt()
{
    return new ClassicShirt;
}
TShirt* ClassicFactory::getTShirt()
{
    return new ClassicTShirt;
}
Pants* ClassicFactory::getPants()
{
    return new ClassicPants;
}
