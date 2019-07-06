/*練習テスト1 ニュートン法*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
  double x0=1,x1,eps=1.e-6;

  for(;;){
    x1=x0-((exp(x0)-3)/exp(x0));

    if(fabs(x0-x1)<=eps) break;

    x0=x1;
  }

  printf("x=%lf\n",x1);

  return 0;
}

      


