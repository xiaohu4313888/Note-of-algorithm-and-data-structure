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
    _CrtMemCheckpoint(&s1);//��⽫��������ص�_CrtMemState�ṹ��
    char* str = NULL;
    GetMemory(str, 100);//�ڴ�ռ����
    _CrtMemCheckpoint(&s2);
    if (_CrtMemDifference(&s3, &s1, &s2))//_CrtMemDifference �Ƚ������ڴ�״̬��s1 �� s2��������������״̬֮�����Ľ����s3��
        _CrtMemDumpStatistics(&s3);
    cout << "Memory leak test!" << endl;
    _CrtDumpMemoryLeaks();
    return 0;
}*/