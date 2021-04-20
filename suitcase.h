#ifndef H_SUITCASE
#define H_SUITCASE

#include "./shirt.h"
#include "./dresser.h"

class Suitcase{

    private:
        Shirt * packed;
        int num_shirts;

    public:

    //Default constructor
        Suitcase();

    //======THE BIG THREE=====//

    //Copy constructor (another parameterized constructor!)
        Suitcase(const Suitcase &);
    //Destructor
        ~Suitcase();
    //Assignment Operator overload
        Suitcase & operator=(const Suitcase &);


    //Getters & Setters
        int get_num_shirts();
        Shirt get_shirt(int);
        void set_num_shirt(int);


    //Misc Functions
        void add_shirt(Shirt);
        void print_suitcase();







    
};


#endif