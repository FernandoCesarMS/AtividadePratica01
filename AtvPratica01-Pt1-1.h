#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void countBlanks (){

    ifstream arquivo;
    string linha, c;
    int i=0, a=0;

    arquivo.open("receita.txt");
    if (arquivo.is_open())
    {

        while (getline(arquivo, linha))
        {

             while(linha[i]!='\0'){

                if(linha[i]==' '){

                    a++;

                }


                i++;
        }

        }

        arquivo.close();

    }else
    {
        cout<<"nao foi possivel abrir o arquivo"<< endl;
    }

    cout<<a<<endl;



}
