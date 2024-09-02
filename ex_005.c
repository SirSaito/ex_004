//5. Quais valores serão resultantes das instruções das linhas 3 e 9?
void incrementar(int *num) {
    *num += 10;
    printf("\nnum --> %d ", *num);
    }
int main(){
    int i = 1;
    incrementar(&i);
    printf("\ni --> %d ", i);
    return 0;
}
//resultado da linha 3 e 11.
//resultado da linha 9 e 11.