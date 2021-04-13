#ifndef H_SHIRT
#define H_SHIRT

#include <iostream>
#include <string>
using namespace std;

//Class declaration/member variables:
class Shirt{

    private:
        int num_button;
        string color;

    public:


    //Constructors
    Shirt();
    Shirt(int, string);
    


    //Accessors - Getters
    int get_num_buttons();

    string get_color();


    //Mutators - Setters

    void set_num_buttons(int);

    void set_color(string);



    //Other Methods
    void print_shirt();



};


#endif