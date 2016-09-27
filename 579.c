// [ACM] #579 - ClockHands
// Problem   Status     CPU     Date&Time(UTC)        ID Best   CPU
// 579       Accepted   0.176   2006-10-16 10:09:46   5047504   0.000

#include<stdio.h>

int main(void)
{
    int t[2], i;
    float h, m, ans;

    while(1)
    {
        scanf("%d:%d" , &t[0] ,&t[1]);
        if(t[0] == 0 && t[1] == 0)
          break;
        h = t[0] * 30 + t[1] * 0.5;
        m = t[1] * 6 ;
        ans = h - m > 0 ? h - m : m - h;
        ans = ans > 180 ? 360 - ans : ans;
        printf("%.3f\n" , ans);
    }
    return 0;
}
