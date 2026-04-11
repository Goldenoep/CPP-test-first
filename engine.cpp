#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <string>

std::string xspan = "";
int main()
{
std::cout << "Entered Realm\n"; //start
    while (true) 
    {
        system("cls");

        for (size_t i = 0; i < 25; i++) // for 20 times render terminal
        {  
            //generate string
            xspan = "";
                for (size_t i2 = 0; i2 < 50; i2++) 
                {
                
                    if (rand() % 2 == 0) 
                    {
                            xspan += '#';
                        } 
                        else {
                            xspan += '_';
                    }
                }
            //generate string end
        xspan += '!';
        std::cout << xspan << "\n";
        
        } //end rendering
        
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    } //ends while true
return 0;
}