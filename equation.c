#include <stdio.h>
#include <math.h>

void LinearEquation(){
  int a, b, x;

  printf("ax + b = 0\n");
  printf("a : ");
  scanf("%d", &a);
  printf("b : ");
  scanf("%d", &b);
  printf("\n");

  if (a == 0 && b == 0){
    printf("부정 방정식 (x == 모든 수)\n");
  }
  else if (a == 0&& b != 0){
    printf("불능 방정식 (x == null)\n");
  }
  else if (a != 0){
    printf("x == %d\n", -b/a);
    x = (-b)/a;
    printf("%d X %d == %d\n", a, x, b);
  }

}

void QuadraticEquation(){
  int a, b, c;

  printf("ax^2 + bx + c = 0\n");
  printf("a : ");
  scanf("%d", &a);
  printf("b : ");
  scanf("%d", &b);
  printf("c : ");
  scanf("%d", &c);
  printf("\n");

  double x, minusx;
  double Discriminant = (b * b) - (4 * a * c);
  double SqrtDis = sqrt(Discriminant);
  x = (-b + SqrtDis) / (2 * a);
  minusx = (-b - SqrtDis) / (2 * a);


  if (a == 0) {
    printf("err (a != 0)");
  }
  else if (Discriminant > 0){
    printf("x == %f, %f", x, minusx);
  }
  else if (Discriminant == 0){
    printf("x == %f (중근)", x);
  }
  else if (Discriminant < 0){
    printf("해가 없다\n");
  }

}

int main(){
  int n;
  printf("n차 방정식?\nn = ");
  scanf("%d", &n);
  printf("\n");

  if(n == 1){
    LinearEquation();
  }
  else if(n == 2){
    QuadraticEquation();
  }
  else{
    printf("err");
  }

  return 0;
}
