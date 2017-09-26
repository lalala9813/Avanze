#include <iostream>
#include <stdlib.h>//LO DIFERENTE

using namespace std;

int **matriz,nFilas,nCol;//LO DIFERENTE

void pedir()
{
    cout << "Dame el numero de Filas -> ";
    cin >> nFilas;
    cout << "Dame el numero de columnas -> ";
    cin >> nCol;

    matriz = new int*[nFilas];//LO DIFERENTE //Reservando memoria para las filas
    for(int i=0;i<nFilas;i++)
    {
        matriz[i]=new int[nCol];//LO DIFERENTE
    }


    for(int i=0;i<nFilas;i++)
    {
        for(int j=0;j<nCol;j++)
        {
            cout << "Dame mis numeros["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz+i)+j); //LO DIFERENTE //guardadno elementos de mi matriz

        }
    }
}

void print(int **matriz/*LO DIFERENTE*/ ,int nFilas,int nCol)
{
    for(int i=0;i<nFilas;i++)
    {
        for(int j=0;j<nCol;j++)
        {
            cout << *(*(matriz+i)+j)<<" ";//LO DIFERENTE
        }
        cout << "\n";
    }

}


int main()
{
    pedir();
    print(matriz,nFilas,nCol);

    for(int i=0;i<nFilas;i++)//LO DIFERENTE
    {
        delete[] matriz[i];//LO DIFERENTE
    }
    delete[] matriz;//LO DIFERENTE
    return 0;
}
