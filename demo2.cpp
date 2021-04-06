//By: Matthew Hawkins for Fall 2020 CS 162

#include "./demo2.h"

Grocery * create_grocery_list(int item_num){
    Grocery * grocery_list = new Grocery[item_num];
    return grocery_list;
}

void get_grocery_list(Grocery * grocery_list, int item_num, ifstream & ifile){
    for(int x = 0; x < item_num; x++){
        ifile >> grocery_list[x].type;
        ifile >> grocery_list[x].name;
        ifile >> grocery_list[x].price;
    }
}

void create_sorted_list(Grocery * grocery_list, int item_num, ofstream & ofile){
    sort(grocery_list, grocery_list+item_num);
    for(int x = 0; x < item_num; x++){
        ofile << grocery_list[x].type;
        ofile << " ";
        ofile << grocery_list[x].name;
        ofile << " ";
        ofile << grocery_list[x].price;
        ofile << "\n";
    }
}

bool operator < (const Grocery & a, const Grocery & b){
    return a.price < b.price;
}
