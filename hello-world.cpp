#include <iostream>

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void QuickSort(int start, int end, int *Array)
{
    if (start >= end)
        return;

    int idxOfPivot = start;

    int head = start + 1;
    int tail = end;

    while (head <= tail)
    {
        while (head <= end && Array[head] <= Array[idxOfPivot])
            head++;

        while (tail > start && Array[tail] >= Array[idxOfPivot])
            tail--;

        if (head < tail)
            Swap(Array[head], Array[tail]);
    }
    Swap(Array[tail], Array[idxOfPivot]);

    QuickSort(start, tail - 1, Array);
    QuickSort(tail + 1, end, Array);
}

int main()
{
    int aList[5] = {50, 10, 10, 20, 40};

    QuickSort(0, 4, aList);

    for (auto n : aList)
        std::cout << n << " ";

    return 0;
}
// int a(10);
// int b(a);  // b는 a의 copy
// auto c(a); // c는 a의 형식을 따라감

// int *pnData = (int *)malloc(sizeof(int));
// free(pnData);

// int *pnNewData = new int;
// delete pnNewData;

// int *pnNewArr = new int[5];
// delete[] pnNewArr;

// 참조자는 '별명'
// int &rData(nData);

// 참조자는 왜써? 겉으로는 참조자 작동은 포인터 즉 const 포인터(int * const pnData = &a)
// 변하지 않는 포인터
// 포인터의 문제점 변절
// ex
// int nData = 10;
// int nNewData = 20;
// int *pnData = &nData;
// *pnData = 5; // nData = 5;
// pnData = &nNewData;
// *pnData = 5 // nNewData = 5;

// rData = 5;

// int aList[5] = {1, 2, 3, 4, 5};

// for (auto n : aList) // read only
//         std::cout << n << std::endl;

// for (auto &n : aList) // read and write
// {
//     n = 0;
//     std::cout << n << std::endl;
// }

// return 0;

// 참조형 예제
// void Swap(int &a, int &b);

// int main()
// {
//     int a = 1;
//     int b = 2;

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;

//     Swap(a, b);

//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;

//     return 0;
// }

// void Swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }