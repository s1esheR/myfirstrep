#include <iostream>
#include <cmath>
using namespace std;
using UnaryPredicate=bool(*)(int);
 bool sum1(int a)
 {
     return a>0;
 }
 int sum(int* arr, int size, UnaryPredicate sum1)
    {
        int t=0;
        for(int i=0; i<size; ++i)
        if(sum1(arr[i]))
        {
            t=t+arr[i];
        }
        return t;
    }
int main()
{
    int arr[10];
    sum(arr, 10,sum1);

    cout <<sum<< endl;
    return 0;
}
