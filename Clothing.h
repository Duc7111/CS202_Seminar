#pragma once

class Clothing
{
private:
//some atributions
public:
    virtual void printClothing() = 0;
};

class StreetwearShirt : public Clothing
{
public:
    void printClothing();
};

class BusinessShirt : public Clothing
{
public:
    void printClothing();
};

class ClassicShirt : public Clothing
{
public:
    void printClothing();
};

class StreetwearTShirt : public Clothing
{
public:
    void printClothing();
};

class BusinessTShirt : public Clothing
{
public:
    void printClothing();
};

class ClassicTShirt : public Clothing
{
public:
    void printClothing();
};

class StreetwearPant : public Clothing
{
public:
    void printClothing();
};

class BusinessPant : public Clothing
{
public:
    void printClothing();
};

class ClassicPant : public Clothing
{
public:
    void printClothing();
};

class Client
{
private:
    Clothing* pClothing;
public:
    Client();

    void getClothing(int);
    void printClothing();

    ~Client();
};