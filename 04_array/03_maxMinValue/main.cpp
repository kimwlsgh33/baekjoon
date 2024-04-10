#include<iostream>
using namespace std;

int main(void){
    int count = 0;
    int i = 0;
    int num;
    int a = 1000000;  //max
    int b = -1000000;  //min
    cin >> count;
    while (1)
    {
        cin >> num;
        if(num < a) a = num;
        if(num > b) b = num;
        ++i;
        if(count == i)break;
    }
    
    cout << a << ' ' << b;
    return 0;
}