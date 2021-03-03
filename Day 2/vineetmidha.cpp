#include<iostream>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    if (n%5==0 && n%11==0)
        cout<<"Divisible";
    else
        cout<<"Not Divisible";

}