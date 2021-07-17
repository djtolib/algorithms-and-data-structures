#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& v, int start, int end){
    int pivot = v[end];
    int i = start - 1;
    for (int j = start; j < end; ++j) {
        if(v[j]<= pivot){
            i++;
            swap(v[j],v[i]);
        }
    }
    swap(v[i + 1], v[end]);
    return i + 1;
}
void quick_sort_h(vector<int>& v, int start, int end){
    if(start >= end)
        return;
    int pi = partition(v, start, end);
    quick_sort_h(v, start, pi - 1);
    quick_sort_h(v, pi + 1, end);
}
void quick_sort(vector<int>& v){
    quick_sort_h(v,  0, v.size()-1);
}
int main(){
    vector<int> v{2,4,3,5,1};//{1,-2,3,5,0,323,3,9,-99,0,5};
    quick_sort(v);
    for(int i : v)
        cout<<i<<" ";
}
