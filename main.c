#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <dirent.h>

using namespace std;

int main(void){
    const char* path = "./ps";
    DIR *dp;
    dirent* entry;
    dp = opendir(path);

    string findfile;

    string cmdMsg;
    string cmd = "ps2epsi ";
    string slash = "/";
    string sps = " ";
    string output = "eps/";
    string outfile;
    string streps = ".eps"; 

    if (dp==NULL) exit(1);
    do {
        entry = readdir(dp);
        if (entry != NULL)
        {
            if (entry->d_name[0] != '.')
            {
                findfile = entry->d_name;
                // cout << entry->d_name << endl;

                int ext_i = findfile.find_last_of(".");
                outfile = findfile.substr(0,ext_i);

                cmdMsg = cmd + path + slash + entry->d_name + sps + output + outfile + streps;
                cout << cmdMsg << endl;
                
                system(cmdMsg.c_str());
            }
        }
    } while (entry != NULL);

    return 0;
}
