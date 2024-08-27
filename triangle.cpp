#include <stdio.h>
#include <TXlib.h>
#include <assert.h>

void TriangleData(int* data, size_t sizeRow, size_t sizeSeat);

int main()
{
    int data[][4] = {1, 0, 0, 0,
                     2, 3, 0, 0,
                     4, 5, 6, 0,
                     7, 8, 9, 10};

    size_t sizeRow = sizeof(data) / sizeof(data[0]);
    size_t sizeSeat = sizeof(data[0]) / sizeof(data[0][0]);
    printf("sizeRow = %d\n", sizeRow);
    printf("sizeSeat = %d\n", sizeSeat);

    TriangleData(*data, sizeRow, sizeSeat);
    return 0;
}

void TriangleData(int* data, size_t sizeRow, size_t sizeSeat)
{
    for (size_t row = 0; row < sizeRow; row++)
    {
        for (size_t seat = 0; seat <= row; seat++)
        {
            printf("data[%d][%d] = %d ", row, seat, *((int*)data + row * sizeSeat + seat));
        }
        printf("\n");

    }
}

