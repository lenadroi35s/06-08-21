#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
using namespace std;

void leer_vector(double vector[], double tamanio) {
    for (int a = 0; a < tamanio; a++) {
        vector[a] = rand();
    }
}

void imprime_vector(double vector[], double tamanio) {
    cout << endl << endl << "elementos del vector";
    for (int x = 0; x < tamanio; x++) {
        cout << endl << "Elemento # " << (i + 1) << " : " << vector[x];
    }
}

double sumatoria_vector(double vector[], double tamanio) {
    double suma = 0;
    for (int r = 0; r < tamanio; r++) {
        suma += vector[r];

    }
    return suma;
}

double promedio(double vector[], double tamanio) {
    double suma = 0;
    suma = sumatoria_vector(vector, tamanio) / tamanio;
    return suma;
}

double maxx(double vector[], double tamanio) {
    double qq = vector[0];

    for (int ad = 1; ad < tamanio; ad++) {
        if (vector[ad] > qq) {
            qq = vector[ad];
        }
    }
    return qq;
}

double minn(double vector[], double tamanio) {
    double qqi = vector[0];

    for (int f = 1; f < tamanio; f++) {
        if (vector[f] < m) {
            qqi = vector[f];
        }
    }
    return qqi;
}

void maxmin(double vector[], double tamanio, double &ma, double &mi) {
    ma = maxx(vector, tamanio);
    mi = minn(vector, tamanio);
}

void aleatorio(double vector[], double tamanio) {

    for (int g = 0; g < tamanio; g++) {
        vector[g] = rand();
    }
}

void ordenar(double vector[], double tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (vector[i] > vector[j]) {
                double aux;
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
void ordenar_alrevez(double vector[], double tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (vector[i] < vector[j]) {
                double aux;
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
bool ver(double vector[], double max) {
    int bh = true;
    for (int xi = 0; xi < max; xi++) {
        int aa = vector[x];
        if ((vector[x] - aa) > 0) {
            bh = false;
        } else {
            bh = true;
            break;
        }
    }
    return bh;
}

int pos(double vector[], double max) {
    int b = 0;
    for (int x = 0; x < max; x++) {
        int a = vector[x];
        if ((vector[x] - a) > 0) {
            b = -1;
        } else {
            b = x + 1;
            break;
        }
    }
    return b;
}

bool buscar(double array[], int tamanio, int elemento) {
    for (int i = 0; i < tamanio; i++) {
        if (array[i] == elemento)
            return true;
    }
    return false;
}

int buscar_pos(double array[], int tamanio, int elemento) {
    for (int i = 0; i < tamanio; i++) {
        if (array[i] == elemento)
            return i;
    }
    return -1;
}

int cantidad_elemento_vector(double num[], double tamanio, int elemento) {
    int acum = 0;
    for (int i = 0; i < tamanio; i++) {
        if (num[i] == elemento)
            acum = acum + 1;
    }
    return acum;
}

void intercambio(double &num1, double &num2) {
    double aux;
    aux = num1;
    num1 = num2;
    num2 = aux;

}
void ordenar_intercambio(double vector[], double tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (vector[i] > vector[j]) {
                intercambio(vector[i], vector[j]);
            }
        }
    }
}
void nvector(string nombres[], int tamanio) {
    for (int k = 0; k < tamanio; k++) {
        cout << endl << nombres[k];
    }
}
void ordenar2(string vector[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        for (int j = i + 1; j < tamanio; j++) {
            if (vector[i].compare(vector[j]) < 0) {
                string aux;
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
    LARGE_INTEGER freq;
    QueryPerformanceFrequency(&freq);
    return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}
int main() {
    srand(time(NULL));
    LARGE_INTEGER t_ini, t_fin;
    double secs;
    const int max = 6;
    double num[max];
    leer_vector(num, max);
    num[0] = 10;
    num[1] = 10;
    imprime_vector(num, max);
    double suma = sumatoria_vector(num, max);
    double promedioo = promedio(num, max);
    cout << endl << "La sumatoria es " << suma;
    cout << endl << "El promedio es: " << promedioo;
    cout << endl << "El maximo es: " << maxx(num, max);
    cout << endl << "El minimo es: " << minn(num, max);
    double a, b;
    cout << endl << "Maximo y minimo por referencia: ";
    maxmin(num, max, a, b);
    cout << endl << "El maximo es: " << a;
    cout << endl << "El minimo es: " << b;
    cout << endl << "Numeros aleatorios";
    double alea[max];
    aleatorio(alea, max);
    imprime_vector(alea, max);
    cout << endl << "Verdadero si hay un entero, falso si no hay entero en el vector" << endl;
    int aa = ver(num, max);
    if (aa == 1) {
        cout << endl << "Es verdadero" << endl;
    } else {
        cout << endl << "Es falso" << endl;
    }
    int bb = pos(num, max);
    if (bb == -1) {
        cout << endl << "No se encontro numero entero" << endl;
    } else {
        cout << endl << "La posicion del numero entero encontrado es: " << bb << endl;
    };
    //Buscar elemento en el vector
    int y = 10;
    if (buscar(num, max, y)) {
        cout << endl << "El elemento " << y << " si existe...";
    } else {
        cout << endl << "El elemento " << y << " no existe...";
    }
    //
    int pos = buscar_pos(num, max, y);
    if (pos == -1)
        cout << endl << "No existe el elemento " << y << " en el vector...";
    else
        cout << endl << "El elemento " << y << " existe en la posicion: " << pos;
    //diseÃ±e la funcion que devuelva la cantidad de veces que existe un entero en el vector
    //vector (10, 45, 6, 10, 8, 10)
    cout << endl << "El elemento " << y << " existe: " << cantidad_elemento_vector(num, max, y) << " veces";

    cout << endl << "Ordenar los valores del vector:" << endl;
    cout << endl << "Sin odernar";
    imprime_vector(num, max);
    cout << endl << endl << "Ordenado ascendente";
    QueryPerformanceCounter(&t_ini);
    ordenar(num, max);
    QueryPerformanceCounter(&t_fin);
    secs = performancecounter_diff(&t_fin, &t_ini);
    cout<<"\nORDENACION SECUENCIAL: Tiempo EJECUCION en ms: "<<(secs*1000.0);
    imprime_vector(num, max);
    cout<<endl<<endl<<"Ordenado ascendente por intercambio";
    ordenar_intercambio(num, max);
    imprime_vector(num, max);
    cout << endl << endl << "Ordenado descendente";
    ordenar_alrevez(num, max);
    imprime_vector(num, max);
    const int tam=6;
    string nombres[tam] = {"Leandro", "Juan","Gabreil","Maria","Marcos","Nathaly"};
    cout<<endl<<endl<<"Vector de nombres";
    nvector(nombres,tam);
    cout<<endl<<endl<<"Se ordenara el vector de manera descendente"<<endl;
    ordenar2(nombres,tam);
    nvector(nombres,tam);
}
