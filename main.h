//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
  __published: // IDE-managed Components
    TMainMenu* MainMenu1;
    TMenuItem* Number;
    TMenuItem* Factorial;
    TMenuItem* SumarDigitos;
    TEdit* Edit1;
    TEdit* Edit2;
    TMenuItem* SumarDigitosPares;
    TMenuItem* SumarDigitosImpares;
    TMenuItem* RestarDigitosParImpar;
    TMenuItem* RestarDigitosImparPar;
    TMenuItem* ContarDigitos;
    TMenuItem* RetornarMenorDigito1;
    TMenuItem* RetonarMayorDigito;
    TMenuItem* AgregarComaDigitos1;
    TMenuItem* VerificarOrdenado;
    TMenuItem* MoverDigitoMayorAlFinal1;
    TMenuItem* String;
    TMenuItem* ContarEspacios;
    TMenuItem* ContarVocales;
    TMenuItem* EliminarDigitosImpares;
    TMenuItem* EliminarDigitosPares;
    TMenuItem* EncontrarDigitosMayorYMenor;
    TMenuItem* AgregarComaDigitosEInvertir;
    void __fastcall SumarDigitosClick(TObject* Sender);
    void __fastcall SumarDigitosParesClick(TObject* Sender);
    void __fastcall SumarDigitosImparesClick(TObject* Sender);
    void __fastcall RestarDigitosParImparClick(TObject* Sender);
    void __fastcall RestarDigitosImparParClick(TObject* Sender);
    void __fastcall ContarDigitosClick(TObject* Sender);
    void __fastcall FactorialClick(TObject* Sender);
    void __fastcall RetornarMenorDigito1Click(TObject* Sender);
    void __fastcall RetonarMayorDigitoClick(TObject* Sender);
    void __fastcall AgregarComaDigitos1Click(TObject* Sender);
    void __fastcall VerificarOrdenadoClick(TObject* Sender);
    void __fastcall MoverDigitoMayorAlFinal1Click(TObject* Sender);
    void __fastcall ContarEspaciosClick(TObject* Sender);
    void __fastcall ContarVocalesClick(TObject* Sender);
    void __fastcall EliminarDigitosImparesClick(TObject* Sender);
    void __fastcall EliminarDigitosParesClick(TObject* Sender);
    void __fastcall EncontrarDigitosMayorYMenorClick(TObject* Sender);
    void __fastcall AgregarComaDigitosEInvertirClick(TObject* Sender);
  private: // User declarations
  public: // User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1* Form1;
//---------------------------------------------------------------------------
#endif

