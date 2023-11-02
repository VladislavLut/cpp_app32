#ifndef FUNC_H
#define FUNC_H

#include <iostream>
#include <string>

struct Card {
    std::string rank;
    std::string suit;
};

void displayCard(const Card& card);

#endif 
