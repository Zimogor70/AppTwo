#pragma once
//На основе этого примера

#include <iostream>
#include <string>

using namespace std;

class One {
    double num;
public:
    One(double n) : num(n) {};
    virtual double getNum() { return num; }
};

class OneAndHalf : public One {
public:
    OneAndHalf(double n) : One(n) {};
    double getNum() { return One::getNum() * 1.5; };
};

class Two : public One {

public:
    Two(double n) : One(n) {}
    double getNum() { return One::getNum() * 2; }
};

class N : public One {

public:
    N(double n) : One(n) {}
    double getNum() { return One::getNum() * One::getNum(); }
};
//Создайте класс Two, который возвращает удвоенное произведение созраняемого числа,
//  и класс N, который умножает на n сохраняемое число