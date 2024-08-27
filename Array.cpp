#include <stdio.h>
#include <TXlib.h>
#include <assert.h>

void MoveData(int data[], size_t size);

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(data) / sizeof(*(data + 0));
    MoveData(data, size);
    return 0;
}

void MoveData(int* data, size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        assert (i     < size);
        assert (i + 1 < size);
        *(data + i) = *(data + i + 1);
        printf("data[%d] = %d\n", i, *(data + i));
    }
}
