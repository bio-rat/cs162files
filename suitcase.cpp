#include "./shirt.h"
#include "./dresser.h"
#include "./suitcase.h"

Suitcase::Suitcase(){
    packed = nullptr;
    num_shirts = 0;
}

void Suitcase::add_shirt(Shirt s1){
    Shirt * temp = new Shirt[num_shirts + 1];
    if(num_shirts != 0){
        for(int x = 0; x < num_shirts; x++){
            temp[x] = packed[x];
        }
    }
    delete [] packed;
    packed = temp;
    packed[num_shirts] = s1;
    num_shirts++;
}

void Suitcase::print_suitcase(){
    cout << "Here's what's inside your suitcase: " <<endl;
    for(int x = 0; x < num_shirts; x++){
        cout << "(" << x << "): ";
        packed[x].print_shirt();
    }
}

//Destructor
Suitcase::~Suitcase(){
    delete [] packed;
}

//Copy constructor
Suitcase::Suitcase(const Suitcase & existing_suitcase){                 //Why const and by reference?
    this -> num_shirts = existing_suitcase.num_shirts;                  //We can directly access these member variables since they're the same type!
    this -> packed = new Shirt[num_shirts];
    for(int x = 0; x < num_shirts; x++){
        this -> packed[x] = existing_suitcase.packed[x];
    }
    cout << "Copy constructor called!" << endl;
}

Suitcase & Suitcase::operator=(const Suitcase & existing_suitcase){     //Notice the return type!
    if(this != & existing_suitcase){                                    //Let's make sure we're not a suitcase to itself/deleting it's array.
        this -> num_shirts = existing_suitcase.num_shirts;
        delete [] this -> packed;
        this -> packed = new Shirt[num_shirts];
        for(int x = 0; x < num_shirts; x++){
            this -> packed[x] = existing_suitcase.packed[x];
        }
    }
    cout << "Assignment operator overload called!"<<endl;
    return *this;
}