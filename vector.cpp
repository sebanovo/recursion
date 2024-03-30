//---------------------------------------------------------------------------

#pragma hdrstop

#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "vector.h"

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

void invertir_vector(TStringGrid* v, byte a, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        byte b = a + n - 1;
        invertir_vector(v, a + 1, n - 2);
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

