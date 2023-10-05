// liste_chaine2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <time.h>
#include "List_it.h"

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    //Test de tps avec l'iterateur 

    List* l = new List();
    clock_t timeAdd = clock();

    for (int i = 0; i < 100002; i++) {
        l->add(i);
    }

    timeAdd = clock() - timeAdd; 
     
    clock_t timeGet1 = clock(); 
    l->get(1000); 
    timeGet1= clock() - timeGet1; 

    clock_t timeGet2 = clock(); 
    l->get(10000); 
    timeGet2 = clock() - timeGet2;

    clock_t timeGet3 = clock();
    l->get(100000);
    timeGet3 = clock() - timeGet3;

    std::cout << "Time to make : " << timeAdd << ((float)timeGet1) / CLOCKS_PER_SEC << " secondes \n";

    std::cout << "Time for 100 : " << timeGet1 << ((float)timeGet1) / CLOCKS_PER_SEC << " secondes \n";
    std::cout << "Time for 1000 : " << timeGet2 << ((float)timeGet2) / CLOCKS_PER_SEC << " secondes \n";
    std::cout << "Time for 9999 : " << timeGet3 << ((float)timeGet3) / CLOCKS_PER_SEC << " secondes \n";





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
