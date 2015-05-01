// Aaron Liu
// ITP 165, Spring 15
// Homework 09
// aarontli@usc.edu
//

#pragma once
#include <vector>
#include <iostream>
#include <string>

// You have .h files to tell the compiler
// When you first run the program, there will exist some sort of class with THESE SPECIFIC functions

class Hero
{
// Declare class Hero private variables
    // private variables
    // only accessible by objects of this class
    // Hero h1 = new Hero();
    // Hero h2 = new Hero();
    
    private:
        int maxHealth;
        int cHealth;
        std::string heroName;
    // initializing a vector of strings of some object
        std::vector<std::string> heroPowers;
    
    public:
    // Constructor without parameters
    Hero();
    // Constructor with parameters
    Hero(std::string input);
    
    // Name getter
    std::string getName();
    
    // Current health getter
    int getHealth();
    
    // Print the hero's powers
    void printPowers();
    
    // Print the hero's name and health
    void printHealth();
};