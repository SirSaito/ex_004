//2. Quais valores serão resultantes das instruções das linhas 2, 6 e 12?
void exibe_e_altera(int *n1, int *n2, int *n3) {
    printf("Valores originais na funcao - 1o, 2o, e 3o: %d %d %d\n",*n1, *n2, *n3);
    *n1 += 100;
    *n2 += 100;
    *n3 += 100;
    printf("Valores finais na funcao - 1o, 2o e 3o: %d %d %d\n", *n1, *n2, *n3);
}
int main() {
    int a = 1, b = 2, c = 3;
    exibe_e_altera(&a, &b, &c);
    printf("Valores finais em main 1o, 2o e 3o: %d %d %d\n", a, b ,c);
    return 0;
}
//Linha 2 vai exibir 1, 2 e 3.
//Linha 6 vai exibir 101, 102 e 103.
//Linha 12 vai exibir 101, 102 e 103.