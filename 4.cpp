#include <iostream>
using namespace std;
int k, n, a[1000];
void rev(int* arr, int len) {
int* _arr = new int[len];
    for (int i = 0; i < len; i++) _arr[i] = arr[i];
        for (int i = 0; i < len; i++) {
            arr[i] = _arr[(len - 1) - i];
        }
    }

    void math(int x, int y, int z) {
        if (y == 0) {
            if (x == k){
            int* temp = new int[x];
                for (int i = 0; i < x; i++) {
                temp[i] = a[i];}
                rev(temp, x);
                    for (int i = 0; i < x; i++){
                        cout << temp[i] << " ";}
                    cout << endl;
}
return;
}
    for (int i = y; i >= z; i--) {
        if (i >= z) {
        a[x] = i;
        math(x + 1, y - i, i);}
}
return;
}

int main()
{
cin >> n;
for (k = n; k != 0; k--)
math(0, n, 1);
}
