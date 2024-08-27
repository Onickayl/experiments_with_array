#include <stdio.h>
#include <TXlib.h>
#include <assert.h>

void PrintData(int* data, size_t sizeRow, size_t sizeSeat);

int main()
{
    int data[][4] = {{11, 12, 13, 5412},       // можно ли избавиться от числа?
                    {21, 22, 23},
                    {31, 32, 33},
                    {41, 42, 43},
                    {2847, 48924, 8725}};

    size_t sizeRow = sizeof(data) / sizeof(*(data + 0));
    size_t sizeSeat = sizeof(*(data + 0)) / sizeof(*((int*)data + 0 + 0));
    printf("sizeSeat = %d\n", sizeSeat);

    PrintData(*data, sizeRow, sizeSeat);
    return 0;
}

void PrintData(int* data, size_t sizeRow, size_t sizeSeat)
{
    for (size_t row = 0; row < sizeRow; row++)
    {
        //assert (row     < sizeRow);
        //assert (row + 1 < sizeRow);
        for (size_t seat = 0; seat < sizeSeat; seat++)
        {
            //assert (seat     < sizeSeat);
            //assert (seat + 1 < sizeSeat);
            printf("data[%d][%d] = %d\n", row, seat, *((int*)data + row * sizeSeat + seat));
        }
        printf("\n");

    }
}
