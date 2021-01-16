#include<stdio.h>
int  a_star(char *input, int n);
int a_star_b_plus(char *input, int n);
int abb(char *input, int n);
int main()
{

int n;
char s[20];
printf("Enter the size of string and string\n");
scanf("%d ", &n);
scanf("%s", s);
//printf("%s", s);
//n = sizeof(s)/sizeof(s[0]);
// printf("%d ", a_star_b_plus(s, n));

if(abb(s, n)) printf("Given String is accepted in \"abb\" grammar");
else if(a_star(s, n)) printf("Given string is accepeted in \"a*\" grammar");
else if(a_star_b_plus(s, n)) printf("Given string is accepted in \"a*b+\" grammar");
else printf("String is not accepted");

return 0;
}

int a_star(char *input, int n){
    int i;

    for(i = 0; i < n; i++){
       if(input[i] != 'a') return 0;
    }
    return 1;
}


int a_star_b_plus(char *input, int n){
    int i;

    for(i = 0; i < n; i++){
     //printf("Checking for %c at index %d\n", input[i], i);
	  if(i == n-1 && input[i] == 'a') return 0;
       if(input[i] != 'a') {
	  int j;

	  for(j = i; j < n; j++){
	     if(input[j] != 'b') return 0;
	  }
       }
    }
    return 1;
}


int abb(char * input, int n){
    if(n != 3) return 0;
    if(input[0] == 'a' && input[1] == 'b' && input[2] == 'b') return 1;
    return 0;
}