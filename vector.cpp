//---------------------------------------------------------------------------

#pragma hdrstop

#include <Vcl.Grids.hpp>
#include "vector.h"

// Cargar Random
void cargar(TStringGrid* v, byte n)
{
    if (n > 0) {
        cargar(v, n - 1);
        v->Cells[n - 1][0] = Random(20);
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

// no esta bien
void mover_mayor_al_final(TStringGrid* v, byte n)
{
    if (n > 1) {
        mover_menor_al_final(v, n - 1);
        if (v->Cells[n - 2][0] > v->Cells[n - 1][0]) {
            String temp = v->Cells[n - 2][0];
            v->Cells[n - 2][0] = v->Cells[n - 1][0];
            v->Cells[n - 1][0] = temp;
        }
    }
}

// no esta bien
void mover_menor_al_final(TStringGrid* v, byte n)
{
    if (n > 1) {
        mover_menor_al_final(v, n - 1);
        if (v->Cells[n - 2][0] < v->Cells[n - 1][0]) {
            String temp = v->Cells[n - 2][0];
            v->Cells[n - 2][0] = v->Cells[n - 1][0];
            v->Cells[n - 1][0] = temp;
        }
    }
}
//---------------------------------------------------------------------------
#pragma package(smart_init)

