#include <iostream>

using namespace std;

void Reverse(int n)
{
    int rev=0;
    int m=n;
    int r;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev*10+r;
    }
    if(rev==m)
        cout << "palindrome";
    else
        cout << "not a palindrome";
}

int main() {
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    Reverse(n);
    return 0;
}
