#include <stdio.h>
#include <TXlib.h>

void MoveData(int data[], size_t size);

int main()
{
    int data[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(data) / sizeof(data[0]);

    MoveData(data, size);
}

void MoveData(int data[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        assert ( 0 <= i     && i     < size);
        assert ( 0 <= i + 1 && i + 1 < size);
        data[i] = data[i + 1];
    }
}
