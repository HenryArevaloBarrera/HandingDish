//
// Created by hhab1 on 26/06/2023.
//
//<<<>>>
#ifndef HANDINGDISH_DISH_H
#define HANDINGDISH_DISH_H
#include <string>
#include <ostream>

class Dish {
public:
    Dish();
    Dish(const std::string &id, const std::string &name, int calories, bool isvegetable, double valor);

    const std::string &getId() const;

    void setId(const std::string &id);

    const std::string &getName() const;

    void setName(const std::string &name);

    int getCalories() const;

    void setCalories(int calories);

    bool isIsvegetable() const;

    void setIsvegetable(bool isvegetable);

    double getValor() const;

    void setValor(double valor);

    virtual ~Dish();

    friend std::ostream &operator<<(std::ostream &os, const Dish &dish);

private:
    std::string id;
    std::string name;
    int calories;
    bool isvegetable;
    double valor;

};


#endif //HANDINGDISH_DISH_H
