#ifndef H_SHIRT
#define H_SHIRT

#include <iostream>
#include <string>
using namespace std;

class Shirt{

    private:
        int num_buttons;
        string color;


    public:

        //Constructor
        Shirt();
        Shirt(int, string);
        //Getters/Accessors
        int get_num_buttons();
        string get_color();

        //Setters/Mutators
        void set_num_buttons(int);
        void set_color(string);

        //Other
        void print_shirt();

};



#endif