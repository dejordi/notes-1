#include <iostream>

using namespace std;

int T[100000];

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> T[i];

    cout << n - T[i];
}
