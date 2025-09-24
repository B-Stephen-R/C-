#include <iostream>
        //Math functions: max, min, pow, sqrt, abs, round, ceil, floor
#include <cmath>

        //Typedef/Using (Can just replace typedef with using, but format is using [new name] = [data type])
typedef std::string text_t;

        //Namespaces Examples
namespace first{
    int x = 0;
}
namespace second{
    int x = 1; 
}

        //Structs essentially a grouping of multiple public variables of different datatypes under one name
struct Student{
        std::string name;
        double gpa;
        bool enrolled;
};

        //Enumerations (essentially a way to create a list of non-numbers as one datatype with name-integer pairs) (allows function of non-numbers with switches)
enum Day {Monday=0, Tuesday=1, Wednesday=2, Thursday = 3, Friday = 4, Saturday = 5, Sunday = 6};



                //Object Oriented Programming Information:
        //Class Creation
class Car{

        //Access Modifier placed here:
        public:

                //ClassVariables
                std :: string make;
                std :: string model;
                int year;
                bool functional;

                //Class Methods
                void shouldBuy(){
                        if(functional){
                                std::cout << "You should buy this car\n";
                        }else{
                                std::cout << "You should not buy this car\n";
                        }
                }
                
                //Default Constructor
        Car(){
                make = "Nissan";
                model = "Altima";
                year = 2015;
                functional = false;        
        }

        Car(std::string Make, std::string Model, int Year, bool functional){
               this-> make = Make;
                this->model = Model;
                this->year = Year;
                this->functional = functional;        
        }
};
        //Subclassing (Inheritance)
class ElectricCar : public Car{
        public:
                double batteryLife;

                void displayRange(){
                        if(batteryLife > 200){
                                std::cout << "Long Range\n";
                        }else{
                                std::cout << "Short Range\n";
                        }
                }
        ElectricCar(std::string Make, std::string Model, int Year, bool functional, double BatteryLife) : Car(Make, Model, Year, functional){
                
                this->batteryLife = BatteryLife;
        }
};

        /* Functions Like Java:
    - if else statements    
    - logical operators (&&, ||, !)
    - String class methods: .length, .empty(checks for null or 0 length), .clear(empties string), .append(.add), .at(char at index), .insert(adds at index), .find(at index of occurence), .erase(removes at index)
    - while loops
    - for loops
    - break statements (also function in switch statements) (Continue is like break but just breaks current iteration, for loop continues afterwards)
    - nested loops
    - random numbers (requires inclusion of time) (Moduleus for range)
    - function creation (does not require access modifier in header, just return type) (can be made in same class as main, does not require object or class to call method) 
    - return keyword
    - overloading functions (same name, different parameters)
    - variable scope (local and global)
    - arrays 
    - array traversing
    - enhanced for loop (syntax is for([datatype] [new var name] : [array name]))
    - multidimensional arrays
    - almost everything about classes, including constructors, access modifiers, this keyword, .get and .set methods, 
        */

        //Method Headers (before main)
void copySwap (int a, int b);
void realSwap (int &a, int &b);

        //Function Template (essentially a way to create method which can take multiple datatypes without overloading)
template <typename T>
T max(T a, T b){
        return (a > b) ? a : b;
}


