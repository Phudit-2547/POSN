#include <stdio.h>
int main()
{
    int start = 1;
    int stop;
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &stop);
        if(start < stop && stop-start < 11) 
        {
            for (int i = start; i <= stop; ++i) 
            {
                printf("%d ", i);
            }
            printf("\n");
        } 
        else if(start > stop && start-stop < 11)
        { 
            for (int i = start; i >= stop; --i) 
            {
                printf("%d ", i);
            }
            printf("\n");
         } 
        else if(start-stop>=11 && start>stop)
          {
            printf("%d %d %d . . . %d %d %d\n", start,start-1,start-2, stop+2,stop+1,stop);
          }
        else if(stop-start>=11 && start<stop)
          {
            printf("%d %d %d . . . %d %d %d\n", start,start+1,start+2, stop-2,stop-1,stop);
          }
        start=stop;
    }
}
