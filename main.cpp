//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "main.h"
#include "numero.h"
#include "cadena.h"
#include "vector.h"
#include "matriz.h"
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

void __fastcall TForm1::VerificarOrdenadoAscendenteClick(TObject* Sender)
{
    Edit2->Text = verificar_ordenado_ascendente(StrToInt(Edit1->Text))
                      ? "Ordenado Ascendentemente"
                      : "Desordenado";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoverDigitoMayorAlFinal1Click(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    mover_digito_mayor_al_final(number);
    Edit1->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarEspaciosClick(TObject* Sender)
{
    Edit4->Text = contar_espacios(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarVocalesClick(TObject* Sender)
{
    Edit4->Text = contar_vocales_v1(Edit3->Text);
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
    Edit1->Text = number;
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
    String cadena = Edit3->Text;
    invertir_cadena(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FiltrarDigitosClick(TObject* Sender)
{
    Edit4->Text = filtrar_digitos(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FiltrarPrimerNumeroClick(TObject* Sender)
{
    Edit4->Text = filtrar_primer_numero(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RepetirDigitosClick(TObject* Sender)
{
    Edit2->Text = repetir_digitos(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarVocalesClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    eliminar_vocales(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarDigitosImparesAntesDeUnoParClick(TObject* Sender)
{
    Edit2->Text =
        contar_digitos_impares_antes_de_uno_par(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenamientoAscendenteClick(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    ordenamiento_ascendente(number);
    Edit1->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PalabraMsLargaClick(TObject* Sender)
{
    Edit4->Text = palabra_mas_larga(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarPrimerLetraDeCadaPalabraClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    eliminar_primera_letra_de_cada_palabra(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InvertirCadaPalabraClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    invertir_cada_palabra(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarLetrasClick(TObject* Sender)
{
    Edit4->Text = contar_letras(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PrimerPalabraClick(TObject* Sender)
{
    Edit4->Text = primer_palabra(Edit3->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EliminarPrimerPalabraClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    eliminar_primer_palabra(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarHastaPrimerPalabraClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    eliminar_hasta_primer_palabra(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDesdePrimerPalabraClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    eliminar_desde_primer_palabra(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoverDigitoMenorAlFinalClick(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    mover_digito_menor_al_final(number);
    Edit1->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenamientoDescendenteClick(TObject* Sender)
{
    Cardinal number = StrToInt(Edit1->Text);
    ordenamiento_descendente(number);
    Edit1->Text = number;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarPalabrasClick(TObject* Sender)
{
    Edit4->Text = contar_palabras(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarPrimerYUltimaLetraDeCadaPalabraClick(
    TObject* Sender)

{
    String cadena = Edit3->Text;
    eliminar_primera_y_ultima_letra_de_cada_palabra(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NmeroMayorClick(TObject* Sender)
{
    Edit4->Text = numero_mayor(Edit3->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InvertirFraseClick(TObject* Sender)
{
    String cadena = Edit3->Text;
    invertir_frase(cadena);
    Edit3->Text = cadena;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DimensionarVectorClick(TObject* Sender)
{
    StringGrid1->ColCount = StrToInt(EditDimensionar->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarTodosLosNúmerosVClick(TObject* Sender)
{
    EditOutput->Text =
        sumar_todos_los_numeros(StringGrid1, 0, StringGrid1->ColCount - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InvertirVClick(TObject* Sender)
{
    invertir(StringGrid1, 0, StringGrid1->ColCount - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoverNumeroMenorAlFinalVClick(TObject* Sender)
{
    mover_numero_menor_al_final(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoverNumeroMayorAlFinalVClick(TObject* Sender)
{
    mover_numero_mayor_al_final(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarRandomVClick(TObject* Sender)
{
    // Importante!! -> ColCount no puede ser "0"
    cargar(StringGrid1, StrToInt(EditInput->Text));
    StringGrid1->ColCount = StrToInt(EditInput->Text);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CargarPalabrasVClick(TObject* Sender)
{
    byte n;
    cargar_palabras(EditInput->Text, StringGrid1, 0, n);
    StringGrid1->ColCount = n;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenamientoAscendenteVClick(TObject* Sender)
{
    ordenamiento_burbuja_ascendente(StringGrid1, StringGrid1->ColCount);
    //selection_sort(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenamientoDescendenteVClick(TObject* Sender)
{
    ordenamiento_burbuja_descendente(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VerificarOrdenadoDescendenteClick(TObject* Sender)
{
    Edit2->Text = verificar_ordenado_descendente(StrToInt(Edit1->Text))
                      ? "Ordenado Descendentemente"
                      : "Desordenado";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BusquedaBinariaVClick(TObject* Sender)
{
    ordenamiento_burbuja_ascendente(StringGrid1, StringGrid1->ColCount);
    Cardinal numero = StrToInt(InputBox("Busqueda Binaria", "", ""));
    MessageBox(NULL,
        busqueda_binaria(numero, StringGrid1, 0, StringGrid1->ColCount - 1)
            ? L"Encontrado"
            : L"No Encontrado",
        L"Busqueda Secuencial", MB_ICONASTERISK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VerificarOrdenadoAscendenteVClick(TObject* Sender)
{
    MessageBox(NULL,
        verificar_ordenado_ascendente(StringGrid1, 0, StringGrid1->ColCount)
            ? L"Ordenado Ascendentemente"
            : L"Desordenado",
        L"Verificar Ordenado Ascendente", MB_ICONASTERISK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VerificarOrdenadoDescendenteVClick(TObject* Sender)
{
    MessageBox(NULL,
        verificar_ordenado_descendente(StringGrid1, 0, StringGrid1->ColCount)
            ? L"Ordenado Descendente"
            : L"Desordenado",
        L"Verificar Ordenado Descendente", MB_ICONASTERISK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarNumerosParesVClick(TObject* Sender)
{
    EditOutput->Text = contar_numeros_pares(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarElementoVClick(TObject* Sender)
{
    eliminar_elemento(
        EditInput->Text, StringGrid1, 0, StringGrid1->ColCount - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::factorialVClick(TObject* Sender)
{
    factorial(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContarNumerosImparesVClick(TObject* Sender)
{
    EditOutput->Text =
        contar_numeros_impares(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VerificarPrimoClick(TObject* Sender)
{
    Edit2->Text =
        verificar_primo(Edit1->Text.ToInt()) ? "Es Primo" : "No Es Primo";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VerificarPalindromoVClick(TObject* Sender)
{
    MessageBox(NULL,
        verificar_palindromo(
            StringGrid1, 0, StringGrid1->ColCount - 1, StringGrid1->ColCount)
            ? L"Es Palindromo"
            : L"No es Palindromo",
        L"Verificar Palindromo", MB_ICONASTERISK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarCaracteresOrdenAscendenteASCIIVClick(
    TObject* Sender)

{
    StringGrid1->ColCount = EditInput->Text.Length();
    cargar_caracteres_orden_ascendente(StringGrid1, EditInput->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarCaracteresOrdenDescendenteASCIIVClick(
    TObject* Sender)

{
    StringGrid1->ColCount = EditInput->Text.Length();
    cargar_caracteres_orden_descendente(StringGrid1, EditInput->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarRandomMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    cargar_random(StringGrid2, StringGrid2->RowCount, StringGrid2->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OrdenarFilasAscendentementeMClick(TObject* Sender)
{
    ordenar_filas_burbuja_ascedente(
        StringGrid2, StringGrid2->RowCount, StringGrid2->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarTriangularInferiorIzquierdaMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    cargar_triangular_inferior_izquierda(
        StringGrid2, StringGrid2->RowCount, StringGrid2->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarPorFilasMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    cargar_por_filas(StringGrid2, StringGrid2->RowCount, StringGrid2->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarPorColumnasMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    cargar_por_columnas(
        StringGrid2, StringGrid2->RowCount, StringGrid2->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BusquedaSecuencialClick(TObject* Sender)
{
    Cardinal numero = StrToInt(InputBox("Busqueda Secuencial", "", ""));
    MessageBox(NULL,
        busqueda_secuencial(numero, StringGrid1, 0, StringGrid1->ColCount - 1)
            ? L"Encontrado"
            : L"No Encontrado",
        L"Busqueda Secuencial", MB_ICONASTERISK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarLMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    cargar_L(StringGrid2, StringGrid2->RowCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarCircularMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    cargar_circular(StringGrid2, 0, StringGrid2->RowCount - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarMagicoMClick(TObject* Sender)
{
    byte f, c, m = StrToInt(EditRows->Text);
    StringGrid2->RowCount = m;
    StringGrid2->ColCount = m;
    cargar_magico(StringGrid2, m, m * m, f, c);
}
//---------------------------------------------------------------------------

