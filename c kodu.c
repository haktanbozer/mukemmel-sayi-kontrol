#include <stdio.h>
 
int main() {
int x;
printf("Lutfen Kontrol Etmek Istediginiz Sayiyi Girin \n");
scanf_s("%d", &x);
 
int y = 0;
for (int j = 1; j < x; j++) {
if (x % j == 0) {
y = y + j;
}
}
if (y == x) {
printf("%d Sayisi Bir Mukemmel Sayidir\n", x);
}
else {
printf("%d Sayisi Bir Mukemmel Sayi Degildir\n", x);
}
 
return 0;
}
