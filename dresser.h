#ifndef H_DRESSER
#define H_DRESSER

#include "./shirt.h"
#include <stdlib.h> // Used for rand

class Dresser{

    private:
        Shirt my_shirts[10];

    public:

    /*===Use your constructors to create and shuffle your deck!===*/
        Dresser();
    

    //Accessors/Getters
        Shirt get_shirt(int);

    //Mutators/Setters
        void set_shirt(int, Shirt);
        
    //Other
        void print_dresser();
        Shirt select_random_shirt();

};


#endif