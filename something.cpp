#include <stdio.h>
#include <TXLib.h>


int main()
{

   /* // ���������
    int array[] = {1, 2, 3, 4};
    int *p[] = { &array[1], &array[2], &array[0] };

    for(int i = 0; i < 3; i++)
    {
        printf("%d", **(p+i));  // *p[i]
    }
    return 0;     */

    // ��������             0             1             2             3
 /*   int array[][3] = {{11, 12, 13}, {21, 22, 23}, {31, 32, 33}, {41, 42, 43}};

 //   printf("%p\n", &array[1]);
 //   printf("%p\n", array[1]);       same
 //   printf("%p\n", &array[1][0]);

    int *p[] = {array[0], array[1], array[2], array[3]};

    for(int i = 0; i < 4; i++)
    {
        printf("%d ", *p[i]);    // 11 21 31 41
    }

    return 0;  */

    // ������� ��������� ������� ?

    int array_count = 0, array_size = 0;
    int array[] = {};

    printf("������� ���������� ��������, ������� ������ �������: ");
    scanf("%d", &array_count);

    for(int i = 0; i < array_count; i++)
    {
        printf("������� ������ �������: ");
        scanf("%d", &array_size);
        for(int elem = 0; elem < array_size; elem++)
        {
            printf("������� �������� �������: ");
            scanf("%d", &array[elem]);     // ��������
        }

    }

    for(int elem = 0; elem < array_size; elem++)
        {
            printf("������: ");
            printf("array[%d] = %d ", elem, array[elem]);
        }

   // int first_array[] = {...};
   // int second_array[] = {...};
 //   ....

   // int *p[] = {&first_array[0], &second_array[0], ....};



}
