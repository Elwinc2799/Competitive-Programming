#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int total = 0 ;
    vector <int > v ;
    vector <int> v1 ;
    int temp1 , temp2;
    bool success = true;
    for (int i = 0 ; i < n; i++)
    {
        cin >> temp1  >> temp2;
        if (temp1 % 10 == 0 && temp2 % 10 == 0)
        {
            success = false;
            break;
        }
        else if (temp1%10 == 0)
        {
            total += temp2;
        }
        else if (temp2%10 == 0)
        {
            total += temp1;
        }
        else if (temp1 > temp2)
        {
            total += temp1;
        }
        else if (temp1 < temp2)
        {
            total += temp2;
        }
        else
        {
            total += temp1;
        }
    }

    if (success)
    {
        cout << total;
    }
    else
    {
        cout << "-1";
    }


}