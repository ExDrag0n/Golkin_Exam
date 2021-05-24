#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
ifstream f("input.txt");
string s,s1;
int d;
getline(f,s);
int max = 1;
int c = 1;
d = 0;
    for (int i = 1; i <= s.length(); i++) {
        if(s[i] == s[i-1])
{
c ++;
    if (c > max)
{
    max = c;
    s1 = s[i];
}
}
    else
{
    c = 1;
}
}
cout << s1 << " " << max;
}
