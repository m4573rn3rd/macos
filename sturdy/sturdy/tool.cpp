//
//  tool.cpp
//  Testing Tool
//
//  Created by Brandon McClain on 3/26/22.
//

#include "tool.hpp"
#include "menu.hpp"
#include <iostream>
#include<string>
#include <stdio.h>
#include <unistd.h>
#include <term.h>


void secondFunction(){
    {
      while(1)
    {
        int opt;

        std::cout << std::endl << "----------------------------" << std::endl;
        std::cout << std::endl << "      Main Menu   " << std::endl;
        std::cout << std::endl << "----------------------------" << std::endl;
        std::cout << "Welcome press zero to exit.\n";
        std::cout << "Press 1 to do nothing.\n";
        std::cout << "Press 2 to create interger.\n";
        std::cin >> opt;
        std::cout << "\n" << std::endl;

        switch (opt)
        {
            case 1:
                std::cout << "One pressed.\n";
                
                break;
            case 2:
                std::cout << "Two Pressed. \n";
                myFunction1();
                break;
            case 0:
                std::cout << "Goodbye.\n";
                exit(1);
            default:
                break;
        }
    }
    }
}
