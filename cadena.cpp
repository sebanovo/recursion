//---------------------------------------------------------------------------

#pragma hdrstop

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include "cadena.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

// Unicode -> wchar_t - String
// ASCII -> char - AnsiString

bool verificar_vocal(wchar_t v)
{
    String vocales = "aeiouáéíóúäëïöüAEIOUÁÉÍÓÚÄËÏÖÜ";
    return vocales.Pos(v) > 0;
}

bool verificar_letra(wchar_t l)
{
    String letras =
        "qwertyuiopasdfghjklñzxcvbnmQWERTYUIOPASDFGHJKLÑZXCVBNMáéíóúÁÉÍÓÚäëïöüÄËÏÖÜ";
    return letras.Pos(l) > 0;
}

byte contar_espacios(String x)
{
    byte c;
    if (x == "") {
        c = 0;
    } else {
        wchar_t a = x[x.Length()];
        x.Delete(x.Length(), 1);
        c = contar_espacios(x);
        if (a == ' ') {
            c++;
        }
    }
    return c;
}

byte contar_vocales_v1(String x)
{
    byte c;
    if (x == "") {
        c = 0;
    } else {
        wchar_t a = x[x.Length()];
        x.Delete(x.Length(), 1);
        c = contar_vocales_v1(x);
        if (verificar_vocal(a)) {
            c++;
        }
    }
    return c;
}
byte contar_vocales_v2(String x)
{
    byte c;
    if (x == "") {
        c = 0;
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        c = contar_vocales_v2(x);
        if (verificar_vocal(a)) {
            c++;
        }
    }
    return c;
}

byte contar_vocales_v3(String x)
{
    byte c;
    if (x == "") {
        c = 0;
    } else if (x.Length() == 1) {
        if (verificar_vocal(x[1])) {
            c = 1;
        } else {
            c = 0;
        }
    } else {
        wchar_t a = x[1];
        wchar_t b = x[2];
        x.Delete(1, 2);
        c = contar_vocales_v3(x);
        if (verificar_vocal(a)) {
            c++;
        }
        if (verificar_vocal(b)) {
            c++;
        }
    }
    return c;
}

int contar_letras(String x)
{
    int c;
    if (x == "") {
        c = 0;
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        c = contar_letras(x);
        if (verificar_letra(a)) {
            c++;
        }
    }
    return c;
}

void invertir_cadena(String &x)
{
    if (x == "") {
        // nada
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        invertir_cadena(x);
        x = x + a;
    }
}

String filtrar_digitos(String x)
{
    String s;
    if (x == "") {
        s = "";
    } else {
        wchar_t a = x[x.Length()];
        x.Delete(x.Length(), 1);
        s = filtrar_digitos(x);
        if (isdigit(a)) {
            s = s + a;
        }
    }
    return s;
}

String filtrar_primer_numero(String x)
{
    String s;
    if (x == "") {
        s = "";
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        if (!isdigit(a) && s == "") {
            s = filtrar_primer_numero(x);
        } else {
            if (x != "" && isdigit(x[1])) {
                s = String(a) + filtrar_primer_numero(x);
            } else {
                s = String(a);
            }
        }
    }

    return s;
}

bool verificar_solo_espacios(String x)
{
    bool b;
    if (x == " ") {
        b = true;
    } else {
        wchar_t a = x[x.Length()];
        x.Delete(x.Length(), 1);
        if (a != ' ') {
            b = false;
        } else {
            b = verificar_solo_espacios(x);
        }
    }
    return b;
}

void eliminar_vocales(String &x)
{
    if (x == "") {
        // nada
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        eliminar_vocales(x);
        if (!verificar_vocal(a)) {
            x = String(a) + x;
        }
    }
}

String palabra_mas_larga(String x)
{
    String mas, p;
    x = x.Trim();
    byte c = x.Length();

    if (c == 0) {
        p = "";
    } else {
        int d = x.LastDelimiter(' ');
        mas = x.SubString(d + 1, c - d);
        x.Delete(d + 1, c - d);
        p = palabra_mas_larga(x);
        if (mas.Length() > p.Length()) {
            p = mas;
        }
    }
    return p;
}

