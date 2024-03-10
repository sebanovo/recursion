//---------------------------------------------------------------------------

#pragma hdrstop

#include "cmath"
#include "functions_numbers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

byte factorial(Cardinal x) {
	byte f;
    if (x < 2) {
        f = 1;
    }
    else {
        f = x * factorial(x - 1);
    }
    return f;
}

byte sumar_digitos(Cardinal x) {
	byte s;
    if (x < 10) {
        s = x;
    }
    else {
        s = sumar_digitos(x / 10) + x % 10;
    }
    return s;
}

byte sumar_digitos_impares(Cardinal x) {
	byte s;
    if (x < 10) {
        if (x % 2 == 1)
            s = x;
        else
            s = 0;
    }
    else {
        s = sumar_digitos_impares(x / 10);
        if (x % 2 == 1)
            s = s + x % 10;
    }
    return s;
}

byte sumar_digitos_pares(Cardinal x) {
	byte s;
    if (x < 10) {
        if (x % 2 == 0)
            s = x;
        else
            s = 0;
    }
    else {
        s = sumar_digitos_pares(x / 10);
        if (x % 2 == 0)
            s = s + x % 10;
    }
	return s;
}

int restar_digitos_par_impar(int x) {
	int s;
	if (x < 10) {
		if (x % 2 == 0)
			s = x;
		else
			s = -x;
	}
	else {
        if (x % 2 == 0)
            s = x % 10;
        else
            s = -x % 10;
        s = restar_digitos_par_impar(x / 10) + s;
    }
    return s;
}


int restar_digitos_impar_par(int x) {
	int s;
	if (x < 10) {
        if (x % 2 == 1)
            s = x;
        else
            s = -x;
    }
    else {
        if (x % 2 == 1)
            s = x % 10;
        else
            s = -x % 10;
        s = restar_digitos_impar_par(x / 10) + s;
    }
    return s;
}

int contar_digitos(Cardinal x) {
    int c;
    if (x < 10) {
        c = 1;
    }
    else {
        c = contar_digitos(x / 10) + 1;
    }
    return c;
}

