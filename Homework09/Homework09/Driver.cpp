// Aaron Liu
// ITP 165, Spring 15
// Homework 09
// aarontli@usc.edu
//

#include "Hero.h"
#include "StrLib.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

// Load heroes function
// Function syntax:
// [TYPE TO RETURN] function name()

void loadHeroes(std::string inputFile, std::vector<Hero*> &heroVector)
{
    // Input file
    std::ifstream fileInput(inputFile);
    // first you are parsing the file
    // from the file you will know how many heroes there will be
    // you created some vector of TYPE heroes
    
    
    // Loop through each line of file and store in vector
    while (!fileInput.eof())
    {
        std::string line;
        getline(fileInput,line);
        Hero* pointer = new Hero(line);
        //
        heroVector.push_back(pointer);
    }
    std::cout << heroVector.size() << " heroes loaded." << std::endl;
}

// Print roster function
// This function accepts SOME SORT of vector of type Hero
void printRoster(std::vector<Hero*> heroVector)
{
    std::cout << "The following " << heroVector.size() << " heroes are loaded... " << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    // Loop through each vector and call printPowers function
    for (int i = 0; i < heroVector.size(); i++)
    {
        heroVector[i]->printPowers();
        std::cout << "---------------------------------------" << std::endl;
    }
}


// every program will have one main function
// when this program is compiled, you are defining a set of functions above
// once compiled, the program awaits user response
int main()
{
    // Initialize variables
    int option = 0;
    std::string fileName;
    std::string line;
    
    // initialized vector of pointer to heroes
    std::vector<Hero*> heroes;
    
    while (option != 4)
    {
        // Prompt user for selection
        std::cout << "Choose an option: " << std::endl;
        std::cout << "1. Load Heroes" << std::endl;
        std::cout << "2. Print Hero Roster" << std::endl;
        std::cout << "3. Hero Fight!" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "> ";
        std::cin >> option;
        
        // Prompt user for file name
        if (option == 1)
        {
            std::cout << "Enter file to load: ";
            std::cin >> fileName;
            loadHeroes(fileName, heroes);
        }
        // Call print roster function
        if (option == 2)
        {
            // here is where you put in the vector that you initialized earlier 
            printRoster(heroes);
        }
        if (option == 3)
        {
            break;
        }
        if (option == 4)
        {
            std::cout << "Quitting... " << std::endl;
            break;
        }
    }
    
    return 0;
}