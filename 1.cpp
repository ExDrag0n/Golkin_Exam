#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b, c = 1, k, p;
cin >> a >> b;
    for (int i = a; i <= b; i++){
        if(i % 2 != 0) continue;
            c = 1;
            p = round(sqrt(i));
                for (int j = 2; j <= p; j++){
                    if (i % j == 0 ){
                        if (j % 2 == 0)
                        c++;    
                        k = i / j;
                        if (k % 2 == 0)
                        {
                        c++;
                        if (j == k)
                    c--;
                    }
            if (c > 3) break;
            }
        }
        if (c == 3)
        cout << i << ' ';
    }
}
