//By: Matthew Hawkins for Fall 2020 CS 162

#include "./demo2.h"

int main(){

    ifstream unsorted_list ("inputs.txt", ios::in);
    ofstream sorted_list ("sorted_lists.txt", ios::out);
    int grocery_num;
    unsorted_list >> grocery_num; 
    Grocery * grocery_list = create_grocery_list(grocery_num);
    get_grocery_list(grocery_list, grocery_num, unsorted_list);
    create_sorted_list(grocery_list, grocery_num, sorted_list);
    


    return 0;
}
