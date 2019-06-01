//
// Created by pavel on 01.06.19.
//
#include "Ocean.h"
#include <unistd.h>
int main()
{
    Ocean ocean;
    ocean.addObjects(ObjType::STONE, 50);
    ocean.addObjects(ObjType::PREY, 130);
    ocean.addObjects(ObjType::PREDATOR, 10);
    std::cout << "\n\n" << std::endl;
    for (int i(0); i < 800; i++)
    {
        ocean.run();
        //sleep(2);
        std::cout << "\n\n" << std::endl;
        ocean.print(std::cout);
    }

    return 0;
}
