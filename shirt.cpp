#include "shirt.h"



Shirt::Shirt(){
    num_buttons = 0;
    color = " ";
}

Shirt::Shirt(int b, string c){
    num_buttons = b;
    color = c;
}



int Shirt::get_num_buttons(){
    return num_buttons;
}

string Shirt::get_color(){
    return color;
}



void Shirt::set_num_buttons(int num_buttons){
    this -> num_buttons = num_buttons;
}

void Shirt::set_color(string new_color){
    color = new_color;
}


void Shirt::print_shirt(){
    cout << "Your shirt has "<< num_buttons << " buttons and is " << color << endl;
}



