//Sortowanie bąbelkowe

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int A[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    int sortowanie(int& A);
    {


        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (A[j] > A[j + 1])
                {
                    swap(A[j], A[j + 1]);
                }
            }
        }

        for (int i = 0; i < 10; i++)
        {
            cout << A[i] << " ";
        }

    }
}
