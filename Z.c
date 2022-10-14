#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int val=0;
  for(int i=0;i<n;i++)
    {
      printf("%d ",val);
      val = (val+1) %10;
    }
  printf("\n");
  for(int row=1;row<n-1;++row)
    {
      int targetcol = n-1-row;
      for(int col=0;col<n;++col)
        {
          if(col==targetcol)
          {
            printf("%d\n",val);
            val = (val+1) %10;
            break;
          }
          else
            printf("  ");
        }
    }
  for(int i=0;i<n;i++)
    {
      printf("%d ",val);
      val = (val+1) %10;
    }
  return 0;
}