int main(){

                //Default Object Creation
        Car car1;

                //Custom Object Creation
        Car car2 ("Ford", "EcoSport", 2018, true);

        car1.shouldBuy();
        car2.shouldBuy();

                //Struct Usage
        Student student1;
        student1.name = "Jim";
        student1.gpa = 3.5;
        student1.enrolled = true;

                //Function Templates Usage

        std:: cout << max(3,7) << "\n"; //int
        std:: cout << max(3.5,2.5) << "\n"; //double
        std:: cout << max('g','e') << "\n"; //char


        /*
                Pointers Information:
        - variables are containers storing data
        - said data is stored in computers memory and has an address in that memory
        - addresses are hexidecimal and are not understandable
        - different data types take different amounts of memory (sizeof) and difference from one address to the next is based on data type size (converted to decimal)
        - ampersand (&) before a variable will return the address of that variable (address of operator)
        - address of a variable will change each time program is run
        - pointer is another variable which stores only the address for another variable        
        - plugging values into a method (pass by value) creates a copy of the value and cannot modify the plugged in variable
        - to modify a value plugged into a method, must plug in the address not just the value (pass by reference)
        - adding "const" before a parameter in a method prevents that parameter from being modified in the method (essentially makes it pass by value even if it is pass by reference)
        - pointer is just a variable which stores an address instead of actual data
        - pointers are stored as the type of data they point to with * (dereference operator) in front of variable name 
        - calling a pointer without * returns address, with * returns value at that address
        - null pointer simply points to nothing
        - pointer with nothing can be assigned nullptr, so that until it is assigned an address, when dereferenced, it will return nullptr which can be checkded for to see if address was assigned
        - trying to output a null pointer can cause problems, so checking for null before dereferencing is good practice
        - passing an array to a function automatically passes the address of the array (first element), so no need for &, but * is needed to get the array
        - dynamic memory allocation allows variables to be created while the program is running instead of while its compiling 
        - dynamic memory is good for user input or anything else where the memory size of data is not known until its running
        - dynamic memory can be used with the new keyword before the datatype of a new variable
        - "new" keyword variables should always be deleted with "delete" somewhere later in the code to prevent memory leaks
        */

        
                //Pointer 
        double place = 23.09;
        std::string points = "points";

        std:: string *pPoints = &points;
        double *pPlace = &place;

        std::cout <<pPoints << "\n"; //prints address of points variable
        std::cout <<*pPoints << "\n"; //prints value of points variable

                //Pass by Reference v. by Value
        int m = 5;
        int n = 6;
        copySwap (m,n);
        std::cout << m << " " << n << "\n"; 

        
        realSwap (m,n); //still plug in values, but method plugs in addresses
        std::cout << m << " " << n << "\n"; 

                //Fill Function
        std::string strings[] = {"wings", "tots", "brussel sprouts", "mini burgers"};
        std::cout << strings << "\n"; //Address of array is just a number which needs used for fill function
        std::fill (strings, strings + 4, "fried pickles");
        std::cout << strings[2] << "\n";

                //sizeof function (returns size of variable or class or whatever in bytes) 
                        //the "sizeof" of an array divided by the "sizeof" of one element in the array returns the length of the array (there is no .length function for arrays)
        std::cout << sizeof(first::x) << "\n";

                //Do While Loops (guarantees at least one run through)
        int does = 0;
        do{
                does++;
        }while(does <1);

                //Ternary Operator
        int ter = 6;
        ter <= 5 ? std::cout << "less than 5\n" : std::cout << "greater than or equal to 5\n";

                //Switch Statements
        int swi = 5;
        switch(swi){
                case 1:
                        std::cout << "one\n";
                        break;
                case 2:
                        std::cout << "two\n";
                        break;
                case 3:
                        std::cout << "three\n";
                        break;
                case 4:
                        std::cout << "four\n";
                        break;
                case 5:
                        std::cout << "five\n";
                        break;
                default:
                        std::cout << "not one through five\n";
        }

                //Input acception
        std :: string name;
        std :: cin >> name;
        std :: cout << "What up " + name + "\n";

                //getLine function allows spaces in terminal
        
        std :: string name2;
        std :: getline(std::cin >> std::ws, name2);
        std :: cout << "What up " + name2 + "\n";

                //Character Conversion (Can cast numbers as characters and vice versa through the numbering of all characters on keyboard)
        char z = 122;
        std::cout << z << "\n";

                //Typedef Usage
        text_t text = "word";
        std::cout << text << "\n";
        
                //Namespace Prints
        std :: cout << first::x << second::x;

                //Preset Namespace Option
        using namespace second;
        std :: cout << x; 

                //Constants
        const double PI = 3.14;
        double radius = 10.0;
                //cannot change PI, will cause error


                //numerical variables
        int num = 2;
        double y = 0.5;


                //print
        std::cout << num;

        return 0;
}


        //Method Defining
void copySwap (int a, int b){
        int temp = a;
        a = b;
        b = temp;
}

void realSwap (int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
}
