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
    TMenuItem* VerificarOrdenadoAscendente;
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
    TEdit* EditInput;
    TEdit* EditOutput;
    TMenuItem* InvertirV;
    TMenuItem* MoverNumeroMenorAlFinalV;
    TMenuItem* MoverNumeroMayorAlFinalV;
    TMenuItem* CargarRandomV;
    TMenuItem* CargarPalabrasV;
    TLabel* Label1;
    TLabel* Label2;
    TMenuItem* OrdenamientoAscendenteV;
    TMenuItem* OrdenamientoDescendenteV;
    TMenuItem* VerificarOrdenadoDescendente;
    TMenuItem* BusquedaBinariaV;
    TMenuItem* VerificarOrdenadoAscendenteV;
    TMenuItem* VerificarOrdenadoDescendenteV;
    TMenuItem* ContarNumerosParesV;
    TMenuItem* EliminarElementoV;
    TMenuItem* factorialV;
    TMenuItem* ContarNumerosImparesV;
    TMenuItem* VerificarPrimo;
    TMenuItem* VerificarPalindromoV;
    TMenuItem* CargarCaracteresOrdenAscendenteASCIIV;
    TMenuItem* CargarCaracteresOrdenDescendenteASCIIV;
    TStringGrid* StringGrid2;
    TEdit* EditRows;
    TEdit* EditCols;
    TMenuItem* Matriz1;
    TMenuItem* CargarRandomM;
    TMenuItem* OrdenarFilasAscendentementeM;
    TMenuItem* CargarTriangularInferiorIzquierdaM;
    TMenuItem* CargarPorFilasM;
    TMenuItem* CargarPorColumnasM;
    TMenuItem* BusquedaSecuencial;
    TMenuItem* CargarLM;
    TMenuItem* CargarCircularM;
    TMenuItem* CargarMagicoM;
    TMenuItem* CargarCaracteresM;
    TMenuItem* CargarCaracolM;
    TMenuItem* CargarDiagonalesSecundariasM;
    TMenuItem* InsertarDigitoPorPosicin1;
    TMenuItem* RemplazarDigitoPorPosicin1;
    TMenuItem* CargarDiagonalesPrincipalesTriangularInferiorIzquierdaM;
    TMenuItem* CargarDiagonalesHard1;
    TMenuItem* CargarViboraM;
    TMenuItem* V1_21_321_4321_54321;
    TMenuItem* CargarFibonacciV;
    TMenuItem* TerminoFibonacci1;
    TMenuItem* V1_2_3_6_7;
    TMenuItem* MoverDigitoMenorAlPrincipio1;
    TMenuItem* CargarCadena2en2InvV;
    TMenuItem* CargarDigitosV;
    TMenuItem* MergeSortV;
    TMenuItem* SelectionSortV;
    TMenuItem* BubbleSortV;
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
    void __fastcall VerificarOrdenadoAscendenteClick(TObject* Sender);
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
    void __fastcall SumarTodosLosNúmerosVClick(TObject* Sender);
    void __fastcall InvertirVClick(TObject* Sender);
    void __fastcall MoverNumeroMenorAlFinalVClick(TObject* Sender);
    void __fastcall MoverNumeroMayorAlFinalVClick(TObject* Sender);
    void __fastcall CargarRandomVClick(TObject* Sender);
    void __fastcall CargarPalabrasVClick(TObject* Sender);
    void __fastcall OrdenamientoAscendenteVClick(TObject* Sender);
    void __fastcall OrdenamientoDescendenteVClick(TObject* Sender);
    void __fastcall VerificarOrdenadoDescendenteClick(TObject* Sender);
    void __fastcall BusquedaBinariaVClick(TObject* Sender);
    void __fastcall VerificarOrdenadoAscendenteVClick(TObject* Sender);
    void __fastcall VerificarOrdenadoDescendenteVClick(TObject* Sender);
    void __fastcall ContarNumerosParesVClick(TObject* Sender);
    void __fastcall EliminarElementoVClick(TObject* Sender);
    void __fastcall factorialVClick(TObject* Sender);
    void __fastcall ContarNumerosImparesVClick(TObject* Sender);
    void __fastcall VerificarPrimoClick(TObject* Sender);
    void __fastcall VerificarPalindromoVClick(TObject* Sender);
    void __fastcall CargarCaracteresOrdenAscendenteASCIIVClick(TObject* Sender);
    void __fastcall CargarCaracteresOrdenDescendenteASCIIVClick(
        TObject* Sender);
    void __fastcall CargarRandomMClick(TObject* Sender);
    void __fastcall OrdenarFilasAscendentementeMClick(TObject* Sender);
    void __fastcall CargarTriangularInferiorIzquierdaMClick(TObject* Sender);
    void __fastcall CargarPorFilasMClick(TObject* Sender);
    void __fastcall CargarPorColumnasMClick(TObject* Sender);
    void __fastcall BusquedaSecuencialClick(TObject* Sender);
    void __fastcall CargarLMClick(TObject* Sender);
    void __fastcall CargarCircularMClick(TObject* Sender);
    void __fastcall CargarMagicoMClick(TObject* Sender);
    void __fastcall CargarCaracteresMClick(TObject* Sender);
    void __fastcall CargarCaracolMClick(TObject* Sender);
    void __fastcall CargarDiagonalesSecundariasMClick(TObject* Sender);
    void __fastcall InsertarDigitoPorPosicin1Click(TObject* Sender);
    void __fastcall RemplazarDigitoPorPosicin1Click(TObject* Sender);
    void __fastcall CargarDiagonalesPrincipalesTriangularInferiorIzquierdaMClick(
        TObject* Sender);
    void __fastcall CargarDiagonalesHard1Click(TObject* Sender);
    void __fastcall CargarViboraMClick(TObject* Sender);
    void __fastcall V1_21_321_4321_54321Click(TObject* Sender);
    void __fastcall CargarFibonacciVClick(TObject* Sender);
    void __fastcall TerminoFibonacci1Click(TObject* Sender);
    void __fastcall V1_2_3_6_7Click(TObject* Sender);
    void __fastcall MoverDigitoMenorAlPrincipio1Click(TObject* Sender);
    void __fastcall CargarCadena2en2InvVClick(TObject* Sender);
    void __fastcall CargarDigitosVClick(TObject* Sender);
    void __fastcall MergeSortVClick(TObject* Sender);
    void __fastcall SelectionSortVClick(TObject* Sender);
    void __fastcall BubbleSortVClick(TObject* Sender);
  private: // User declarations
  public: // User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1* Form1;
//---------------------------------------------------------------------------
#endif

