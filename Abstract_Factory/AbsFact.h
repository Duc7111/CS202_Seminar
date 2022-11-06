#pragma once



//abstract products
class Shirt
{
private:
//some attribution
public:
    virtual void print();
};

class TShirt
{
private:
//some attribution
public:
    virtual void print();
};

class Pants
{
private:
//some attribution
public:
    virtual void print();
};

//concrete products
class StreetwearShirt : public Shirt
{
public:
    void print();
};

class BusinessShirt : public Shirt
{
public:
    void print();
};

class ClassicShirt : public Shirt
{
public:
    void print();
};

class StreetwearTShirt : public TShirt
{
public:
    void print();
};

class BusinessTShirt : public TShirt
{
public:
    void print();
};

class ClassicTShirt : public TShirt
{
public:
    void print();
};

class StreetwearPants : public Pants
{
public:
    void print();
};

class BusinessPants : public Pants
{
public:
    void print();
};

class ClassicPants : public Pants
{
public:
    void print();
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
class Client
{
private:
    Shirt* pShirt;
    TShirt* pTShirt;
    Pants* pPants;
public:
    Client();
    ~Client();

    void getClothing();
    void display();
};