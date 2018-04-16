#include<iostream>
#include"practice.h"
using namespace std;

int main()
{
    practice<double>p;
    double arry1[]={1,3,5,7,9,11,55,62};
    cout<< p.binarySearch(arry1,8,11)<<endl;




    return 0;
}
