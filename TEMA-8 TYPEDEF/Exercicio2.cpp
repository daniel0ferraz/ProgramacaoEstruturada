main(){
char string[30];
int count = 0;
printf("Digite uma palavra: ");
gets(string);
for(int i = 0; i < strlen(string); i++) {
if(string[i] == 'a') {
count++;
string[i] = 'b';
} else if(string[i] == 'A') {
count++;
string[i] = 'B';
}
}
printf("Caracteres modificados: %i\n", count);
printf("String depois de ser modificada: %s", string);
}
