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

Cardinal sumar_todos_los_elementos(TStringGrid* v, byte a, byte b)
{
    Cardinal s;
    byte n = b - a + 1;
    if (n == 0) {
        s = 0;
    } else if (n == 1) {
        s = StrToInt(v->Cells[a][0]);
    } else {
        s = sumar_todos_los_elementos(v, a + 2, b);
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

void mover_mayor_al_final(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_mayor_al_final(v, n - 1);
        if (StrToInt(v->Cells[n - 2][0]) > StrToInt(v->Cells[n - 1][0])) {
            String temp = v->Cells[n - 2][0];
            v->Cells[n - 2][0] = v->Cells[n - 1][0];
            v->Cells[n - 1][0] = temp;
        }
    }
}

void mover_menor_al_final(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_menor_al_final(v, n - 1);
        if (StrToInt(v->Cells[n - 2][0]) < StrToInt(v->Cells[n - 1][0])) {
            String temp = v->Cells[n - 2][0];
            v->Cells[n - 2][0] = v->Cells[n - 1][0];
            v->Cells[n - 1][0] = temp;
        }
    }
}

void ordenamiento_ascendente(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_mayor_al_final(v, n);
        ordenamiento_ascendente(v, n - 1);
    }
}

void ordenamiento_descendente(TStringGrid* v, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_menor_al_final(v, n);
        ordenamiento_descendente(v, n - 1);
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

