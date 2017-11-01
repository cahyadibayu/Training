#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char user[]="bayu",pass[]="1234",u[10],p[10];
int n=1,a,b,c,d,input[100],count=0,pilih,pilih2,pilih3,pilih4,pilih5,y,i,j,m,r,x,z,mid,mean,median,modus,temp=0,max,frekuensi[100];

int main(){
	login();
	inputdata();
	menu();
}

int login(){
	while(n<=3){
		system("cls");
		printf("\n======LOGIN======\n\n");
		printf("USERNAME: ");
		scanf("%s",&u);
		printf("PASSWORD: ");
		scanf("%s",&p);
		a=strcmp(u,user);
      		b=strcmp(p,pass);
      	if(a==0&&b==0)
      	{
         	printf("\nLOGIN Berhasil.");
         	getch();
         	break;
      	}
      	else
      	{
         	printf("\nUSERNAME Salah Atau PASSWORD Salah. Kesempatan : %d.",3-n);
     	}
      	getch();
      	n++;
	
	}
	if(n==4){
		printf("\nYou can't log in.");
   		getch();
   		return 0;
	}
      
}

int inputdata(){
	for(c=0;c<100;c++){
		system("cls");
		printf("\n======INPUT DATA======\n");
		printf("\nData Ke-%d : \n>>",c+1);
		scanf("%d",&input[c]);
		count++;
		printf("\nMasukkan Data Lagi? (Ketik 1 Untuk YA, Angka Lain Untuk Tidak) \n");
		scanf("%d",&pilih);
		if(pilih != 1){
			break;
		}
	}
}

int kalkulator(){
	system("cls");
	printf("\n\n======Kalkulator Sederhana======\n");
	printf("\nData Yang Telah Anda Masukkan : \n");
	for(c=0;c<count;c++){
		printf("%d ",input[c]);
	}
	printf("\nPilihan:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Kembali ke Menu Utama\nPilihan Anda?  ");
	scanf("%d",&pilih2);
	switch(pilih2){
		case 1:
			for(i=0;i<count;i++){
				y=y+input[i];
			}
			printf("\nHasil Penjumlahan : %d",y);
			printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
			break;
		case 2:
			y=input[0];
			for(i=1;i<count;i++){
				y=y-input[i];
			}
			printf("Hasil Pengurangan : %d",y);
			printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
			break;
		case 3:
			y=input[0];
			for(i=1;i<count;i++){
				y=y*input[i];
			}
			printf("Hasil Perkalian : %d",y);
			printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
			break;
		case 4:
			y=input[0];
			for(i=1;i<count;i++){
				y=y/input[i];
			}
			printf("Hasil Pembagian : %d",y);
			printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
			break;
		case 5:
			return menu();
			break;
	}
}

int submenu2(){
	system("cls");
	printf("\nData Yang Telah Anda Masukkan:\n\t");
	display();
	printf("\n\n======Kalkulator Statistik======");
	printf("\n1. Mean\n2. Median\n3. Modus\n4. Kembali ke Menu Utama\n Pilihan Anda? ");
	scanf("%d",&pilih3);
	switch(pilih3){
		case 1:
			for(i=0;i<count;i++){
				x=x+input[i];
			}
			mean=x/count;
			printf("Mean = %d",mean);
			printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
			break;
		case 2:
			mid=count/2;
			for(a=0;a<(count-1);a++){
            for(b=a;b<count;b++){
            	if(input[b]<input[a]){
                    temp=input[a];
                    input[a]=input[b];
                	input[b]=temp; 
				}                   
            }
            }
            printf("\nData Yang Telah Diurut :\n");
            for(i=0;i<count;i++){
            	printf("%d ",input[i]);
			}
			
			if(count%2==0){
				x=(input[mid-1]+input[mid])/2;
				printf("\nMedian : %d",x);
			}
			else{
				printf("\nMedian : %d",input[mid+1]);	
			}
			printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
			break;
		case 3:
			for(a=0;a<100;a++){
			frekuensi[a]=0;
            for(b=0;b<count;b++){
                if(input[b]==a){
					frekuensi[a]=frekuensi[a]+1;
					}
            }
                if(frekuensi[a]>max) {
					max=frekuensi[a];
					modus=a;
					}
            }
   
    		printf("\nModus Adalah: %d\n\n",modus);
    		printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
			scanf("%d",&pilih4);
			if(pilih4==1){
				return menu();
			}
    		break;
    	case 4:
			return menu();
			break;
		}
}

int submenu3(){
	system("cls");
	printf("\n\n====Sorting Data Dalam Array====\n\n");
	printf("Data Sebelum Diurutkan : ");
	for(i=0;i<count;i++){
    	printf("%d ",input[i]);
	}
	for(a=0;a<(count-1);a++){
            for(b=a;b<count;b++){
            	if(input[b]<input[a]){
                    temp=input[a];
                    input[a]=input[b];
                	input[b]=temp; 
				}                   
            }
            }
    printf("\n\nData Yang Telah Diurutkan :\n");
    for(i=0;i<count;i++){
    	printf("%d ",input[i]);
	}
	printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
	scanf("%d",&pilih4);
	if(pilih4==1){
		return menu();
	}
}

int submenu4(){
	system("cls");
	printf("\n=====Menghilangkan Duplikasi=====\n\n");
	printf("Data Sebelum Dihilangkan Duplikasinya : ");
	for(i=0;i<count;i++){
    	printf("%d ",input[i]);
	}
	i=0;
	j=1;

	while(j<=count)
	{
		if(input[j]!=input[i])
		{
			i++;
			input[i]=input[j];
		}
		j++;
	}
	r=i;
	printf("\n\nHasil Array\n");
	for(d=0;d<r;d++)
	{
		printf("%d ",input[d]);
	}
	printf("\nKembali Ke Menu Utama?\n(1 Untuk Ya dan Angka Lain Untuk Tidak)\n");
	scanf("%d",&pilih4);
	if(pilih4==1){
		return menu();
	}
}

int menu(){
	system("cls");
	printf("\nData :\n\t");
	display();
	printf("\n\n====MENU====\n");
	printf("1. Kalkulator Sederhana\n2. Mencari Mean,Median dan Modus\n3. Sorting\n4. Menghilangkan Duplikasi\n5. Exit Program\nPilihan Anda ? ");
	scanf("%d",&pilih4);
	switch(pilih4){
		case 1:
			kalkulator();
			break;
		case 2:
			submenu2();
			break;
		case 3:
			submenu3();
			break;
		case 4:
			submenu4();
			break;
		case 5:
			return 0;
			break;
	}
}

int display(){
	for(i=0;i<count;i++){
            	printf("%d ",input[i]);
			}
}
