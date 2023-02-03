#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;


    temp = 16;
    a = 15;


    b = temp;
    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout<<"Have a nice day!"<<endl;
    vector<int> v;
    for(int i=0;i<5;i++){
        v.push_back(i);
    }

    return 0;
}
