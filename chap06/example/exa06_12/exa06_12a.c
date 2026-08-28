/* for */
#include <stdio.h>

int main(void)
{
    /* for_down.c */
    // int secs;
    // for (secs = 5; secs > 0; secs--)
    // {
    //     printf("%d second!\n", secs);
    // }
    // printf("We have ignition!\n");
    // return 0;


    /* for_char.c */
    // char ch;
    // for(ch = 'a'; ch <= "z"; ch++)
    // {
    //     printf("The ASCII value for %c is %d.\n", ch ,ch);
    // }
    // return 0;


    /* for_gec.c*/
    // double debt;
    // for(debt = 100.0;debt < 150.0; debt * 1.1)
    // {
    //     printf("Your debt is now $%.2f.\n", debt);
    // }
    // return 0;


    /* for_wild.c */
    // int x;
    // int y = 55;
    // for(x = 1; y <= 75; y = (++x * 5) + 50)
    // {
    //     printf("%10d %10d\n", x, y);
    // }
    // return 0;


    /* for_none.c */
    // int ans, n;
    // ans =2;
    // for(n = 3; ans <= 25;)
    // {
    //     ans = ans * n;
    // }
    // printf("n = %d; ans = %d.\n", n, ans);
    // return 0;


    /* for_show.c */
    int num = 0;
    for(printf("Keep entering numberss!\n"); num != 6;)
    {
        scanf("%d", &num);
    }
    printf("That's the one I want!\n");
}


