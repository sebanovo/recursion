//---------------------------------------------------------------------------

#ifndef numeroH
#define numeroH

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>

byte obtener_divisor(Cardinal n, Cardinal divisor);
bool verificar_primo(Cardinal n);

Cardinal factorial(Cardinal x);
byte sumar_digitos(Cardinal x);
byte sumar_digitos_pares(Cardinal x);
byte sumar_digitos_impares(Cardinal x);
int restar_digitos_par_impar(int x);
int restar_digitos_impar_par(int x);
int contar_digitos(Cardinal x);

// Clase 1 - Programacion 2
// -----------------------
// sumar digitos
// agregar coma digitos
// encontrar el menor
// verificar ordenado
// mandar el mayor al final

String agregar_coma_digitos(Cardinal x);
String agregar_coma_digitos_e_invertir(Cardinal x);
byte retornar_menor_digito(Cardinal x);
byte retornar_mayor_digito(Cardinal x);
bool verificar_ordenado_ascendente(Cardinal x);
bool verificar_ordenado_descendente(Cardinal x);
void mover_digito_mayor_al_final(Cardinal &x);
void mover_digito_menor_al_final(Cardinal &x);
void ordenamiento_ascendente(Cardinal &x);
void ordenamiento_descendente(Cardinal &x);
void eliminar_digitos_impares(Cardinal &x);
void eliminar_digitos_pares(Cardinal &x);
void encontrar_digito_mayor_y_menor(Cardinal x, byte &M, byte &m);

// ejercicios de practicos:
byte contar_digitos_impares_antes_de_uno_par(Cardinal x);
// double convertir_base_binario_a_decimal(int nro, int base);

// ejercicios de examen:
String repetir_numero(Cardinal numero, Cardinal veces);
String repetir_digitos(Cardinal n);

void insertar_digito_por_posicion(Cardinal &x, byte digito, byte posicion);
void remplazar_digito_por_posicion(Cardinal &x, byte digito, byte posicion);

//---------------------------------------------------------------------------
#endif

