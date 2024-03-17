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

bool verificar_vocal(wchar_t v)
{
    String vocales = "aeiouáéíóúäëïöüAEIOUÁÉÍÓÚÄËÏÖÜ";
    return vocales.Pos(v) > 0;
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

int contar_letras_ASCII(AnsiString x)
{
    int c;
    if (x == "") {
        c = 0;
    } else {
        char a = x[1];
        x.Delete(1, 1);
        c = contar_letras_ASCII(x);
        if (isalpha(a)) {
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

