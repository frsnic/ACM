// [ACM] #10222 - Decode the Mad man
// Problem   Status        CPU     Date&Time(UTC)        ID        Best CPU
// 10222     Accepted      0.000   2006-10-30 15:14:39   5089507   0.000

#include<stdio.h>

int main(void)
{
    char c;

    while(1)
    {
        c = getchar();
        if(c == EOF)
          break;
        if('0' <= c && c <= '9')
        {
            if(c == '0')
              printf("8");
            else
              printf("%c" , c - 2);
        }
        else if('a' <= c && c <= 'z')
        {
            switch(c)
            {
                case 'c' :
                  printf("z");
                  break;
                case 'v' :
                  printf("x");
                  break;
                case 'b' :
                  printf("c");
                  break;
                case 'n' :
                  printf("v");
                  break;
                case 'm' :
                  printf("b");
                  break;
                case 'd' :
                  printf("a");
                  break;
                case 'f' :
                  printf("s");
                  break;
                case 'g' :
                  printf("d");
                  break;
                case 'h' :
                  printf("f");
                  break;
                case 'j' :
                  printf("g");
                  break;
                case 'k' :
                  printf("h");
                  break;
                case 'l' :
                  printf("j");
                  break;
                case 'e' :
                  printf("q");
                  break;
                case 'r' :
                  printf("w");
                  break;
                case 't' :
                  printf("e");
                  break;
                case 'y' :
                  printf("r");
                  break;
                case 'u' :
                  printf("t");
                  break;
                case 'i' :
                  printf("y");
                  break;
                case 'o' :
                  printf("u");
                  break;
                case 'p' :
                  printf("i");
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
                  printf("9");
                  break;
                case '=' :
                  printf("0");
                  break;
                case '\\' :
                  printf("-");
                  break;
                case '[' :
                  printf("o");
                  break;
                case ']' :
                  printf("p");
                  break;
                case ';' :
                  printf("k");
                  break;
                case '\'' :
                  printf("l");
                  break;
                case ',' :
                  printf("n");
                  break;
                case '.' :
                  printf("m");
                  break;
                case '/' :
                  printf(",");
                  break;
            }
        }
    }
    return 0;
}
