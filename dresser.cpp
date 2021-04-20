#include "./shirt.h"
#include "./dresser.h"

/* I could create a constructor here and set each of my shirts' values with
 * their parameterized constructors, or their setters! For this demo, I'll leave
 * them as default
 */

Dresser::Dresser(){
    string colors [10] = {"red", "orange", "yellow", "green", "blue", "purple", "black", "white"};

    for(int x = 0; x < 10; x++){
    my_shirts[x].set_color(colors[rand() % 8]);
    my_shirts[x].set_num_buttons(rand() % 8);
    }
}

Shirt Dresser::get_shirt(int index){
    return my_shirts[index];
}

void Dresser::set_shirt(int index, Shirt shirt){
    my_shirts[index] = shirt;
}

void Dresser::print_dresser(){
    for(int x = 0; x < 10; x++){
        cout << "(" << x << "): ";
        my_shirts[x].print_shirt();
    }
}

Shirt Dresser::select_random_shirt(){
    return my_shirts[rand() % 10];
}

