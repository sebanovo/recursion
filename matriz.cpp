//---------------------------------------------------------------------------

#pragma hdrstop

#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "matriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

/*
1) Cargar matriz (m x n)
	9 6 3
	8 5 2
	7 4 1
*/
void cargar_columna(TStringGrid* v, byte c, byte n)
{
    if (n == 0) {
        // nada
    } else {
        cargar_columna(v, c, n - 1);
        v->Cells[c][n - 1] = Random(10) + 1;
    }
}

void cargar_random(TStringGrid* v, byte m, byte n)
{
    if (n == 0) {
        // nada
    } else {
        cargar_columna(v, n - 1, m);
        cargar_random(v, m, n - 1);
    }
}

/*
2) Ordenar Las Filas Ascendentemente
	5 2 1 5 6 2       1 2 2 5 5 6
	9 2 2 1 4 9  ==>  1 2 2 4 9 9
	1 3 8 2 6 9  ==>  1 2 3 6 8 9
	2 8 9 8 1 7       1 2 7 8 8 9
*/
void mover_el_numero_mayor_al_final_de_la_columna(
    TStringGrid* v, byte m, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_el_numero_mayor_al_final_de_la_columna(v, m, n - 1);
        if (StrToInt(v->Cells[n - 2][m]) > StrToInt(v->Cells[n - 1][m])) {
            String temp = v->Cells[n - 2][m];
            v->Cells[n - 2][m] = v->Cells[n - 1][m];
            v->Cells[n - 1][m] = temp;
        }
    }
}

void ordenar_fila_burbuja_ascedente(TStringGrid* v, byte m, byte n)
{
    if (n == 0) {
        // nada
    } else if (n == 1) {
        // nada
    } else {
        mover_el_numero_mayor_al_final_de_la_columna(v, m, n);
        ordenar_fila_burbuja_ascedente(v, m, n - 1);
    }
}

void ordenar_filas_burbuja_ascedente(TStringGrid* v, byte m, byte n)
{
    if (n == 0) {
        // nada
    } else {
        ordenar_filas_burbuja_ascedente(v, m, n - 1);
        ordenar_fila_burbuja_ascedente(v, n - 1, m);
    }
}
/*
3) Cargar matriz triangular inferior izquierda (m x m)
	15
	13  14
	10  11  12
	6   7   8   9
	1   2   3   4  5
*/

void cargar_columna_2(TStringGrid* v, byte c, byte n, byte &i)
{
    if (n == 0) {
        // nada
    } else {
        cargar_columna_2(v, c, n - 1, i);
        v->Cells[n - 1][c] = i;
        i++;
    }
}
void cargar_triangular_inferior_izquierda(
    TStringGrid* v, byte m, byte n, byte &i)
{
    if (n == 0) {
        // nada
    } else {
        cargar_columna_2(v, n - 1, m, i);
        cargar_triangular_inferior_izquierda(v, m - 1, n - 1, i);
    }
}

