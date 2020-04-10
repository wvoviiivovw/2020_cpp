#include <iostream>
#include <cmath>

int* SimpleNumFunc(int& len, int& n)
{
    int* new_array = new int[n];
    int _len = 0;
    int iter = 0;

        for (int i = 1; i < n; ++i)
        {
            if (i == 1)
            {
                new_array[i] = 0;
            }
            else
            {
                new_array[i] = i;
            }
        }

    for (int i = 2; i < n; ++i)
    {
        if (new_array[i] != 0)
        {
            for (int j = 2 * i; j < n; j += i)
            {
                new_array[j] = 0;
            }
            _len++;
        }
    }
    //for (int c = 1; c < n;++c) std::cout << new_array[c] << " ";

    len = _len;
    int* delivarr = new int[_len];
    for (int p = 1; p < n; ++p)
    {
        if (new_array[p] != 0)
        {
            delivarr[iter] = new_array[p];
    //      std::cout << delivarr[iter] << " ";
            ++iter;
        }
    }
    return delivarr;
}

int main()
{
    int len, n = 0;  //N == size arr
    std::cout << "Enter N = ";
    std::cin >> n;
    n = abs(n);
    int* arr = SimpleNumFunc(len, n);
    std::cout << "len SimpleNum = " << len << std::endl;
    for (int i = 0; i < len; ++i) std::cout << arr[i] << " ";
    return 0;
}