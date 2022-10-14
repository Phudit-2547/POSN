#include<stdio.h>
int main()
{
  int x,cnt1=0,y1,y2,cnt2=0,sumy1=0,sumy2=0;
  do
  {
    scanf("%d",&x);
    if(x==1)
    {
      scanf("%d",&y1);
      cnt1++;
      y1*=1;
      sumy1+=y1;
    }
    else if(x==2)
    {
      scanf("%d",&y2);
      cnt2++;
      y2*=-1;
      sumy2+=y2;
    }
  }
  while(x!=0);
  printf("%d %d\n",cnt1,cnt2);
  printf("%d %d %d",sumy1,-sumy2,sumy1+sumy2);
  return 0;
}
