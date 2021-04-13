#include "shirt.h"

//Constructors
    Shirt::Shirt(){
        num_button = 0;
        color = " ";
    }
    Shirt::Shirt(int b, string c){
        num_button = b;
        color = c;
    }
    


    //Accessors - Getters
    int Shirt::get_num_buttons(){
        return num_button;
    }

    string Shirt::get_color(){
        return color;
    }


    //Mutators - Setters

    void Shirt::set_num_buttons(int buttons){
        num_button = buttons;
    }

    void Shirt::set_color(string c){
        color = c;
    }



    //Other Methods
    void Shirt::print_shirt(){
        cout << num_button << " " << color << endl;
    }
