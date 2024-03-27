//---------------------------------------------------------------------------

#ifndef vectorH
#define vectorH

#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

// Clase 5 - Programacion 2
// ------------------------
// Cargar Randomicamente
void cargar(TStringGrid* v, byte n);
Cardinal sumar_todos_los_elementos(TStringGrid* v, byte a, byte b);
void invertir_vector(TStringGrid* v, byte a, byte n);
void mover_menor_al_final(TStringGrid* v, byte n);
void mover_mayor_al_final(TStringGrid* v, byte n);
//---------------------------------------------------------------------------
#endif

