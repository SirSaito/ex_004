//1. Quais valores serão mostrados nas instruções de saída das linhas 2, 6 e 12?
void exibe_e_altera(int x, int y, int z){
    printf("Valores originais de x, y e z: %d %d %d\n", x, y, z);
    x += 100;
    y += 100;
    z += 100;
    printf("Valores finais de x, y e z dentro da funcao: %d %d %d\n", x, y, z);
}
int main(){
    int a = 1, b = 2, c = 3;
    exibe_e_altera(a, b, c);
    printf("Valores finais em main de a, b e c: %d %d %d\n", a,b,c);
    return 0;
}
//Linha numero 2 vai exibir 1, 2 e 3.
//Linha numero 6 vai exibir 101, 102 e 103.
//Linha numero 12 vai exibir 1, 2 e 3;
