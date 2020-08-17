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

    cout<<"Numero de espacos em branco:"<<a<<endl;
}
void parte_1_2(){
    vector<int> v1, v2;
    int x = 0;
    cout << "insira : ";
    while (x >= 0)
    {
        cin >> x;
        if (x >= 0)
        {
            v1.push_back(x);
        }
    }
    cout << endl
         << "v1 : ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        int aux = 1;
        while (v1[i] == v1[i + 1])
        {
            aux += 1;
            i += 1;
        }
        v2.push_back(aux);
        v2.push_back(v1[i]);
        aux = 0;
    }
    v1.clear();
    cout << "v2 : ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
}