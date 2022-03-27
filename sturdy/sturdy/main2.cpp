//
//  main.cpp
//  macctest
//
//  Created by Brandon McClain on 3/11/22.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bot1.hpp"

int main3(int argc, const char * argv[]) {
    time_t givemetime = time(NULL);
    std::cout << "<-------------------------------->\n";
    printf("%s", ctime(&givemetime));
    std::cout << "<-------------------------------->\n";
    std::cout << "System Booting\n";
    std::cout << "System Online\n";
    system("Say system online");
    
    system("echo -n '1. Current Directory is '; pwd");
    system("ls -l /Users");
    myFunction1();
    return 0;
}

