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
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Menu1;
	TMenuItem *Factorial;
	TMenuItem *SumarDigitos;
	TEdit *Edit1;
	TEdit *Edit2;
	TMenuItem *SumarDigitosPares;
	TMenuItem *SumarDigitosImpares;
	TMenuItem *RestarDigitosParImpar;
	TMenuItem *RestarDigitosImparPar;
	TMenuItem *ContarDigitos;
	void __fastcall SumarDigitosClick(TObject *Sender);
	void __fastcall FactorialClick(TObject *Sender);
	void __fastcall SumarDigitosParesClick(TObject *Sender);
	void __fastcall SumarDigitosImparesClick(TObject *Sender);
	void __fastcall RestarDigitosParImparClick(TObject *Sender);
	void __fastcall RestarDigitosImparParClick(TObject *Sender);
	void __fastcall ContarDigitosClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
