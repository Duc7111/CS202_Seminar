#pragma once

enum clth{SH, TS, PN};

//abstract products
class Shirt
{
private:
//some attribution
public:
    virtual void print() = 0;
};

class TShirt
{
private:
//some attribution
public:
    virtual void print() = 0;
};

class Pants
{
private:
//some attribution
public:
    virtual void print() = 0;
};

//concrete products
class StreetwearShirt : public Shirt
{
public:
    void print() override;
};

class BusinessShirt : public Shirt
{
public:
    void print() override;
};

class ClassicShirt : public Shirt
{
public:
    void print() override;
};

class StreetwearTShirt : public TShirt
{
public:
    void print() override;
};

class BusinessTShirt : public TShirt
{
public:
    void print() override;
};

class ClassicTShirt : public TShirt
{
public:
    void print() override;
};

class StreetwearPants : public Pants
{
public:
    void print() override;
};

class BusinessPants : public Pants
{
public:
    void print() override;
};

class ClassicPants : public Pants
{
public:
    void print() override;
};

//abstract factory
class ClothingShop
{
public:
    virtual Shirt* getShirt() = 0;
    virtual TShirt* getTShirt() = 0;
    virtual Pants* getPants() = 0;

};

//concrete factories
class StreetwearFactory : public ClothingShop
{
public:
    Shirt* getShirt() override;
    TShirt* getTShirt() override;
    Pants* getPants() override;
};

class BusinessFactory : public ClothingShop
{
public:
    Shirt* getShirt() override;
    TShirt* getTShirt() override;
    Pants* getPants() override;
};

class ClassicFactory : public ClothingShop
{
public:
    Shirt* getShirt() override;
    TShirt* getTShirt() override;
    Pants* getPants() override;
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

    void getClothing(ClothingShop*, clth);
    void display();
};