// Aaron Liu
// ITP 165, Spring 15
// Homework 09
// aarontli@usc.edu
//

#include "Hero.h"
#include "StrLib.h"
#include <iostream>
#include <string>
#include <vector>

// CPP FILES DEFINE THE FUNCTIONS YOU DECLARE IN .H FILES

Hero::Hero()
{
    // THIS IS AN EXAMPLE
    cHealth = 5;
    maxHealth = 10;
    
    // in the main file
    // Hero h1 = new Hero();
    //cout<<h1.getHealth()<<endl;
}

Hero::Hero(std::string input)
{
    // initialize vector of strings
    std::vector<std::string> hero;
    char splitChar = '|';
    hero = strSplit(input, splitChar);
    heroName = hero[0];
    char splitPower = ',';
    heroPowers = strSplit(hero[1], splitPower);
    maxHealth = std::stoi(hero[2]);
    cHealth = std::stoi(hero[2]);
    
    // Hero h1 = new Hero();
    // You are storing a vector of strings because you need unique names for each instance of hero
    
}

std::string Hero::getName()
{
    return heroName;
}

int Hero::getHealth()
{
    return cHealth;
}

void Hero::printPowers()
{
    std::cout << getName() << " has the following powers..." << std::endl;
    for (int i = 0; i < heroPowers.size(); i++)
    {
        std::cout << heroPowers[i] << std::endl;
    }
}

void Hero::printHealth()
{
    std::cout << cHealth;
}