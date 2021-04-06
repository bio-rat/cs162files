//By: Matthew Hawkins for Fall 2020 CS 162

#ifndef DEMO2
#define DEMO2

#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;


struct Grocery{

    string type;
    string name;
    float price;

};

Grocery * create_grocery_list(int);

void get_grocery_list(Grocery *, int, ifstream &);

void create_sorted_list(Grocery *, int, ofstream &);

void delete_grocery_list(Grocery *);

bool operator < (const Grocery & a, const Grocery & b);

#endif