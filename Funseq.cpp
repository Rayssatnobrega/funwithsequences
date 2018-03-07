#include<stdio.h>


int main(){
	
  int numelem1, numelem2, s[100],q[100], cont1, cont2;
  
  scanf("%d",&numelem1);
  
  for(cont1 = 0; cont1 < numelem1; cont1++){
  
      scanf("%d",&s[cont1]);
    } 
    
  scanf("%d",&numelem2);
  
  for(cont2 = 0;cont2 < numelem2;cont2++){
  
    scanf("%d",&q[cont2]);
 
   }
   
  for(cont1 = 0,cont2 = 0;cont1 < numelem1 && cont2 < numelem2;){
     
      if(s[cont1] - q[cont2] < 0){
         printf("%d ",s[cont1]);
         cont1++;
        }
        else if(s[cont1] == q[cont2]){
		        cont1++;
        }
        else{
		    cont2++;
		}
    }
 
    for(;cont1 < numelem1;cont1++){
        printf("%d ",s[cont1]);
    }
    
    printf("\n");
 
    return 0;
}
