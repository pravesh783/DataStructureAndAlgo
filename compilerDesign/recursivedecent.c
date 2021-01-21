#include<stdio.h>
#include<string.h>
//look ahead variable
char l;
void match(char t){
    if(l == t){
        l = getchar();
    }
    else printf("Error ");
}

void Edash(){
    if(l == '+'){
        match('+');
        match('i');
        Edash();
    }
    else return;
}
void E(){
    if(l == 'i'){
        match('i');
        Edash();
    }
}

int main(){
    puts("GRAMMAR is:\nE-> iE'\nE'-> +iE' / NULL");
    puts("Enter the string: ");
    l = getchar();
    E();
    if(l == '$') printf("Parsing done");
    else printf("Parsing not done");
    return 0;
}


