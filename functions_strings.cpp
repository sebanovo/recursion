//---------------------------------------------------------------------------

#pragma hdrstop

#include "functions_strings.h"
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

