#include<stdio.h>
#include<math.h>

void happy(int row);

int main() {
	happy(9);
	return 0;
}
void happy(int row)
{
	if (row == 1)
		printf("1*1=1\n");
	int i = row;
	if (row > 1)
	{
		happy(row - 1);

		for (int j = 1; j <= i; j++)
		{
			printf("%d*%d=%d", j, i, i * j);
			if (j != i)
				printf(" ");
			else
				printf("\n");
		}
		i--;
	}
}
