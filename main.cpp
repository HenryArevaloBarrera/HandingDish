#include <iostream>
#include "HandilingDish.h"
using namespace std;
//holahtgfyufyuwef hhfhbfb
//<<<>>> shkifhvo
int main() {
HandilingDish *hd=new HandilingDish();
hd->addDish("233","jdfj",23,false,50);
hd->addDish("23345","jdfj",23, true,50);

cout << *hd->findDish("233")<<endl;
cout << *hd->findDish("23345")<<endl;
    std::cout << "La suma de todos los valores es : "<<hd->sumDish()  << std::endl;


delete(hd);
    return 0;
}
