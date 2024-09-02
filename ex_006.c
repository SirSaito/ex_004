//6. Quais valores serão resultantes das instruções das linhas 4, 5, 11 e 12?
void calc(int *a, int b) {
    *a *= 2;
    b += 5;
    printf("\na --> %d ", *a);
    printf("\nb --> %d ", b);
}
int main(){
    int x = 4, y = 2;
    calc(&x, y);
    printf("\nx --> %d ", x);
    printf("\ny --> %d ", y);
    return 0;
}
//O resultado da linha 4 e 8.
//O resultado da linha 5 e 7.
//O resultado da linha 11 e 8.
//O resultado da linha 12 e 2.