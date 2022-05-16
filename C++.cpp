#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100];
    cout << "Enter number please ";
    cin >> n;
    srand((int)time(0));
    for(int i=0;i<n;i++)
    {
        a[i]=(rand()%100)+1;

    }
    for(int i=0;i<n;i++)
    {
        cout << i+1 <<  ". Eded =" <<a[i] << endl;
    }

}
