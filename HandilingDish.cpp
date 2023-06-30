//
// Created by hhab1 on 26/06/2023.
//

#include "HandilingDish.h"
#include <iostream>

HandilingDish::HandilingDish() {}


Dish *HandilingDish::findDish(std::string id) {
    for (Dish *dish  : Dishes) {
        if (dish->getId().compare(id)==0){
            return dish;
        }

    }
    return NULL;
}


bool HandilingDish::addDish(std::string id , std::string name , int calories , bool vegetarian , double valor) {
    if (findDish(id) == NULL){
        Dishes.push_back(new Dish(id,name,calories,vegetarian,valor));
        return true;
    }
    return false;
}
std::vector<Dish*>HandilingDish::getDishes()  {
    return Dishes;
}

HandilingDish::~HandilingDish() {

}

double HandilingDish::sumDish() {

double  suma=0.0;
    for (int i = 0; i < Dishes.size() ; ++i) {
        int valor = Dishes[i]->getValor();
        suma += valor;
    }

    return suma;



}

