
#include <fstream>
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

int main(int argc, char *argv[])
{
    //Print the sum from 10n+1 to 10n+10
    int n = atoi(argv[1]);
    int sum=0;
    int temp;
    
    for (int i=1; i<=10; i++) {
        temp=10*n+i;
        cout << temp << endl;
        sum=sum+temp;
    }
    cout << "The sum is " << sum << endl;
    return 0;
    
}
