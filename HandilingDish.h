//
// Created by hhab1 on 26/06/2023.
//
#ifndef HANDINGDISH_HANDILINGDISH_H
#define HANDINGDISH_HANDILINGDISH_H
#include "vector"
#include "Dish.h"
#include "string"
using namespace std;

class HandilingDish {
public:
    HandilingDish();
    Dish* findDish(std::string );
    bool addDish(string id, string name, int calories, bool vegetarian, double valor);
    bool addDish(std::string);

    virtual ~HandilingDish();

    const vector<Dish> &getDishes() const;

    void setDishes(const vector<Dish> &dishes);

double sumDish();

private:
    std::vector<Dish*> Dishes;

    vector<Dish *> getDishes();
};


#endif //HANDINGDISH_HANDILINGDISH_H
