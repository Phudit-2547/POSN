#include <cstdio>

int A[405][405];
int main() 
{
  int n;
  scanf("%d",&n);
  int m=(n+2)/3;
  for(int i=1;i<=m;++i)
    {
    for(int row=i;row<=n-i+1;++row)
      {
        for(int col=row+i-1;col<=n-i+1;++col)
        A[row][col]=i;
      }
    }
  for(int row=1;row<=n;++row)
    {
      for(int col=1;col<=n;++col)
        {
          if(A[row][col]==0)
          {
            printf("  ");
          }
          else printf("%d ",A[row][col]%10);
        }
        
      printf("\n");
    }
}
