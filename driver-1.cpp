/*
 * Matthew Hawkins
 * CS 162 Lab 3 Demo
 * Classes and rand() function
 */

#include "./shirt.h"
#include "./dresser.h"

int main(){

    srand(time(NULL));
    
    Shirt s1;
    Shirt s2(8, "teal");
    s1.print_shirt();
    s2.print_shirt();

    Dresser d1;
    d1.print_dresser();
    cout << "\nYour randomly selected shirt was: ";
    d1.select_random_shirt().print_shirt();



    return 0;
}


/*=====================NOTES======================/*
 * 1) How will you create a deck with 52 unique cards? 
 *       -Mod Operator? 
 *       -Division Operator?
 *       -Constructor?
 * 
 * 2) How will you shuffle cards within deck?
 *       -Rand function?
 *       -Swap cards?
 /*================================================*/