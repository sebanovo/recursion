//---------------------------------------------------------------------------

#ifndef matrizH
#define matrizH

#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "cadena.h"

void cargar_random(TStringGrid* v, byte m, byte n);
void ordenar_filas_burbuja_ascedente(TStringGrid* v, byte m, byte n);
void cargar_triangular_inferior_izquierda(
    TStringGrid* v, byte m, byte n, byte &i);
//---------------------------------------------------------------------------
#endif

