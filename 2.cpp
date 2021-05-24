#include <iostream>
#include <cmath>

using namespace std;
bool charge(int n)
{
    if(n < 2) { return false; }
        if(n == 2) { return true; }
            if(n % 2 == 0) { return false; }
                for(int i = 3; i <= sqrt(n); i += 2)
{
                    if(n % i == 0) { return false; }
}
return true;
}
int main()
{
int a, b;
cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if(i % 2 == 0){
        int l = sqrt(i/2);
        if (l*l*2 == i and charge(l)){
        cout  << i << endl;
}
}
}
return 0;
}
