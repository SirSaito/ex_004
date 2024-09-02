//3. Quais valores serão resultantes das instruções das linhas 7 e 9?
void muda_primeiro(int *primeiro, int segundo){
    *primeiro = segundo;
}
int main() {
    int a = 0, b = 5;
    printf("Valor de a: %d - valor de b: %d\n", a, b);
    muda_primeiro(&a, b);
    printf("Valor de a: %d - valor de b: %d\n", a, b);
    return 0;
}
//Linha 7 tem valores de 0 e 5.
//Linha 9 tem valores de 5 e 5.