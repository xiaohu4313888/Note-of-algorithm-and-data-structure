/*
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <iostream>
using namespace std;

_CrtMemState s1, s2, s3;

void GetMemory(char* p, int num)
{
    p = (char*)malloc(sizeof(char) * num);
}

int main(int argc, char** argv)
{
    _CrtMemCheckpoint(&s1);//检测将检测结果返回到_CrtMemState结构中
    char* str = NULL;
    GetMemory(str, 100);//内存空间分配
    _CrtMemCheckpoint(&s2);
    if (_CrtMemDifference(&s3, &s1, &s2))//_CrtMemDifference 比较两个内存状态（s1 和 s2），生成这两个状态之间差异的结果（s3）
        _CrtMemDumpStatistics(&s3);
    cout << "Memory leak test!" << endl;
    _CrtDumpMemoryLeaks();
    return 0;
}*/