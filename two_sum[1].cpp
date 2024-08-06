#include <iostream> //sirve para iniciar la operación de entrada y salida
using namespace std;//este nos deja utilizar elementos del espacio de nombres std
int main () {//es donde comienza la ejecucion
int array [6] = {10, 20, 30, 40, 50, 60}; //indica un arreglo de enteros de tamaño del numero que se indica (en este caso el 6) e inicializa sus elementos
for (int i=0; i<6; i++) //este es el bucle que imprime seis saltos de linea uno por cada iteracion
    cout<<endl;
cout<<"la suma de ambas posiciones es: "; //muestra el mensaje ¨la suma de ambas posiciones es¨ en la pantalla
cout<<array[1] + array [5]; //imprime la suma de los elementos en las posiciones 1 y 5 del arreglo
return 0;//termina el programa
}
