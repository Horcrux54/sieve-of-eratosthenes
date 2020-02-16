#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "RU");
	int arr[999];
	// start creating array 1000 elements
	for (int i = 0; i < 999; i++) {
		arr[i] = i+2;
	}
	// end creating array 1000 elements

	// start prime search
	int j = 0, index, number;
	while (j < 999) {
		if (arr[j] == 0) {
			j++;
			break;
		}
		number = arr[j]; index = j+1;
		while (index < 999) {
			if ((arr[index] % number == 0)||(arr[index]%5==0)&&(arr[index]!=5)) {
				arr[index] = 0;
			}
			index++;
		}
		j++;
	}
	// end prime search

	// start out array
	index = 0;
	while (index < 999) {
		if (arr[index] != 0) {
			printf("%d\n", arr[index]);
		}
		index++;
	}
	// end out array
}