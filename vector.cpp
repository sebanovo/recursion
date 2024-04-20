//---------------------------------------------------------------------------

#pragma hdrstop

#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <cmath>
#include <math.h>
#include "vector.h"
#include "cadena.h"
#include "numero.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

// Cargar Random
void cargar(TStringGrid* v, byte n)
{
    if (n == 0) {
        v->ColCount = 0;
    } else {
        cargar(v, n - 1);
        v->Cells[n - 1][0] = Random(20) + 1;
    }
}

void cargar_palabras(String x, TStringGrid* v, byte a, byte &n)
{
    String p = primer_palabra(x);
    if (p == "") {
        n = 0;
    } else {
        eliminar_primer_palabra(x);
        cargar_palabras(x, v, a + 1, n);
        v->Cells[a][0] = p;
        n++;
    }
}

Cardinal sumar_todos_los_numeros(TStringGrid* v, byte a, byte b)
{
    Cardinal s;
    byte n = b - a + 1;
    if (n == 0) {
        s = 0;
    } else if (n == 1) {
        s = StrToInt(v->Cells[a][0]);
    } else {
        s = sumar_todos_los_numeros(v, a + 2, b);
        s = s + StrToInt(v->Cells[a][0]) + StrToInt(v->Cells[a + 1][0]);
    }
    return s;
}

void invertir(TStringGrid* v, byte a, byte b)
{
    byte n = b - a + 1;
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        invertir(v, a + 1, b - 1);
        String temp = v->Cells[a][0];
        v->Cells[a][0] = v->Cells[b][0];
        v->Cells[b][0] = temp;
    }
}

void mover_numero_mayor_al_final(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_numero_mayor_al_final(v, n - 1);
        if (StrToInt(v->Cells[n - 2][0]) > StrToInt(v->Cells[n - 1][0])) {
            String temp = v->Cells[n - 2][0];
            v->Cells[n - 2][0] = v->Cells[n - 1][0];
            v->Cells[n - 1][0] = temp;
        }
    }
}

void mover_numero_menor_al_final(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_numero_menor_al_final(v, n - 1);
        if (StrToInt(v->Cells[n - 2][0]) < StrToInt(v->Cells[n - 1][0])) {
            String temp = v->Cells[n - 2][0];
            v->Cells[n - 2][0] = v->Cells[n - 1][0];
            v->Cells[n - 1][0] = temp;
        }
    }
}

void ordenamiento_burbuja_ascendente(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_numero_mayor_al_final(v, n);
        ordenamiento_burbuja_ascendente(v, n - 1);
    }
}

void ordenamiento_burbuja_descendente(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_numero_menor_al_final(v, n);
        ordenamiento_burbuja_descendente(v, n - 1);
    }
}

bool busqueda_binaria(Cardinal x, TStringGrid* v, byte a, byte b)
{
    bool bol;
    byte n = b - a + 1;
    if (n == 0) {
        bol = false;
    } else if (n == 1) {
        bol = x == StrToInt(v->Cells[a][0]);
    } else {
        byte c = (a + b) / 2;
        if (x == StrToInt(v->Cells[c][0])) {
            bol = true;
        } else if (x < StrToInt(v->Cells[c][0])) {
            bol = busqueda_binaria(x, v, a, c - 1);
        } else {
            bol = busqueda_binaria(x, v, c + 1, b);
        }
    }
    return bol;
}

bool busqueda_secuencial(Cardinal x, TStringGrid* v, byte a, byte b)
{
    bool bol;
    byte n = b - a + 1;
    if (n == 0) {
        bol = false;
    } else {
        bol = busqueda_secuencial(x, v, a + 1, b);
        if (!bol && StrToInt(v->Cells[a][0] == x)) {
            bol = true;
        }
    }
    return bol;
}

bool verificar_ordenado_ascendente(TStringGrid* v, byte a, byte n)
{
    bool bol;
    if (n == 0) {
        bol = true;
    } else if (n == 1) {
        bol = true;
    } else {
        bol = verificar_ordenado_ascendente(v, a + 1, n - 1);
        if (StrToInt(v->Cells[a][0]) > StrToInt(v->Cells[a + 1][0])) {
            bol = false;
        }
    }
    return bol;
}

bool verificar_ordenado_descendente(TStringGrid* v, byte a, byte n)
{
    bool bol;
    if (n == 0) {
        bol = true;
    } else if (n == 1) {
        bol = true;
    } else {
        bol = verificar_ordenado_descendente(v, a + 1, n - 1);
        if (StrToInt(v->Cells[a][0]) < StrToInt(v->Cells[a + 1][0])) {
            bol = false;
        }
    }
    return bol;
}

//Escribir una función que devuelva la cantidad de números pares que contiene
//Ej. ContarPares(v[2, 4,5,12, 23, 54,3, 34, 6], 9) => 6
byte contar_numeros_pares(TStringGrid* v, byte n)
{
    byte c;
    if (n == 0) {
        c = 0;
    } else {
        c = contar_numeros_pares(v, n - 1);
        if (StrToInt(v->Cells[n - 1][0]) % 2 == 0) {
            c++;
        }
    }
    return c;
}

byte contar_numeros_impares(TStringGrid* v, byte n)
{
    byte c;
    if (n == 0) {
        c = 0;
    } else {
        c = contar_numeros_impares(v, n - 1);
        if (StrToInt(v->Cells[n - 1][0]) % 2 == 1) {
            c++;
        }
    }
    return c;
}

