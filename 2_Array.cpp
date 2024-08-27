#include <stdio.h>
#include <TXlib.h>
#include <assert.h>

void PrintData(int data[][3]);

int main()
{
    int data[4][3] = {{11, 12, 13}, {21, 22, 23},
                  {31, 32, 33}, {41, 42, 43}};

    //size_t size = sizeof(data) / sizeof(data[0]);
    PrintData(data);
    return 0;
}

void PrintData(int data[][3])
{
    for (int row = 0; row < 4; row++)
    {
        assert (row     < 5);
        assert (row + 1 < 5);
        for (int seat = 0; seat < 3; seat++)
        {
            assert (seat     < 4);
            assert (seat + 1 < 4);
            printf("data[%d][%d] = %d\n", row, seat, data[row][seat]);
        }
        printf("\n");

    }
}
