#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;
int main()
{
    //Set String

    // declaring argument of time()
    time_t my_time = time(NULL);
    // Geting systme info.
    system("clear");
    // Append Log File Test.
    
    
    std::ofstream outfile;
    outfile.open("/tmp/rawlog/log.txt", std::ios_base::app);
    outfile << ctime(&my_time);
    // Print The Host Name.
    system("hostname");
    // Print the system ip address.
    system("hostname -I | cut -f1 -d' '");
    // ctime() used to give the present time
    printf("%s", ctime(&my_time));
    // Create Log dir.
    printf ("%s \n", "Creating Log Dir");
    system("mkdir /tmp/rawlog");
    //Create log file.
    system("touch /tmp/rawlog/log.txt");
    system("echo start >>/tmp/rawlog/log.txt");
    system("cat /tmp/rawlog/log.txt");
    return 0;
}


