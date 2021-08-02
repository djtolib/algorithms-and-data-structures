#include <iostream>
#include <vector>

using namespace std; 

int bin_search(vector<int> &v, int val, int start, int end){
    int mid = (start + end)/2;
    if(start == end && v[start] != val)
        return  -1;
    if(v[mid] == val)
        return mid;

    if(v[mid] < val)
        return bin_search(v, val, mid + 1, end);

    return bin_search(v, val, start, mid - 1);

}

// helper function
int recursive_binary_search(vector<int>& v, int val)
{
    return bin_search(v, val, 0, v.size() - 1);
}

int it_bin_search(vector<int>& v, int val){
    int mid, start = 0, end = v.size() -1;
    while (start <= end){
        mid = (start + end) / 2;
        if(v[mid] == val)
            return mid;
        if(v[mid] < val)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> v{1,2,3,4,5,6,7,8,9};
    cout<<it_bin_search(v, 5)<<endl;
    cout<<recursive_binary_search(v, 6);
}
