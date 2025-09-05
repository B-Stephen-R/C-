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

        /* Functions Like Java:
    - if else statements    
       
        

        */

int main(){

                //ternary operator
        int ter = 6;
        ter <= 5 ? std::cout << "less than 5\n" : std::cout << "greater than or equal to 5\n";

                //switch statements
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