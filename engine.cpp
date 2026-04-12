#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <string>
#include <vector>

std::string xspan = "";
int main()
{
int width = 256; //start map generation
int height = 256;
int index = 0;

std::vector<int> map(width * height, 0);
for (size_t i = 0; i < map.size(); i++)
{
    map[i] = std::rand() % 2;
}

std::cout << "Entered Realm\n"; //start
    while (true) 
    {
        system("cls");
        // for (size_t i = 0; i < 25; i++) // for 20 times render terminal
        // {  
        //     //generate string
        //     xspan = "";
        //         for (size_t i2 = 0; i2 < 50; i2++) 
        //         {
        //             index++;
        //             int value = map[index];

        //             if (value == 0) //you can also use █ instead of #, but most terminals dont support it
        //             {
        //                     xspan += "\033[32m#\033[0m"; //green
        //                 } 
        //                 else {
        //                     xspan += "\033[34m~\033[0m"; //blue
        //             }
        //         }
                for (int y = 0; y < 25; y++) {
                std::string xspan = "";  // X SPAN
            for (int x = 0; x < 50; x++) {

                int index = (y * width + x);

                int value = map[index];
                    if (value == 0) //you can also use █ instead of #, but most terminals dont support it
                        {
                                xspan += "\033[32m#\033[0m"; //green
                            } 
                            else {
                                xspan += "\033[34m~\033[0m"; //blue
                        }  
            }
            //generate string end
        xspan += '!';
        std::cout << xspan << "\n";
        
        } //end rendering
        
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    } //ends while true
return 0;
}