//---------------------------------------------------------------------------

#ifndef vectorH
#define vectorH

#include <Vcl.Grids.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "cadena.h"
#include "numero.h"

void cargar(TStringGrid* v, byte n);
void cargar_palabras(String x, TStringGrid* v, byte a, byte &n);
Cardinal sumar_todos_los_numeros(TStringGrid* v, byte a, byte b);
void invertir(TStringGrid* v, byte a, byte b);
void mover_numero_menor_al_final(TStringGrid* v, byte n);
void mover_numero_mayor_al_final(TStringGrid* v, byte n);

void ordenamiento_burbuja_ascendente(TStringGrid* v, byte n);
void ordenamiento_burbuja_descendente(TStringGrid* v, byte n);
bool busqueda_binaria(Cardinal x, TStringGrid* v, byte a, byte b);
bool busqueda_secuencial(Cardinal x, TStringGrid* v, byte a, byte b);
bool verificar_ordenado_ascendente(TStringGrid* v, byte a, byte n);
bool verificar_ordenado_descendente(TStringGrid* v, byte a, byte n);
byte contar_numeros_pares(TStringGrid* v, byte n);
byte contar_numeros_impares(TStringGrid* v, byte n);
void recorrer(TStringGrid* v, byte a, byte b);
void eliminar_elemento(String x, TStringGrid* v, byte a, byte b);
void factorial(TStringGrid* v, byte n);
bool verificar_palindromo(TStringGrid* v, byte a, byte b, byte n);

// ordenamientos
void quick_sort(TStringGrid* v, byte a, byte b);
void merge_sort(TStringGrid* v, byte a, byte b);
void selection_sort(TStringGrid* v, byte n);
void insertion_sort(TStringGrid* v, byte n);
void bubble_sort(TStringGrid* v, byte n);
void bogo_sort(TStringGrid* v, byte n);

void cargar_caracteres_orden_ascendente(TStringGrid* v, String x);
void cargar_caracteres_orden_descendente(TStringGrid* v, String x);
void cargar_cadena_2en2(TStringGrid* v, String x, byte a, byte b);
void cargar_digitos(TStringGrid* v, Cardinal x, byte n);

// series
void cargar_fibonacci(TStringGrid* v, byte n);
void serie1(TStringGrid* v, byte n);
void serie2(TStringGrid* v, byte n);
//---------------------------------------------------------------------------
#endif

