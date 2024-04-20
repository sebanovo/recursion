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
#include "numero.h"

void cargar_random(TStringGrid* v, byte m, byte n);
void cargar_por_columnas(TStringGrid* v, byte m, byte n);
void cargar_por_filas(TStringGrid* v, byte m, byte n);
void cargar_L(TStringGrid* v, byte m);
void cargar_circular(TStringGrid* v, byte fa, byte fb);
void cargar_magico(TStringGrid* v, byte m, byte z, byte &f, byte &c);
void cargar_caracteres(TStringGrid* v, byte ca, byte cb, String &x);
void cargar_caracol(
    TStringGrid* v, byte fa, byte fb, byte ca, byte cb, Cardinal &r);
void cargar_diagonales(TStringGrid* v, byte fa, byte fb, Cardinal &r);

void ordenar_filas_burbuja_ascedente(TStringGrid* v, byte m, byte n);
void cargar_triangular_inferior_izquierda(
    TStringGrid* v, byte m, byte n, Cardinal &r);
void cargar_diagonales_triangular_inferior_izquierda(
    TStringGrid* v, byte fa, byte fb, Cardinal &r);
void cargar_diagonales_hard(TStringGrid* v, byte m, byte k, byte &f, byte &c);
void cargar_vibora_por_columnas(TStringGrid* v, byte ca, byte cb, Cardinal &r);

//---------------------------------------------------------------------------
#endif

