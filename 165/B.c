#include <stdio.h>
#include <stdlib.h>
//Normal Gcd
/*int gcd ( int a, int b )
{
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}*/

//Recursive Gcd
/*int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}*/

//int fx[]={0,0,1,-1};
//int fy[]={1,-1,0,0};
//int fx[]={0,0,1,1,1,-1,-1,-1};
//int fy[]={1,-1,0,1,-1,0,1,-1};
//int fx[]={1,1,-1,-1,2,-2,2,-2};
//int fy[]={2,-2,2,-2,1,1,-1,-1};

int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    int total=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(total+a<=500)
        {
            printf("A");
            total+=a;
        }
        else
        {
            printf("G");
            total-=b;
        }
    }
    printf("\n");
    return 0;
}



