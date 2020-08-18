#include <stdio.h>
int main(void) {
   float high,radius,ans;
  printf("Enter radius: ");
  scanf("%f", &radius);
  printf("Enter High: ");
  scanf("%f", &high);
  ans = (2*3.14*radius*high)+(2*3.14*radius*radius);
  printf("Answer is %0.2f",ans);
  return 0;
}