//Escribir un proceso para eliminar el dato x de un vector.
//Ej. v[2,5,65,23,45,2,13,45,61], x=2 EliminarX(x, v, 9) => v[5,65,23,45,13,45,61]
void recorrer(TStringGrid* v, byte a, byte b)
{
    byte n = b - a + 1;
    if (n == 0) {
        // nada
    } else {
        v->Cells[a][0] = v->Cells[a + 1][0];
        recorrer(v, a + 1, b);
    }
}

void eliminar_elemento(String x, TStringGrid* v, byte a, byte b)
{
    byte n = b - a + 1;
    if (n == 0) {
        // nada
    } else {
        String d = v->Cells[a][0];
        eliminar_elemento(x, v, a + 1, b);
        if (d == x) {
            recorrer(v, a, b);
            v->ColCount--;
        }
    }
}

void factorial(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else {
        v->Cells[n - 1][0] = factorial(StrToInt(v->Cells[n - 1][0]));
        factorial(v, n - 1);
    }
}

bool verificar_palindromo(TStringGrid* v, byte a, byte b, byte n)
{
    bool p = true;
    if (a <= n / 2) {
        // menos el primero y menos el ultimo
        p = verificar_palindromo(v, a + 1, b - 1, n);
        if (p != false) {
            if (v->Cells[a][0] == v->Cells[b][0]) {
                p = true;
            } else {
                p = false;
            }
        }
    }
    return p;
}

byte posicion_del_numero_mayor(TStringGrid* v, byte n)
{
    byte p;
    if (n == 0) {
        throw new Exception("Error: vector vacio");
    } else if (n == 1) {
        p = 0;
    } else {
        p = posicion_del_numero_mayor(v, n - 1);
        if (v->Cells[p][0].ToInt() < v->Cells[n - 1][0].ToInt()) {
            p = n - 1;
        }
    }
    return p;
}

void selection_sort(TStringGrid* v, byte n)
{
    if (n > 1) {
        byte pm = posicion_del_numero_mayor(v, n);
        String temp = v->Cells[n - 1][0];
        v->Cells[n - 1][0] = v->Cells[pm][0];
        v->Cells[pm][0] = temp;
        selection_sort(v, n - 1);
    }
}

// Ejm: x = "Hola" => v[H,a,l,o] orden ASCII
void cargar_caracteres_orden_ascendente(TStringGrid* v, String x)
{
    if (x.Length() > 0) {
        Cardinal posMay = posicion_del_caracter_mayor(x);
        wchar_t c = x[posMay];
        v->Cells[x.Length() - 1][0] = c;
        x.Delete(posMay, 1);
        cargar_caracteres_orden_ascendente(v, x);
    }
}

// Ejm: x = "Hola" => v[o,H,l,a] orden ASCII
void cargar_caracteres_orden_descendente(TStringGrid* v, String x)
{
    if (x.Length() > 0) {
        Cardinal posMen = posicion_del_caracter_menor(x);
        wchar_t c = x[posMen];
        v->Cells[x.Length() - 1][0] = c;
        x.Delete(posMen, 1);
        cargar_caracteres_orden_descendente(v, x);
    }
}

// *** EJERCICIO DE 2 StringGrid ***//
// insertar un vector en otro indicando una posicion;
//void recorrer1(TStringGrid1* v, byte p, byte n)
//{
//    if (p < n) {
//        v->Cells[n][0] = v->Cells[n - 1][0];
//        recorrer1(v, p, n - 1);
//    }
//}
//
//void insertar_aux(TStringGrid* v2, TStringGrid* v1, byte p, byte i)
//{
//    if (i < v2->ColCount) {
//        v1->ColCount++;
//        recorrer1(v1, p, v1->ColCount);
//        v1->Cells[p][0] = v2->Cells[i][0];
//        insertar_aux(v2, v1, p + 1, i + 1);
//    }
//}
//
//void insertar(TStringGrid* v2, TStringGrid* v1, byte p)
//{
//    insertar_aux(v2, v1, p, 0);
//}
// ----------------------------------------------------------------------------

// *** EJERCICIO DE 2 StringGrid ***//
//Ej:  v1[H,o,l,a,m,u,n,d,o]
//     v2[1,2,1,1,1,1,1,1,2]
// cuenta cuantas veces se repite cada caracter en el vector
//Cardinal frecuencia(String cad, wchar_t c)
//{
//	Cardinal f;
//	if (cad.Length() == 0) {
//		f = 0;
//	} else {
//		char x = cad[1];
//		cad.Delete(1, 1);
//		f = frecuencia(cad, c);
//		if (x == c) {
//			f++;
//		}
//	}
//	return f;
//}
//
//void cargar_frecuencia(String cad, TStringGrid* vc, TStringGrid* vf, Cardinal n)
//{
//	if (n > 0) {
//		char c = cad[n];
//		Cardinal f = frecuencia(cad, c);
//		vc->Cells[n - 1][0] = c;
//		vf->Cells[n - 1][0] = f;
//		cargar_frecuencia(cad, vc, vf, n - 1);
//	}
//}
// ------------------------------------------------------------------------

// n = 5 => v[1, 21, 321, 4321, 54321]

String N1(byte n)
{
    String s;
    if (n == 0) {
        s = "";
    } else {
        s = String(n) + N1(n - 1);
    }
    return s;
}

void LoadNumber12(TStringGrid* v, byte n)
{
    if (n > 0) {
        LoadNumber12(v, n - 1);
        v->Cells[n - 1][0] = N1(n);
    }
}

