//7. Quais valores serão resultantes da instrução da linha 12?
void soma(int x, int y, int *z){
    int i;
    for (i=x; i<=y; i++)
    *z += i;
}
int main(){
    int a, b, s = 0;
    scanf("%d%d", &a, &b);
    if (a<=b)
    soma(a, b, &s);
    printf("\nA soma de %d e %d --> %d ", a, b, s);
    return 0;
}
//O resultado da linha 12 será 0, 0 e 0;