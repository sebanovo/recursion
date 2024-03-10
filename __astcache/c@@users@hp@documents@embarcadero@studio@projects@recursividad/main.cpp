//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "functions_numbers.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FactorialClick(TObject *Sender)
{
   Cardinal number = StrToInt(Edit1->Text);
	Edit2 -> Text = IntToStr(factorial(number));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SumarDigitosClick(TObject *Sender)
{
	Cardinal number = StrToInt(Edit1->Text);
   Edit2 -> Text = IntToStr(sumar_digitos(number));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarDigitosParesClick(TObject *Sender)
{
	 Cardinal number = StrToInt(Edit1->Text);
	 Edit2 -> Text = IntToStr(sumar_digitos_pares(number));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarDigitosImparesClick(TObject *Sender)
{
Cardinal number = StrToInt(Edit1->Text);
	 Edit2 -> Text = IntToStr(sumar_digitos_impares(number));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RestarDigitosParImparClick(TObject *Sender)
{
	 Cardinal number = StrToInt(Edit1->Text);
	 Edit2 -> Text = IntToStr(restar_digitos_par_impar(number));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RestarDigitosImparParClick(TObject *Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
	 Edit2 -> Text = IntToStr(restar_digitos_impar_par(number));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarDigitosClick(TObject *Sender)
{
	  Cardinal number = StrToInt(Edit1->Text);
	 Edit2 -> Text = IntToStr(contar_digitos(number));
}
//---------------------------------------------------------------------------

