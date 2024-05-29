//---------------------------------------------------------------------------

#pragma hdrstop

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "numero.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

// verificar primo
byte obtener_divisor(Cardinal n, Cardinal divisor)
{
    byte div;
    if (n <= 1) {
        div = 1;
    } else if (divisor == 1) {
        div = 1;
    } else if (n % divisor == 0) {
        div = divisor;
    } else {
        div = obtener_divisor(n, divisor - 1);
    }
    return div;
}

bool verificar_primo(Cardinal n)
{
    bool b;
    if (n <= 1) {
        b = false;
    } else {
        int divisor = obtener_divisor(n, n - 1);
        b = divisor == 1;
    }
    return b;
}

Cardinal factorial(Cardinal x)
{
    Cardinal f;
    if (x < 2) {
        f = 1;
    } else {
        f = x * factorial(x - 1);
    }
    return f;
}

Cardinal fibonacci(Cardinal x)
{
    Cardinal fibo;

    if (x == 1) {
        fibo = 0;
    } else if (x == 2) {
        fibo = 1;
    } else {
        fibo = fibonacci(x - 1) + fibonacci(x - 2);
    }
    return fibo;
}

byte sumar_digitos(Cardinal x)
{
    byte s;
    if (x < 10) {
        s = x;
    } else {
        s = sumar_digitos(x / 10) + x % 10;
    }
    return s;
}

byte sumar_digitos_impares(Cardinal x)
{
    byte s;
    if (x < 10) {
        if (x % 2 == 1)
            s = x;
        else
            s = 0;
    } else {
        s = sumar_digitos_impares(x / 10);
        if (x % 2 == 1)
            s = s + x % 10;
    }
    return s;
}

byte sumar_digitos_pares(Cardinal x)
{
    byte s;
    if (x < 10) {
        if (x % 2 == 0)
            s = x;
        else
            s = 0;
    } else {
        s = sumar_digitos_pares(x / 10);
        if (x % 2 == 0)
            s = s + x % 10;
    }
    return s;
}

int restar_digitos_par_impar(int x)
{
    int s;
    if (x < 10) {
        if (x % 2 == 0)
            s = x;
        else
            s = -x;
    } else {
        if (x % 2 == 0)
            s = x % 10;
        else
            s = -x % 10;
        s = restar_digitos_par_impar(x / 10) + s;
    }
    return s;
}

int restar_digitos_impar_par(int x)
{
    int s;
    if (x < 10) {
        if (x % 2 == 1)
            s = x;
        else
            s = -x;
    } else {
        if (x % 2 == 1)
            s = x % 10;
        else
            s = -x % 10;
        s = restar_digitos_impar_par(x / 10) + s;
    }
    return s;
}

int contar_digitos(Cardinal x)
{
    int c;
    if (x < 10) {
        c = 1;
    } else {
        c = contar_digitos(x / 10) + 1;
    }
    return c;
}

String agregar_coma_digitos(Cardinal x)
{
    String s;
    if (x < 10) {
        s = x;
    } else {
        s = agregar_coma_digitos(x / 10) + ',' + x % 10;
    }
    return s;
}

String agregar_coma_digitos_e_invertir(Cardinal x)
{
    String s;
    if (x < 10) {
        s = String(x);
    } else {
        s = String(x % 10) + ',' + agregar_coma_digitos_e_invertir(x / 10);
    }
    return s;
}

byte retornar_menor_digito(Cardinal x)
{
    byte m;
    if (x < 10) {
        m = x;
    } else {
        m = retornar_menor_digito(x / 10);
        if (x % 10 < m) {
            m = x % 10;
        }
    }
    return m;
}

byte retornar_mayor_digito(Cardinal x)
{
    byte m;
    if (x < 10) {
        m = x;
    } else {
        m = retornar_mayor_digito(x / 10);
        if (x % 10 > m) {
            m = x % 10;
        }
    }
    return m;
}

bool verificar_ordenado_ascendente(Cardinal x)
{
    bool b;
    if (x < 10) {
        b = true;
    } else {
        b = verificar_ordenado_ascendente(x / 10) && (x / 10 % 10 <= x % 10);
    }
    return b;
}

bool verificar_ordenado_descendente(Cardinal x)
{
    bool b;
    if (x < 10) {
        b = true;
    } else {
        b = verificar_ordenado_descendente(x / 10) && (x / 10 % 10 >= x % 10);
    }
    return b;
}

void mover_digito_mayor_al_final(Cardinal &x)
{
    if (x < 10) {
        // nada
    } else {
        byte d = x % 10;
        x = x / 10;
        mover_digito_mayor_al_final(x);
        if (x % 10 <= d) {
            x = x * 10 + d;
        } else {
            byte z = x % 10;
            x = x / 10;
            x = (x * 10 + d) * 10 + z;
        }
    }
}

void mover_digito_menor_al_final(Cardinal &x)
{
    if (x < 10) {
        // nada
    } else {
        byte d = x % 10;
        x = x / 10;
        mover_digito_menor_al_final(x);
        if (x % 10 >= d) {
            x = x * 10 + d;
        } else {
            byte z = x % 10;
            x = x / 10;
            x = (x * 10 + d) * 10 + z;
        }
    }
}

