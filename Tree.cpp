#include "Tree.hpp"
#include <iostream>

void print_tree(const Tree& tree) {
    std::cout << "Fruit: " << tree.fruit << std::endl;
    std::cout << "Number of fruits: " << tree.fruits_number << std::endl;
    std::cout << "Price per fruit: " << tree.fruit_price << std::endl;
}

int full_price(const Tree& tree) {
    return tree.fruits_number * tree.fruit_price;
}

int collect(Tree& tree, int collected_fruits) {
    if (collected_fruits > tree.fruits_number) {
        collected_fruits = tree.fruits_number;
    }

    int earnings = collected_fruits * tree.fruit_price;
    tree.fruits_number -= collected_fruits;

    return earnings;
}