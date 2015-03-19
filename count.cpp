//
//  File.c
//  
//
//  Created by Sarah Behrens on 8/29/14.
//
//

#include <fstream>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World" << endl;
    int n = atoi(argv[1]);
    for (int i=1; i<=n; i++) {
        cout << i << endl;
    }
    return 0;
    
}
