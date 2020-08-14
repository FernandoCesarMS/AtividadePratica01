#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct
{
    double **m;
    int nLinhas;
    int nColunas;
} Matriz;

void inicializaMatriz(Matriz &X, int ls, int cs)
{

    X.m = new double *[ls];
    X.nLinhas = ls;
    X.nColunas = cs;

    for (int i = 0; i < ls; i++)
        X.m[i] = new double[cs];
    for (int i = 0; i < ls; i++)
    {
        for (int j = 0; j < cs; j++)
        {
            int aleatorio = rand()%(10);
            X.m[i][j] = aleatorio;
        }
    }
}
void apagaMatriz(Matriz &X)
{
    for (int i = 0; i < X.nLinhas; i++)
        delete[] X.m[X.nColunas];

    delete[] X.m;
}

Matriz multiplica_por_cte(Matriz &X, double k)
{
    Matriz retorno;
    retorno.m = new double *[X.nLinhas];

    for (int i = 0; i < X.nLinhas; i++)
        retorno.m[i] = new double[X.nLinhas];

    for (int i = 0; i < X.nLinhas; i++)
    {
        for (int j = 0; j < X.nColunas; j++)
        {
            retorno.m[i][j] = (X.m[i][j] * k);
        }
    }
    retorno.nLinhas = X.nLinhas;
    retorno.nColunas = X.nColunas;
    return retorno;
}
void transposta(Matriz &X)
{
    Matriz aux;
    aux.m = new double *[aux.nLinhas];
    aux.nLinhas = X.nColunas;
    aux.nColunas = X.nLinhas;
    for (int i = 0; i < aux.nLinhas; i++)
        aux.m[i] = new double[aux.nColunas];
    for (int i = 0; i < aux.nLinhas; i++)
    {
        for (int j = 0; j < aux.nColunas; j++)
        {
            aux.m[i][j] = X.m[j][i];
        }
    }
    X = aux;
}
void imprimeMatriz(Matriz &X)
{
    for (int i = 0; i < X.nLinhas; i++)
    {
        for (int j = 0; j < X.nColunas; j++)
            cout << X.m[i][j] << " ";
        cout << endl;
    }
}