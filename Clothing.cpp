#include<iostream>

#include"Clothing.h"

using namespace std;

void StreetwearShirt::printClothing()
{
    cout << "streetwear shirt" << endl;
}

void BusinessShirt::printClothing()
{
    cout << "business shirt" << endl;
}

void ClassicShirt::printClothing()
{
    cout << "classic shirt" << endl;
}

void StreetwearTShirt::printClothing()
{
    cout << "streetwear T-shirt" << endl;
}

void BusinessTShirt::printClothing()
{
    cout << "business T-shirt" << endl;
}

void ClassicTShirt::printClothing()
{
    cout << "streetwear T-shirt" << endl;
}

void StreetwearPant::printClothing()
{
    cout << "streetwear Pant" << endl;
}

void BusinessPant::printClothing()
{
    cout << "business Pant" << endl;
}

void ClassicPant::printClothing()
{
    cout << "streetwear Pant" << endl;
}

Client::Client() : pClothing(nullptr){}

void Client::getClothing(int i)
{
    switch (i)
    {
    case 1:
        if(pClothing) delete pClothing;
        pClothing = new StreetwearShirt;
        break;
    case 2:
        if(pClothing) delete pClothing;
        pClothing = new BusinessShirt;
        break;
    case 3:
        if(pClothing) delete pClothing;
        pClothing = new ClassicShirt;
        break;
    case 4:
        if(pClothing) delete pClothing;
        pClothing = new StreetwearTShirt;
        break;
    case 5:
        if(pClothing) delete pClothing;
        pClothing = new BusinessTShirt;
        break;
    case 6:
        if(pClothing) delete pClothing;
        pClothing = new ClassicTShirt;
        break;
    case 7:
        if(pClothing) delete pClothing;
        pClothing = new StreetwearPant;
        break;
    case 8:
        if(pClothing) delete pClothing;
        pClothing = new BusinessPant;
        break;
    case 9:
        if(pClothing) delete pClothing;
        pClothing = new ClassicPant;
        break;
    
    default:
        break;
    }
}

void Client::printClothing()
{
    pClothing->printClothing();
}

Client::~Client()
{
    delete pClothing;
}