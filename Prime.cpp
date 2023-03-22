#include <bits/stdc++.h>
using namespace std;
vector <bool> prime(100000, true);
void sive()
{
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= 317; i++)
        if (prime[i] == true)
        for (int j = i*i; j <= 100000; j+=i) prime[j] = false;
}
int main()
{
    sive();
    int k ;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int x;
        cin >> x;
        if (prime[x] == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
