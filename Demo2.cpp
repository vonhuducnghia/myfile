#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char c = 'n';
    int i = 0, num = 2006;
    float flo = 21.12;
    char arr1[] = "World";

    cout << "Location of c: " << (void*)&c << "\n";
    //cout << "Location of num: " << &num << "\n";
    //cout << "Location of flo: " << &flo << "\n";
    //printf("Location of c: %p\n", &c);
    //printf("Location of num: %p\n", &num);
    //printf("Location of flo: %p\n", &flo);
    while (arr1[i])
    {
        cout << arr1[i] << " at " << (void*)&arr1[i] << endl;
        i++;
    }
    /*char hello[] = "Hello!";
    while(hello[i])
    {
        printf("%c at %p\n",hello[i],&hello[i]);
        i++;
    }*/
}