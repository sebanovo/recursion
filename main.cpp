//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "numero.h"
#include "cadena.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1* Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {}
//---------------------------------------------------------------------------

void __fastcall TForm1::FactorialClick(TObject* Sender)
{
    Edit2->Text = factorial(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarDigitosClick(TObject* Sender)
{
    Edit2->Text = sumar_digitos(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarDigitosParesClick(TObject* Sender)
{
    Edit2->Text = sumar_digitos_pares(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarDigitosImparesClick(TObject* Sender)
{
    Edit2->Text = sumar_digitos_impares(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RestarDigitosParImparClick(TObject* Sender)
{
    Edit2->Text = restar_digitos_par_impar(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RestarDigitosImparParClick(TObject* Sender)
{
    Edit2->Text = restar_digitos_impar_par(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarDigitosClick(TObject* Sender)
{
    Edit2->Text = contar_digitos(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RetornarMenorDigito1Click(TObject* Sender)
{
    Edit2->Text = retornar_menor_digito(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RetonarMayorDigitoClick(TObject* Sender)
{
    Edit2->Text = retornar_mayor_digito(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AgregarComaDigitos1Click(TObject* Sender)
{
    Edit2->Text = agregar_coma_digitos(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VerificarOrdenadoClick(TObject* Sender)
{
    Edit2->Text = verificar_ordenado(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoverDigitoMayorAlFinal1Click(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    mover_digito_mayor_al_final(number);
    Edit2->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarEspaciosClick(TObject* Sender)
{
    Edit2->Text = contar_espacios(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarVocalesClick(TObject* Sender)
{
    Edit2->Text = contar_vocales_v1(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDigitosImparesClick(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    eliminar_digitos_impares(number);
    Edit2->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDigitosParesClick(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    eliminar_digitos_pares(number);
    Edit2->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EncontrarDigitosMayorYMenorClick(TObject* Sender)
{
    byte M, m;
    encontrar_digito_mayor_y_menor(StrToInt(Edit1->Text), M, m);
    Edit2->Text = "Mayor: " + IntToStr(M) + " Menor: " + IntToStr(m);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AgregarComaDigitosEInvertirClick(TObject* Sender)
{
    Edit2->Text = agregar_coma_digitos_e_invertir(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InvertirCadenaClick(TObject* Sender)
{
    String cadena = Edit1->Text;
    invertir_cadena(cadena);
    Edit2->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FiltrarDigitosClick(TObject* Sender)
{
    Edit2->Text = filtrar_digitos(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FiltrarPrimerNumeroClick(TObject* Sender)
{
    Edit2->Text = filtrar_primer_numero(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RepetirDigitosClick(TObject* Sender)
{
    Edit2->Text = repetir_digitos(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarVocalesClick(TObject* Sender)
{
    String cadena = Edit1->Text;
    eliminar_vocales(cadena);
    Edit2->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarDigitosImparesAntesDeUnoParClick(TObject* Sender)
{
    Edit2->Text =
        contar_digitos_impares_antes_de_uno_par(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenarClick(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    ordenar(number);
    Edit2->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PalabraMsLargaClick(TObject* Sender)
{
    Edit2->Text = palabra_mas_larga(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarPrimerLetraDeCadaPalabraClick(TObject* Sender)
{
    String cadena = Edit1->Text;
    eliminar_primera_letra_de_cada_palabra(cadena);
    Edit2->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InvertirCadaPalabraClick(TObject* Sender)
{
    //    String cadena = Edit1->Text;
    //    invertir_cada_palabra(cadena);
    //    Edit2->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarCaracteresASCIIClick(TObject* Sender)
{
    AnsiString cadena = Edit1->Text;
    Edit2->Text = contar_letras_ASCII(cadena);
}
//---------------------------------------------------------------------------

