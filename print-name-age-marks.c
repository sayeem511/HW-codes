// read name, age and marks, then print them neatly
#include<stdio.h>
int main() {
      char name[50];
      int age;
      float marks;
      scanf("%s %d %f", name, &age ,&marks);
      printf("name: %s\nage: %d\n marks: %f\n", name, age, marks);
      return 0;

}
