//
// Created by hhab1 on 26/06/2023.
//

#include "Dish.h"

Dish::Dish(const std::string &id, const std::string &name, int calories, bool isvegetable, double valor) : id(id),
                                                                                                           name(name),
                                                                                                           calories(calories),
                                                                                                           isvegetable(
                                                                                                                   isvegetable),
                                                                                                           valor(valor) {}
const std::string &Dish::getId() const {
    return id;
}

void Dish::setId(const std::string &id) {
    Dish::id = id;
}

const std::string &Dish::getName() const {
    return name;
}

void Dish::setName(const std::string &name) {
    Dish::name = name;
}

int Dish::getCalories() const {
    return calories;
}

void Dish::setCalories(int calories) {
    Dish::calories = calories;
}

bool Dish::isIsvegetable() const {
    return isvegetable;
}

void Dish::setIsvegetable(bool isvegetable) {
    Dish::isvegetable = isvegetable;
}

double Dish::getValor() const {
    return valor;
}

void Dish::setValor(double valor) {
    Dish::valor = valor;
}

Dish::~Dish() {

}

std::ostream &operator<<(std::ostream &os, const Dish &dish) {
    os << "id: " << dish.id << " name: " << dish.name << " calories: " << dish.calories << " isvegetable: "
       << dish.isvegetable << " valor: " << dish.valor;
    return os;
}
