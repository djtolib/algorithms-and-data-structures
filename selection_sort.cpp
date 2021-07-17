#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> &v) {
    int min_index;
    for(int i = 0; i < v.size(); i++ ) {
        min_index = i;
        for (int j = i + 1; j < v.size(); j++)
            if(v[min_index] > v[j])
                min_index = j;
        swap(v[min_index], v[i]);
    }
}

int main(){
    vector<int> v{1,-2,3,5,0,323,3,9,-99,0,5};
    selection_sort(v);
    for(int i : v)
        cout<<i<<" ";
}
