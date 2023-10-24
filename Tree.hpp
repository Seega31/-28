#ifndef TREE_HPP
#define TREE_HPP

#include <string>

struct Tree {
    std::string fruit;
    int fruits_number;
    int fruit_price;
};

void print_tree(const Tree& tree);
int full_price(const Tree& tree);
int collect(Tree& tree, int collected_fruits);

#endif // TREE_HPP