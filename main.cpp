#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int arr[4];
double tablita(string);
double phi(int arr[]);
vector<vector<string>> accionesDiario;
vector<bool> accidenteDiario;

int main(int argc, char *argv[])
{

    string accion;
    string acci;
    string opcion = "y";

    cout << "Proyecto vergas" << endl;
    ///////////////////////////////////////////////////////////////////
    while (opcion != "n")
    {
        cout << "Ingrese un dia? (y/n): ";
        cin >> opcion;
        if (opcion == "y")
        {
            vector<string> acciones;
            do
            {
                cout << "Ingrese una accion, 0 para salir: ";
                cin >> accion;
                if (accion != "0")
                    acciones.push_back(accion);
            } while (accion != "0");
            accionesDiario.push_back(acciones);
            cout << "se cago? (y/n): ";
            cin >> acci;
            if (acci == "y")
                accidenteDiario.push_back(true);
            if (acci == "n")
                accidenteDiario.push_back(false);
            //////////////////////////////// antes de aqui en do while osea son los dias
        }
    }

    cout << "Metelooooo" << endl;
    string f;
    cin >> f;
    ///cin de una accion
    double resultado = tablita(f);
    //

    cout<<resultado;


    return 0;
}

double tablita(string accion)
{
    for (int n = 0; n < 4; n++)
    {
        if(n==3 && accionesDiario.size()<=2)
            arr[n] = 1;
        else
            arr[n] = 0;
    }
    for (int i = 0; i < accionesDiario.size(); i++)
    {
        int index = 2;
        for (int j = 0; j < accionesDiario[i].size(); j++)
        {
            if (accionesDiario[i][j] == accion)
            {
                index = index - 2;
                break;
            }
        }
        if (!accidenteDiario[i])
        {
            index++;
        }

        arr[index]++;
    }
    return phi(arr);
}

double phi(int lista2[])
{
    double n11n00 = lista2[0] * lista2[3];
    double n10n01 = lista2[1] * lista2[2];
    double n1 = lista2[0] + lista2[2];
    double n0 = lista2[1] + lista2[3];
    double nc1 = lista2[0] + lista2[1];
    double nc0 = lista2[2] + lista2[3];
    cout<< sqrt(n1 * n0 * nc1 * nc0)<<endl;
    cout<< n1<<endl;
    cout<< n0<<endl;
    cout<< nc1<<endl;
    cout<< nc0<<endl;
    return (n11n00 - n10n01) / sqrt(n1 * n0 * nc1 * nc0);
}