#include <string.h> 
#include <stdio.h> 
#include <ctype.h>


char str[100];
int i, j, check = 0, length = 0;


main()
{ 

printf("\nEnter String(Chislo):");
 
scanf("%s",&str); 

for(i=0;i<strlen(str);i++){ 

if(isalpha(str[i])==0){

if(isdigit(str[i])!=0)

check = 1;

 } 
 
 else check = 0;
 
}

if (check==1){
for(j=0;j<strlen(str);j++){
if(str[j]!=0)
length++;

}

if(length > 7)

printf("\n Number %s is double.", str);

else printf("\n Number %s is float.", str);

} else 

printf("Nevernoe chislo!"); 
getchar();  
return 0; 
}
