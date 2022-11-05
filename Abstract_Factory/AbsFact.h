#pragma once


//abstract products
class Shirt
{
private:
//some attribution
public:
    void printShirt();
};

class TShirt
{
private:
//some attribution
public:
    void printTShirt();
};

class Pants
{
private:
//some attribution
public:
    void printPants();
};

//concrete products
class StreetwearShirt : public Shirt
{
public:
    void printClothing();
};

class BusinessShirt : public Shirt
{
public:
    void printClothing();
};

class ClassicShirt : public Shirt
{
public:
    void printClothing();
};

class StreetwearTShirt : public TShirt
{
public:
    void printClothing();
};

class BusinessTShirt : public TShirt
{
public:
    void printClothing();
};

class ClassicTShirt : public TShirt
{
public:
    void printClothing();
};

class StreetwearPants : public Pants
{
public:
    void printClothing();
};

class BusinessPants : public Pants
{
public:
    void printClothing();
};

class ClassicPants : public Pants
{
public:
    void printClothing();
};

//abstract factory
class ClothingShop
{
public:
    virtual Shirt* getShirt();
    virtual TShirt* getTShirt();
    virtual Pants* getPants();
};

//concrete factories
class StreetwearFactory : public ClothingShop
{
public:
    Shirt* getShirt();
    TShirt* getTShirt();
    Pants* getPants();
};

class BusinessFactory : public ClothingShop
{
public:
    Shirt* getShirt();
    TShirt* getTShirt();
    Pants* getPants();
};

class ClassicFactory : public ClothingShop
{
public:
    Shirt* getShirt();
    TShirt* getTShirt();
    Pants* getPants();
};

//Client
class Client;