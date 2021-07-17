#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &v) {
    for (int i = 0; i < v.size(); ++i)
        for (int j = i + 1; j < v.size(); ++j)
            if (v[i] > v[j])
                swap(v[i], v[j]);
}

int main(){
    vector<int> v{1,-2,3,5,0,323,3,9,-99,0,5};
    bubble_sort(v);
    for(int i : v)
        cout<<i<<" ";
}
