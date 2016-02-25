#include <stdio.h>
int main()
{
	FILE *fo;
	fopen_s(&fo, "123.txt", "w");
	int array[4][4];
	printf_s("Vvedite Massiv\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4;j++)
		{
			scanf_s("%i", &array[i][j]);
		}
	}
	printf_s("Press ENTER to contunie\n");
	
		for (int j = 0; j < 4; j++)
		{
			array[0][j] = array[2][j] - array[0][j];
		}
    for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			fprintf(fo, "[%d][%d]=%d ", i, j, array[i][j]);
		}
		fprintf(fo, "\n");
	}
	fclose(fo);
	system("pause");
}