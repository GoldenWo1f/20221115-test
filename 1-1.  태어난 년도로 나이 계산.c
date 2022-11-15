#include <stdio.h>

int main(void) {
	int birth_year; // 태어난 년도 
	int age; // 나이	
  printf("Birth year? ");
  scanf("%d", &birth_year);
  age = 2022 - birth_year + 1;
  printf("%d\n", age);
	
	return 0;
}