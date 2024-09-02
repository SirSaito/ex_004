//B. Considerando o fragmento de código abaixo, é possível efetuar a leitura da variável
//z? Explique.
float z;
float *pz;
pz = &z;
scanf("%f", pz);
//Sim, pois o endereço da variavel z está sendo compartilhada com o ponteiro *pz.