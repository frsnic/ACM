// [ACM] #102 - Ecological Bin Packing
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 102       Accepted   0.156   2006-10-22 10:38:06   5065750   0.000

#include<stdio.h>

int main(void)
{
    long int n[9], i, a[6], min;
    char str[3] = {'B', 'C', 'G'};

    while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld" \
    , &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7], &n[8]) == 9)
    {
        min = 999999999;

        a[0] = n[3] + n[6] + n[2] + n[8] + n[1] + n[4];
        if(a[0] < min)
        {
            min = a[0];
            str[0] = 'B';
            str[1] = 'C';
            str[2] = 'G';
        }
        a[1] = n[3] + n[6] + n[1] + n[7] + n[2] + n[5];
        if(a[1] < min)
        {
            min = a[1];
            str[0] = 'B';
            str[1] = 'G';
            str[2] = 'C';
        }
        a[2] = n[5] + n[8] + n[0] + n[6] + n[1] + n[4];
        if(a[2] < min)
        {
            min = a[2];
            str[0] = 'C';
            str[1] = 'B';
            str[2] = 'G';
        }
        a[3] = n[5] + n[8] + n[1] + n[7] + n[0] + n[3];
        if(a[3] < min)
        {
            min = a[3];
            str[0] = 'C';
            str[1] = 'G';
            str[2] = 'B';
        }
        a[4] = n[4] + n[7] + n[0] + n[6] + n[2] + n[5];
        if(a[4] < min)
        {
            min = a[4];
            str[0] = 'G';
            str[1] = 'B';
            str[2] = 'C';
        }
        a[5] = n[4] + n[7] + n[2] + n[8] + n[0] + n[3];
        if(a[5] < min)
        {
            min = a[5];
            str[0] = 'G';
            str[1] = 'C';
            str[2] = 'B';
        }
        printf("%c%c%c %ld\n" , str[0], str[1], str[2], min);
    }
    return 0;
}
