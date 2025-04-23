#include <stdio.h>
struct ogrenci{
	char isim[50];
	int numara;
	int yoklama;
};
int main(){
	int sayi, i;
	printf("kac ogrenci var?:");
	scanf("%d", &sayi);
	struct ogrenci ogrenciler[sayi];
	for(i=0;i<sayi;i++){
		printf("%d. ogrencinin bilgilerini giriniz(isim, numara):",i+1);
		scanf("%s %d",ogrenciler[i].isim, &ogrenciler[i].numara);
	}
	for(i=0;i<sayi;i++){
		char cevap;
		printf("%s sinifta mi? (+/-):", ogrenciler[i].isim);
		scanf(" %c",&cevap);
		if(cevap == '+'){
			ogrenciler[i].yoklama= 1;
		}else if(cevap == '-'){
			ogrenciler[i].yoklama= 0;
		}else{
			printf("hatali giris yaptiniz.");
			i--;
		}
	}
	printf("\n---YOKLAMA---\n");
	for(i=0;i<sayi;i++){
		if (ogrenciler[i].yoklama== 1){
		printf("%s sinifta.\n", ogrenciler[i].isim);}
		else {
		printf("%s sinifta degil.",ogrenciler[i].isim);}
	}
	return 0;
}
