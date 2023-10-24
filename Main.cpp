#include "Tree.hpp"
#include <iostream>

int main() {
    Tree apple_tree;
    apple_tree.fruit = "Apple";
    apple_tree.fruits_number = 100;
    apple_tree.fruit_price = 2;

    print_tree(apple_tree);

    int total_price = full_price(apple_tree);
    std::cout << "Total price of all fruits on the tree: " << total_price << std::endl;

    int collected = collect(apple_tree, 30);
    std::cout << "Collected " << collected << " apples." << std::endl;

    print_tree(apple_tree);

    return 0;
}