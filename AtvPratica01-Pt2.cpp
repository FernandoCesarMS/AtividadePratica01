#include "AtvPratica01-Pt2.h"

int main()
{
    Matriz A, B, R;

    std::cout<<"A:: "<<std::endl;
    inicializaMatriz(A,2,3);
    imprimeMatriz(A);
    
    std::cout<<"Transposta de A:: "<<std::endl;
    transposta(A);
    imprimeMatriz(A);
    apagaMatriz(A);

    std::cout<<std::endl<<"B:: "<<std::endl;
    inicializaMatriz(B,4,5);
    imprimeMatriz(B);
    
    
    std::cout<<std::endl<<"R = k*B "<<std::endl;
    R = multiplica_por_cte(B,5); 
    imprimeMatriz(R);
    apagaMatriz(B);
    apagaMatriz(R);

    return 0;
}