void eliminar_primera_letra_de_cada_palabra(String &x)
{
    x = x.Trim();
    byte c = x.Length();
    if (c == 0) {
        x = "";
    } else {
        int d = x.LastDelimiter(' ');
        String mas = x.SubString(d + 1, c - d);
        x.Delete(d + 1, c - d);
        eliminar_primera_letra_de_cada_palabra(x);
        mas.Delete(1, 1);
        x = x + mas + " ";
    }
}

void eliminar_primera_y_ultima_letra_de_cada_palabra(String &x)
{
    x = x.Trim();
    byte c = x.Length();
    if (c == 0) {
        x = "";
    } else {
        int d = x.LastDelimiter(' ');
        String ultimaPalabra = x.SubString(d + 1, c - d);
        x.Delete(d + 1, c - d);
        eliminar_primera_y_ultima_letra_de_cada_palabra(x);
        ultimaPalabra.Delete(1, 1);
        ultimaPalabra.Delete(ultimaPalabra.Length(), 1);
        x = x + ultimaPalabra + " ";
    }
}

void invertir_cada_palabra(String &x)
{
    x = x.Trim();
    byte c = x.Length();
    if (c == 0) {
        x = "";
    } else {
        int d = x.LastDelimiter(' ');
        String mas = x.SubString(d + 1, c - d);
        x.Delete(d + 1, c - d);
        invertir_cada_palabra(x);
        invertir_cadena(mas);
        x = x + mas + " ";
    }
}

//double convertir_base_binario_a_decimal(int nro, int base)
//{
//    int bin;
//    if (nro < base) {
//        bin = nro;
//    } else {
//        bin = convertir_base_binario_a_decimal(nro / base, base);
//        bin = bin * 10 + (nro % base);
//    }
//    return bin;
//}

bool verificar_palindromo(String x)
{
    bool b;
    Cardinal length = x.Length();
    if (length <= 1) {
        b = true;
    } else {
        wchar_t primero = x[1];
        wchar_t ultimo = x[length];

        x.Delete(length, 1);
        x.Delete(1, 1);
        b = verificar_palindromo(x);
        if (primero != ultimo) {
            b = false;
        }
    }
    return b;
}

String primer_palabra(String x)
{
    String p;
    byte c = x.Length();
    if (c == 0) {
        p = "";
    } else if (c == 1) {
        if (verificar_letra(x[1])) {
            p = x;
        } else {
            p = "";
        }
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        p = primer_palabra(x);
        if (verificar_letra(a) && verificar_letra(x[1])) {
            p = String(a) + p;
        } else if (verificar_letra(a) && !verificar_letra(x[1])) {
            p = a;
        } else if (!verificar_letra(a) && verificar_letra(x[1])) {
            // nada
        } else if (!verificar_letra(a) && !verificar_letra(x[1])) {
            // nada
        }
    }
    return p;
}

void eliminar_primer_palabra(String &x)
{
    byte c = x.Length();
    if (c == 0) {
        // nada
    } else if (c == 1) {
        if (verificar_letra(x[1])) {
            x = "";
        } else {
            // nada
        }
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        if (verificar_letra(a) && verificar_letra(x[1])) {
            eliminar_primer_palabra(x);
        } else if (verificar_letra(a) && !verificar_letra(x[1])) {
            // nada
        } else if (!verificar_letra(a) && verificar_letra(x[1])) {
            eliminar_primer_palabra(x);
            x = String(a) + x;
        } else if (!verificar_letra(a) && !verificar_letra(x[1])) {
            eliminar_primer_palabra(x);
            x = String(a) + x;
        }
    }
}

// Ej1 x = "hola a todos" => " a todos"
// Ej2 x = "123hola a todos" => " a todos"
void eliminar_hasta_primer_palabra(String &x)
{
    if (x == "") {
        // nada
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        if (!verificar_letra(a)) {
            eliminar_hasta_primer_palabra(x);
        } else {
            if (x != "" && verificar_letra(x[1])) {
                eliminar_hasta_primer_palabra(x);
            }
        }
    }
}

