#include<stdio.h>
#include<conio.h>
void main(){
    
int l;

printf ("Masukkan tinggi pohon bintang : ");
scanf  ("%d",&l);
for(int i=1;i<=l;i++){
    for(int j=1;j<=i;j++){
        if(i+j<=(l+1)){
            printf("*");
        }else{
            printf(" ");
        }
    }
    printf("\n");
    }
    getch();
}
