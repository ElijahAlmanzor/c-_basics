#include <iostream>

/* Structs:

struct type_name {
    member_type1 member_name;

    //basically make a class

} object_names; 
which can be made into objects with specific characteristics  (the member values or even functions - but those are best made as classes!)

*/

//e.g.
struct product {
    int weight;
    double price;
} apple, banana, melon;

void printproduct (product produce);

int main()
{
    //syntax for structs is to use a . parameter
    product mango;
    mango.weight = 1;
    mango.price = 1.5;
    printproduct(mango);

    //structs can also be pointed at by a pointer
    product * pmango;
    pmango = &mango;
    printproduct(*pmango); //dereference * to basically point to its value

    //but can also do this
    std::cout << pmango->price << std::endl;
    std::cout << pmango->weight << std::endl;
}

void printproduct (product produce)
{
    std::cout << produce.price << std::endl; //:: is a namespace parameter
    std::cout << produce.weight << std::endl;
}

//can also have nested structures as well!