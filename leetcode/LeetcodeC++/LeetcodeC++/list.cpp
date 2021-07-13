#include <iostream>
#include <string>
#include <vector>
#include <deque> 
#include <list>
#define MAXSIZE 20 //顺序表的最大长度
using namespace std;

int main()
{
    //00001001000001110000000000100001
    //00101000000101110000010000100001 
    int a = 2;

    list<int>::iterator itor;
    list<int> ilist;
    vector<int>::difference_type cnt;

    for (size_t ix = 0; ix != 4; ++ix)
    {
        ilist.push_back(ix);
    }

    itor = ilist.begin();
    while (itor != ilist.end())
    {
        cout << *itor++ << endl;
    }
    list<int>::iterator int_itor = find(ilist.begin(), ilist.end(), 2);
    ilist.erase(int_itor);
    while (!ilist.empty())
    {
        cout << "remove : " << ilist.front() << endl;
        ilist.pop_front();
    }
    return 0;
}