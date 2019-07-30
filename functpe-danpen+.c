#include <stdio.h>
void func1(int x, int y){
	int j;
	int h;
	if(x == 10 && y == 10){
		h =x- 2;
		j = y + 3;
	}
	printf("\n");
	printf("1. %d - 2 = %d\n", x, x-2);
	printf("2. %d + 3 = %d\n", y, y + 3);
}

int main(){
	int A,B;

    printf("Bilangan Pertama: ",A);
	scanf("%d", &A);
	printf("Bilangan Kedua: ",B);
	scanf("%d", &B);
	func1(A,B);

	return 0;
}
