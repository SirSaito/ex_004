//4. Quais valores serão resultantes das instruções das linhas 11, 13, 14 e 16?
void por_valor(int a, int b, int c) {
    a = b = c = 0;
}
void por_ref(int *a, int *b, int *c) {
    *a = *b = *c = 0;
}
int main () {
    int x = 2, y = 4, z = 6;
    printf("\nAntes de chamar por_valor: x = %d, y = %d, z = %d", x, y, z);
    por_valor(x, y, z);
    printf("\nDepois de chamar por_valor: x = %d, y = %d, z = %d", x, y, z);
    printf("\nAntes de chamar por_ref: x = %d, y = %d, z = %d", x, y, z);
    por_ref(&x, &y, &z);
    printf("\nDepois de chamar por_ref: x = %d, y = %d, z = %d", x, y, z);
    return 0;
}
//Valores da linha 11 são 2, 4 e 6.
//Valores da linha 13 são 2, 4 e 6.
//Valores da linha 14 são 2, 4 e 6.
//Valores da linha 14 são 0, 0 e 0.