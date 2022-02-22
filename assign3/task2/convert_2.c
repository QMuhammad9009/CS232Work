#include<stdio.h>
#include<stdlib.h>

char* convert_2(int dec){

	 int rem, i=1, binary=0;
    while (dec!=0)
    {
        rem=dec%2;
        dec/=2;
        binary+=rem*i;
        i*=10;
    }
    return binary;

}

int main() {
	int n;
	char * bin;
	printf("Enter the Decimal Number\n");
	scanf("%d",&n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t %s\n", n, bin);
	free(bin);
}
