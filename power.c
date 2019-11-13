#include <stdio.h>
#include "myMath.h"
double Exp(int x){
  double e = 2.71828;
  double result = 1;
  for (int i = 0; i < x; i++) {
    result*=e;
  }
  return result;
}

double Pow(double x, int y){
  double result=1;
  for (int i=0; i<y; i++) {
    result*=x;
  }
  return result;
}
