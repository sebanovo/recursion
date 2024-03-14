//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "functions_numbers.h"
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

