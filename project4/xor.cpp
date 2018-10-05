#include <iostream>

using namespace std;
int f(int v, int key)
{
    return v^key;
}
//void print_array(int* arr)
void copy (int* dest, int* src, int size, int key)
{
    for(int i=0; i<size; ++i)
    {
        dest[i]=f(src[i], key);
    }
}
int main()
{
    int arr[5]{1,2,3,4,5};
    int arr1[5]{0};
    //int arr2[5]{0};
    copy(arr1, arr, 5, 2);
    for(auto i:arr1)
    {
      cout << i << endl;
    }
    return 0;
}
