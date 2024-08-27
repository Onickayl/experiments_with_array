#include <stdio.h>
#include <TXlib.h>
#include <assert.h>

void MoveData(char data[], size_t size);

int main()
{
    char data[] = {'S', 'A', 'l', 'e', 'x', 'a', 'n', 'd', 'r', 'a'};
    size_t size = sizeof(data) / sizeof(*(data + 0));
    MoveData(data, size);
    return 0;
}

void MoveData(char data[], size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        assert (i     < size);
        assert (i + 1 < size);
        *(data + i) = *(data + i + 1);
        printf("%c", data[i]);
    }
}
