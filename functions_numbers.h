//---------------------------------------------------------------------------

#ifndef functions_numbersH
#define functions_numbersH

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
bool verificar_ordenado(Cardinal x);
void mover_digito_mayor_al_final(Cardinal &x);
void eliminar_digitos_impares(Cardinal &x);
void eliminar_digitos_pares(Cardinal &x);
void encontrar_digito_mayor_y_menor(Cardinal x, byte &M, byte &m);

//---------------------------------------------------------------------------
#endif

