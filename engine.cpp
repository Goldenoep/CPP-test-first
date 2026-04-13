#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <string>
#include <vector>
#include <conio.h>

std::string xspan = "";
int main()
{
int width = 256; //start map generation
int height = 256;
int index = 0;
int screenx = 50; //screen width in characters
int camx = 0;
int camy = 0;
int screeny = 25;

std::vector<int> map(width * height, 0);
for (size_t i = 0; i < map.size(); i++)
{
    map[i] = std::rand() % 2;
}

std::cout << "Entered Realm\n"; //start
    while (true) 
    {

    system("cls"); //clear render screen
    
    if (_kbhit())
    {
    char key = _getch();
        if (key == 'd')
        {
            camx += 1;
        }
        if (key == 'a')
        {
            camx -= 1;
        }
        if (key == 'w')
        {
            camy -= 1;
        }
        if (key == 's')
        {
            camy += 1;
        }
    }


            for (int y = camy; y < screeny + camy; y++) {
                std::string xspan = "";  // X SPAN

            for (int x = camx; x < screenx + camx; x++) 
        {

           int index = (y * width + x);

           int value = map[index];
                if (value == 0)
                    {
                    xspan += "\033[32m#\033[0m"; //grass
                    } 

               else {
                    xspan += "\033[34m~\033[0m"; //water
                    }  
            }
            //generate string end
        //xspan += '!';
        std::cout << xspan << "\n";
        
        } //end rendering
        
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    } //ends while true
return 0;
}