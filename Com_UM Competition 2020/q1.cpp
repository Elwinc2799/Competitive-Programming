#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string a,b,c;
    cin >> a >> b >> c;
    vector <int> v1 ;
    vector <int> v2 ;
    vector <int> v3 ;

    int temp1 , temp2, temp3;

    while (cin >> temp1 >> temp2 >> temp3)
    {
        v1.push_back(temp1);
        v2.push_back(temp2);
        v3.push_back(temp3);
    }

    int len = v1.size();
    bool swapped = true;
    while (swapped)
    {
        swapped = false;

        for (int i = 0 ; i < len-1 ; i++)
        {
            if (v2[i] < v2[i+1])
            {
                continue;
            }
            else if (v2[i] == v2[i+1])
            {
                if (v3[i] < v3[i+1])
                {
                    swap(v2[i],v2[i+1]);
                    swap(v1[i],v1[i+1]);
                    swap(v3[i],v3[i+1]);
                    swapped = true;
                }
            }
            else if (v2[i] > v2[i+1])
            {
                swap(v2[i],v2[i+1]);
                swap(v1[i],v1[i+1]);
                swap(v3[i],v3[i+1]);
                swapped = true;
            }

            if (swapped == true)
            {
                break;
            }
        }

        if (!swapped)
        {
            break;
        }
    }

    cout << "pid ppid rss" << endl;
    cout << a << " " << b << " " << c << "\n";


    for (int i = 0 ; i < len ; i ++) {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << "\n";
    }

}
