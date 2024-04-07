#include<iostream>
using namespace std;

int main(void){
    int T = 0;
    cin >> T;
    int tmep = 0;
    int firstN[T] = {0};
    for (int i = 0; i < T; i++)
    {
        cin >> firstN[i];
    }

    for (int i = 0 ; i < T ; ++i){
        for (int j = i; j < T-1; j++)
        {
            if (firstN[j] >= firstN[i])
            {
                tmep = firstN[j];
                firstN[j] = firstN[i];
                firstN[i] = tmep;
            }
            
        }
    }
    
    cout << firstN [T-1] << ' ' << firstN[0];
    return 0;
}