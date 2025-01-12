
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(33);
    v.push_back(8);
    v.push_back(23);
    v.push_back(454);

    int siz = v.size();
    cout << siz << endl;
    sort (v.begin(), v.end());
    for (int i = 0; i < siz; i++)
    {
        cout << v[i] << " ";
    }
    


    return 0;
}



