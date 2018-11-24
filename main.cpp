#include <iostream>
#include <memory>
#include <vector>

using namespace std;

//find number and return index of the number
int BSearchRecur(vector<int>& vec, int first, int last, int target)
{
    int mid;
    if(first > last)
        return -1;
    mid = ( first + last ) / 2;

    if(vec[mid] == target)
        return mid;
    else if(target < vec[mid])
        return BSearchRecur(vec, first, mid - 1, target);
    else
        return BSearchRecur(vec, mid + 1, last, target);
}


int main()
{
    vector<int> vec = {2,4,6,8,10};
    cout << BSearchRecur(vec, 0, vec.size(), 8) << endl;
    return 0;
}




