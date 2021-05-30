#include <stdio.h>
#include <stdlib.h>

int main ( )
{
	int islem,miktar,bakiye=1000;
	
	char yeniden='e';
	
	printf("1-Bakiye sorgulama 2-Para cekme 3-Para yatirma");
	
	while(yeniden=='e')
	{
		printf("lutfen isleminizi giriniz:");
		
		scanf("%d",&islem);
		
		switch(islem)
		{
			
			case 1:
				
				printf("bakiyeniz %d tldir",bakiye);
				
				break;
				
			case 2:
			
			    printf("miktar giriniz:");
			
				scanf("%d",&miktar);
				
				bakiye-=miktar;
				
				printf("kalan bakiyeniz %d",bakiye);
				
				break;
				
			case 3:
			
			     printf("miktar giriniz:");
				 
				 scanf("%d",&miktar);
				 
				 bakiye+=miktar;
				 
				 printf("bakiyeniz %d tldir.",bakiye);
				 
				 break;
				 
			default:
			
			     printf("gecersiz bir islem girdiniz.");
				 
				 break;
				 
		}
		
		printf("yeniden islem yapmak ister misin ? e/h");
		
		scanf("%d",&yeniden);
		
	}
	
	printf("gorusmek dilegiyle...");
	
	return 0;
}
