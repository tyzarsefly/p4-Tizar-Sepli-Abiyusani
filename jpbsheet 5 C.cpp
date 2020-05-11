#include <stdio.h>
#include <conio.h>

main (){
	int nim1 [2][2]; 
	int nim2 [2][2]; 
	int hasil [2][2];
	int i, j;
		printf("Tizar Sepli Abiyusani(F1B019138)-kel.26\n\n");
	printf ("Pengurangan NIM\n");
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			printf ("Masukkan nilai index %d, %d = ", x, y);
			scanf ("%d", &nim1[x][y]);
		}
	}
	printf ("\n");
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			printf ("Masukkan nilai index %d, %d = ", x, y);
			scanf ("%d", &nim2[x][y]);
		}
	}
	for (x = 0; x < 2; x++){
		for (y = 0; y < 2; y++){
			hasil [x][y]=nim1[x][y]*nim2[x][y];
			printf ("%d ", hasil[x][y]);
		}
		printf ("\n");
	}
	getch();
}
