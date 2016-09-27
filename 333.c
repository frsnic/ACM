// [ACM] #333 - Recognizing Good ISBNs
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU
// 333       Accepted   0.662   2007-07-25 14:25:39   5771480   0.140

#include<stdio.h>
#include<string.h>

int main(void)
{
    char arr[81];
    int i, j, n, f, sum;

    while(fgets(arr, 80, stdin) != NULL)
    {
        i = 0;
        j = strlen(arr) - 1;
        sum = 0;
        n = 10;
        while(arr[i ++] == ' ');
        if(arr[j] == '\n')
          j --;
        while(arr[j --] == ' ');
        for(f = i - 1; f <= j + 1; f ++)
          printf("%c" , arr[f]);
        if(j - i < 7)
          f = 0;
        else
        {
            f = 1;
            for(i = i - 1; i <= j + 1; i ++)
            {
                if('0' <= arr[i] && arr[i] <= '9')
                  sum += (arr[i] - '0') * n --;
                else if(arr[i] == 'X')
                {
                    if(n == 1)
                      sum += 10 * n --;
                    else if(n != 10)
                      f = 0;
                }
                else if(arr[i] != '-' && arr[i] != ' ')
                {
                    f = 0;
                    break;
                }
            }
        }
        if(n != 0 || sum % 11 != 0 || f == 0)
          printf(" is incorrect.\n");
        else
          printf(" is correct.\n");
    }

    return 0;
}
