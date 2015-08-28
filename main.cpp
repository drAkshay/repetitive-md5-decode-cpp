//
//  main.cpp
//  md5decrypt
//
//  Created by Dr. Akshay P on 8/27/15.
//  Copyright (c) 2015 Dr. Akshay P. All rights reserved.
//  Uses MD5 open-source C++ implementation, with copyrights displayed

/* this is the entry-point, major code is in decodeMd5.cpp */

#include <string>

#include "md5.h"
#include "decodeMd5.h"


using namespace std;


int main(int argc, char *argv[])
{
    string secret = decodeMd5(); //fx to compute and decodeMD5 hash
    cout << "\nNot-so-secret email: " << secret << endl;
    return 0;
}