void ordenamiento_ascendente(Cardinal &x)
{
    if (x < 10) {
        // nada
    } else {
        mover_digito_mayor_al_final(x);
        int ultimoDigito = x % 10;
        x = x / 10;
        ordenamiento_ascendente(x);
        x = x * 10 + ultimoDigito;
    }
}

void ordenamiento_descendente(Cardinal &x)
{
    if (x < 10) {
        // nada
    } else {
        mover_digito_menor_al_final(x);
        int ultimoDigito = x % 10;
        x = x / 10;
        ordenamiento_descendente(x);
        x = x * 10 + ultimoDigito;
    }
}

void mover_digito_menor_al_principio(Cardinal &x)
{
    if (x < 10) {
        // nada
    } else {
        byte d = x % 10;
        x = x / 10;
        if (x % 10 > d) {
            byte aux = d;
            d = x % 10;
            x = (x / 10) * 10 + aux;
        }
        mover_digito_menor_al_principio(x);
        x = x * 10 + d;
    }
}

// selection sort
//void mover_digito_menor_al_principio(Cardinal &x)
//{
//    if (x < 10) {
//        // nada
//    } else {
//        byte d = x % 10;
//        x = x / 10;
//        mover_digito_menor_al_principio(x);
//        float exponente = floor(log10(Double(x)));
//        byte pd = x / pow(10, exponente);
//        if (d < pd) {
//            x = d * pow(10, exponente + 1) + x;
//        } else {
//            x = x * 10 + d;
//        }
//    }
//}

void eliminar_digitos_impares(Cardinal &x)
{
    if (x < 10) {
        if (x % 2 == 0) {
            // nada
        }
        if (x % 2 == 1) {
            x = 0;
        }
    } else {
        int ultimoDigito = x % 10;
        x = x / 10;
        eliminar_digitos_impares(x);
        if (ultimoDigito % 2 == 0) {
            x = x * 10 + ultimoDigito;
        }
        if (ultimoDigito % 2 == 1) {
            // nada
        }
    }
}

void eliminar_digitos_pares(Cardinal &x)
{
    if (x < 10) {
        if (x % 2 == 1) {
            // nada
        }
        if (x % 2 == 0) {
            x = 0;
        }
    } else {
        int ultimoDigito = x % 10;
        x = x / 10;
        eliminar_digitos_pares(x);
        if (ultimoDigito % 2 == 1) {
            x = x * 10 + ultimoDigito;
        }
        if (ultimoDigito % 2 == 0) {
            // nada
        }
    }
}

void encontrar_digito_mayor_y_menor(Cardinal x, byte &M, byte &m)
{
    if (x < 10) {
        M = x;
        m = x;
    } else {
        int ultimoDigito = x % 10;
        x = x / 10;
        encontrar_digito_mayor_y_menor(x, M, m);
        if (M < ultimoDigito) {
            M = ultimoDigito;
        }
        if (m > ultimoDigito) {
            m = ultimoDigito;
        }
    }
}

String repetir_numero(Cardinal numero, Cardinal veces)
{
    String cad;
    if (veces == 0)
        cad = "";
    else
        cad = repetir_numero(numero, veces - 1) + String(numero);
    return cad;
}

String repetir_digitos(Cardinal n)
{
    String cad;
    if (n < 10)
        cad = repetir_numero(n, n);
    else {
        byte dig = n % 10;
        n = n / 10;
        cad = repetir_digitos(n) + repetir_numero(dig, dig);
    }
    return cad;
}

// Contar_digitos_impares_antes_de_uno_par(3827435) => 2
byte contar_digitos_impares_antes_de_uno_par(Cardinal x)
{
    byte c;
    if (x < 10) {
        c = 0;
    } else {
        byte ultimoDigito = x % 10;
        byte penultimoDigito = x / 10 % 10;
        c = contar_digitos_impares_antes_de_uno_par(x / 10);
        if (penultimoDigito % 2 == 0 && ultimoDigito % 2 == 1) {
            c++;
        }
    }
    return c;
}

// Insertar digito por posicion
// x = 12345, digito = 9 , posicion = 5, -> x = 912345
void insertar_digito_por_posicion(Cardinal &x, byte digito, byte posicion)
{
    if (posicion == 0) {
        x = x * 10 + digito;
    } else {
        byte digit = x % 10;
        x = x / 10;
        insertar_digito_por_posicion(x, digito, posicion - 1);
        x = x * 10 + digit;
    }
}

// Insertar digito por posicion
// x = 12345, digito = 9 , posicion = 3, -> x = 19345
void remplazar_digito_por_posicion(Cardinal &x, byte digito, byte posicion)
{
    if (posicion == 0) {
        x = x / 10;
        x = x * 10 + digito;
    } else {
        byte digit = x % 10;
        x = x / 10;
        remplazar_digito_por_posicion(x, digito, posicion - 1);
        x = x * 10 + digit;
    }
}

