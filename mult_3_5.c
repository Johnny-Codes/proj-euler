#include <stdio.h>

int main() {
	int nums[1000] = {};
	int index = 0;

	for(int i = 0; i <= 1000; i++) {
		if (i % 3 == 0) {
			// printf("yay\n");
			nums[index] = i;
			index++;
		} else if (i % 5 == 0) {
			// printf("yay\n");
			nums[index] = i;
			index++;
		} else {
			
		} 
	}

	printf("The sum of all the multiples of 3 or 5 below 1000 is: ");
	int sum = 0;
	for(int i = 0; i < nums.length(); i++) {
		sum += nums[i];
	}

	printf("%d\n", sum);

}
