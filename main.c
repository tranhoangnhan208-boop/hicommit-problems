#include <stdio.h>

int main() {
  double w,h;
  printf("w");
  scanf("%2,f"&w);
  scanf("%2,f"&h);
  float BMI;
  BMI = w/(h/100)*(h/100);
  if (BMI 18,5)
  printf("UNDERWEIGHT");
  else if (18,5 <= BMI 25)
  peintf ("NORMAL");
  else if (25 <= BMI 30)
  peintf ("OVERWEIGHT");
  else 
  peintf ("OBESE");
  return 0;
}