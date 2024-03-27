//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
  __published: // IDE-managed Components
    TMainMenu* MainMenu1;
    TMenuItem* Numero;
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
    TMenuItem* Cadena;
    TMenuItem* ContarEspacios;
    TMenuItem* ContarVocales;
    TMenuItem* EliminarDigitosImpares;
    TMenuItem* EliminarDigitosPares;
    TMenuItem* EncontrarDigitosMayorYMenor;
    TMenuItem* AgregarComaDigitosEInvertir;
    TMenuItem* InvertirCadena;
    TMenuItem* FiltrarDigitos;
    TMenuItem* FiltrarPrimerNumero;
    TMenuItem* RepetirDigitos;
    TMenuItem* EliminarVocales;
    TMenuItem* ContarDigitosImparesAntesDeUnoPar;
    TMenuItem* OrdenamientoAscendente;
    TMenuItem* PalabraMsLarga;
    TMenuItem* EliminarPrimerLetraDeCadaPalabra;
    TMenuItem* InvertirCadaPalabra;
    TMenuItem* ContarLetras;
    TMenuItem* PrimerPalabra;
    TMenuItem* EliminarPrimerPalabra;
    TMenuItem* EliminarHastaPrimerPalabra;
    TMenuItem* EliminarDesdePrimerPalabra;
    TMenuItem* MoverDigitoMenorAlFinal;
    TMenuItem* OrdenamientoDescendente;
    TMenuItem* ContarPalabras;
    TMenuItem* EliminarPrimerYUltimaLetraDeCadaPalabra;
    TMenuItem* NmeroMayor;
    TMenuItem* InvertirFrase;
    TPageControl* PageControl1;
    TTabSheet* TabSheet1;
    TTabSheet* TabSheet2;
    TTabSheet* TabSheet3;
    TTabSheet* TabSheet4;
    TEdit* Edit3;
    TEdit* Edit4;
    TStringGrid* StringGrid1;
    TEdit* EditDimensionar;
    TButton* DimensionarVector;
    TMenuItem* Vector;
    TButton* CargarVector;
    TEdit* EditCargarVector;
    TEdit* Output;
    TMenuItem* InvertirVector;
    TMenuItem* MoverElementoMenorAlFinal;
    TMenuItem* MoverElementoMayorAlFinal1;
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
    void __fastcall InvertirCadenaClick(TObject* Sender);
    void __fastcall FiltrarDigitosClick(TObject* Sender);
    void __fastcall FiltrarPrimerNumeroClick(TObject* Sender);
    void __fastcall RepetirDigitosClick(TObject* Sender);
    void __fastcall EliminarVocalesClick(TObject* Sender);
    void __fastcall ContarDigitosImparesAntesDeUnoParClick(TObject* Sender);
    void __fastcall OrdenamientoAscendenteClick(TObject* Sender);
    void __fastcall PalabraMsLargaClick(TObject* Sender);
    void __fastcall EliminarPrimerLetraDeCadaPalabraClick(TObject* Sender);
    void __fastcall InvertirCadaPalabraClick(TObject* Sender);
    void __fastcall ContarLetrasClick(TObject* Sender);
    void __fastcall PrimerPalabraClick(TObject* Sender);
    void __fastcall EliminarPrimerPalabraClick(TObject* Sender);
    void __fastcall EliminarHastaPrimerPalabraClick(TObject* Sender);
    void __fastcall EliminarDesdePrimerPalabraClick(TObject* Sender);
    void __fastcall MoverDigitoMenorAlFinalClick(TObject* Sender);
    void __fastcall OrdenamientoDescendenteClick(TObject* Sender);
    void __fastcall ContarPalabrasClick(TObject* Sender);
    void __fastcall EliminarPrimerYUltimaLetraDeCadaPalabraClick(
        TObject* Sender);
    void __fastcall NmeroMayorClick(TObject* Sender);
    void __fastcall InvertirFraseClick(TObject* Sender);
    void __fastcall DimensionarVectorClick(TObject* Sender);
    void __fastcall CargarVectorClick(TObject* Sender);
    void __fastcall SumarTodosLosElementosClick(TObject* Sender);
    void __fastcall InvertirVectorClick(TObject* Sender);
    void __fastcall MoverElementoMenorAlFinalClick(TObject* Sender);
    void __fastcall MoverElementoMayorAlFinal1Click(TObject* Sender);
  private: // User declarations
  public: // User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1* Form1;
//---------------------------------------------------------------------------
#endif

