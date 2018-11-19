#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int arr[4];
void tablita (string);
vector <string> acciones;
vector <bool> accidente;
int dias=1;

int main(int argc, char *argv[])
{
    
    
    string accion;
    string acci;

    cout << "Proyecto vergas" << endl;
    ///////////////////////////////////////////////////////////////////

    
    do
    {
      cout << "Ingrese un número, 0 para salir: ";
      cin  >> accion;
      if (accion != "0") acciones.push_back(accion);
    }
    while (accion != "0");
    cout<< "se cago? (y/n): ";
    cin >> acci;
    if(acci== "y")
        accidente.push_back(true);
    if(acci=="n")
        accidente.push_back(false);

    vector<string>::iterator it = acciones.begin();
    while( it != acciones.end() )
    {
      cout << *it++ << endl;
    }

    vector<bool>::iterator ut = accidente.begin();
    while( ut != accidente.end() )
    {
      cout << *ut++ << endl;
    }
    cout << "----------" << endl;
    cout << "----------" << endl;
    //////////////////////////////// antes de aqui en do while osea son los dias

    cout<< "Metelooooo"<< endl;
    string f;
    cin>>f;
    ///cin de una accion 
    tablita(f);
    
    for(int n=0; n<4;n++){
        cout<<arr[n];
    }

    return 0;
}

void tablita (string accion){
    for(int n=0; n<4;n++){
        arr[n]=0;
    }
    for (int i = 0; i<dias;i++){
        int index = 2;
        for (int j=0;j<acciones.size();j++){
            if(acciones[j]==accion){
                index=index-2;
                break;
            }
        }
        if(!accidente[i]){
            index++;
        }

        arr[index]++;
    }
    
}