#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    vector <pair<int,int>> v;
    int n;
    cin  >> n;
    int x,y;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }

    sort (v.begin(),v.end());
    int size = v.size();
    int min_x = 0;
    int max_x = 0;
    int min_y = 0;
    int max_y = 0;
    min_x = v[0].first;
    max_x = v[n-1].first;
    sort (v.begin(),v.end(),sortbysec);


    min_y = v[0].second;
    max_y = v[n-1].second;

    set <pair<int,int>> s;
    for (int i = 0 ; i < size ; i++)
    {
        if (v[i].first == min_x || v[i].first == max_x || v[i].second == min_y || v[i].second == max_y)
        {
            s.insert(v[i]);
        }
    }


    for (auto &x : s)
    {
        cout << x.first << " " << x.second << "\n";
    }




}