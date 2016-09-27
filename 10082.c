// [ACM] #10082 - WERTYU
// Problem   Status     CPU     Date&Time(UTC)        ID        Best CPU�G
// 10082     Accepted   0.000   2006-10-22 01:13:15   5064868   0.000

#include<stdio.h>

int main(void)
{
    char c;

    while(1)
    {
        c = getchar();
        if(c == EOF)
          break;
        if(48 <= c && c <= 57)
        {
            if(c == '0')
              printf("9");
            else if(c == '1')
              printf("`");
            else
              printf("%c" ,c-1);
        }
        else if('A' <= c && c <= 'Z')
        {
            switch(c)
            {
                case 'X' :
                  printf("Z");
                  break;
                case 'C' :
                  printf("X");
                  break;
                case 'V' :
                  printf("C");
                  break;
                case 'B' :
                  printf("V");
                  break;
                case 'N' :
                  printf("B");
                  break;
                case 'M' :
                  printf("N");
                  break;
                case 'S' :
                  printf("A");
                  break;
                case 'D' :
                  printf("S");
                  break;
                case 'F' :
                  printf("D");
                  break;
                case 'G' :
                  printf("F");
                  break;
                case 'H' :
                  printf("G");
                  break;
                case 'J' :
                  printf("H");
                  break;
                case 'K' :
                  printf("J");
                  break;
                case 'L' :
                  printf("K");
                  break;
                case 'W' :
                  printf("Q");
                  break;
                case 'E' :
                  printf("W");
                  break;
                case 'R' :
                  printf("E");
                  break;
                case 'T' :
                  printf("R");
                  break;
                case 'Y' :
                  printf("T");
                  break;
                case 'U' :
                  printf("Y");
                  break;
                case 'I' :
                  printf("U");
                  break;
                case 'O' :
                  printf("I");
                  break;
                case 'P' :
                  printf("O");
                  break;
              }
        }
        else
        {
            switch(c)
            {
                case '\n' :
                  printf("\n");
                  break;
                case ' ' :
                  printf(" ");
                  break;
                case '-' :
                  printf("0");
                  break;
                case '=' :
                  printf("-");
                  break;
                case '\\' :
                  printf("]");
                  break;
                case '[' :
                  printf("P");
                  break;
                case ']' :
                  printf("[");
                  break;
                case ';' :
                  printf("L");
                  break;
                case '\'' :
                  printf(";");
                  break;
                case ',' :
                  printf("M");
                  break;
                case '.' :
                  printf(",");
                  break;
                case '/' :
                  printf(".");
                  break;
            }
        }
    }
    return 0;
}