// Ej x = "hola a todos *123" => "hola a "
void eliminar_desde_primer_palabra(String &x)
{
    if (x == "") {
        // nada
    } else {
        wchar_t a = x[x.Length()];
        x.Delete(x.Length(), 1);
        if (!verificar_letra(a)) {
            eliminar_desde_primer_palabra(x);
        } else {
            if (x != "" && verificar_letra(x[x.Length()])) {
                eliminar_desde_primer_palabra(x);
            }
        }
    }
}

byte contar_palabras(String x)
{
    byte c;
    Cardinal length = x.Length();
    if (length == 0) {
        c = 0;
    } else if (length == 1) {
        if (verificar_letra(x[1])) {
            c = 1;
        } else {
            c = 0;
        }
    } else {
        wchar_t a = x[1];
        x.Delete(1, 1);
        c = contar_palabras(x);
        if (verificar_letra(a) && !verificar_letra(x[1])) {
            c++;
        }
    }

    return c;
}

// EJERCICIO MÁS DIFICIL
// -------------------------------------------------------------
// Escribir una función que devuelva el númeo mayor contenido en una cadena.
// Si la cadena no tiene números debe devolver 0
// Ej1: x = "hola104 mundo54 como1 estan" => 104
// Ej2: x = "Hola mundo" => 0
Cardinal posNum(String cad, bool num)
{
    Cardinal pos;
    if (cad.Length() == 0)
        pos = 0;
    else {
        wchar_t c = cad[cad.Length()];
        cad.Delete(cad.Length(), 1);
        pos = posNum(cad, num);
        if (pos == 0) {
            if (num) {
                if (isdigit(c))
                    pos = cad.Length() + 1;
            } else {
                if (!isdigit(c))
                    pos = cad.Length() + 1;
            }
        }
    }
    return pos;
}

Cardinal mayor(String cad)
{
    Cardinal may;
    if (cad.Length() == 0)
        may = 0;
    else {
        Cardinal posA = posNum(cad, true);
        Cardinal num;
        if (posA > 0) {
            cad.Delete(1, posA - 1);
            Cardinal posB = posNum(cad, false);
            if (posB == 0)
                posB = cad.Length() + 1;
            num = StrToInt(cad.SubString(1, posB - 1));
            cad.Delete(1, posB - 1);
        } else {
            num = 0;
            cad = "";
        }
        may = mayor(cad);
        if (num > may)
            may = num;
    }
    return may;
}

Cardinal numero_mayor(String x)
{
    Cardinal may;
    if (x.Length() == 0)
        may = 0;
    else {
        Cardinal pos = x.Pos(" ");
        if (pos == 0)
            pos = x.Length() + 1;
        String pal = x.SubString(1, pos - 1);
        x.Delete(1, pos);
        may = numero_mayor(x);
        Cardinal num = mayor(pal);
        if (num > may)
            may = num;
    }
    return may;
}
// -------------------------------------------------------------

void invertir_frase(String &x)
{
    invertir_cadena(x);
    invertir_cada_palabra(x);
}

// posicion del caracter de mayor ASCII
Cardinal posicion_del_caracter_mayor(String x)
{
    Cardinal p;
    Word n = x.Length();
    if (n == 1) {
        p = 1;
    } else {
        char c = x[n];
        x.Delete(n, 1);
        p = posicion_del_caracter_mayor(x);
        if (c > x[p]) {
            p = n;
        }
    }
    return p;
}

// posicion del caracter de mayor ASCII
Cardinal posicion_del_caracter_menor(String x)
{
    Cardinal p;
    Word n = x.Length();
    if (n == 1) {
        p = 1;
    } else {
        char c = x[n];
        x.Delete(n, 1);
        p = posicion_del_caracter_mayor(x);
        if (c < x[p]) {
            p = n;
        }
    }
    return p;
}

// x = "hola como están" => 3
byte contar_palabras_2en2(String x)
{
    byte c;
    if (x == "") {
        c = 0;
    } else if (x.Length() == 1) {
        c = 1;
    } else {
        x.Delete(1, 2);
        c = contar_palabras_2en2(x) + 1;
    }
    return c;
}

