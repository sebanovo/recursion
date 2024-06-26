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

void __fastcall TForm1::DimensionarVector1Click(TObject* Sender)
{
    byte dim = StrToInt(InputBox("Dimensionar Vector 1", "longitud", ""));
    StringGrid1->ColCount = dim;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SumarTodosLosN�merosVClick(TObject* Sender)
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
    byte total = StrToInt(EditRows->Text);
    StringGrid2->RowCount = total;
    StringGrid2->ColCount = total;
    Cardinal razon = 1;
    cargar_triangular_inferior_izquierda(StringGrid2, 0, total - 1, razon);
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
    StringGrid2->ColCount = StrToInt(EditRows->Text);
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

void __fastcall TForm1::CargarCaracteresMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    String palabra = InputBox("Cargar Caracteres", "", "Programando");
    cargar_caracteres(StringGrid2, 0, StringGrid2->ColCount - 1, palabra);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarCaracolMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    Cardinal razon = 1;
    cargar_caracol(
        StringGrid2, 1, StringGrid2->RowCount, 1, StringGrid2->ColCount, razon);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarDiagonalesSecundariasMClick(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    Cardinal razon = 1;
    cargar_diagonales(StringGrid2, 0, StringGrid2->RowCount - 1, razon);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InsertarDigitoPorPosicin1Click(TObject* Sender)
{
    byte digito =
        StrToInt(InputBox("Insertar digito por posici�n", "digito", ""));
    byte posicion =
        StrToInt(InputBox("Insertar digito por posici�n", "posici�n", ""));
    Cardinal numero = StrToInt(Edit1->Text);
    insertar_digito_por_posicion(numero, digito, posicion);
    Edit2->Text = numero;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RemplazarDigitoPorPosicin1Click(TObject* Sender)
{
    byte digito =
        StrToInt(InputBox("Insertar digito por posici�n", "digito", ""));
    byte posicion =
        StrToInt(InputBox("Insertar digito por posici�n", "posici�n", ""));
    Cardinal numero = StrToInt(Edit1->Text);
    remplazar_digito_por_posicion(numero, digito, posicion);
    Edit2->Text = numero;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::
    CargarDiagonalesPrincipalesTriangularInferiorIzquierdaMClick(
        TObject* Sender)

{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    Cardinal r = 1;
    cargar_diagonales_triangular_inferior_izquierda(
        StringGrid2, 0, StringGrid2->RowCount - 1, r);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarDiagonalesHard1Click(TObject* Sender)
{
    StringGrid2->RowCount = StrToInt(EditRows->Text);
    StringGrid2->ColCount = StrToInt(EditCols->Text);
    int m = StringGrid2->RowCount;
    Cardinal k = (m + 1) * m;
    byte f, c;
    cargar_diagonales_hard(StringGrid2, m, k, f, c);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarViboraMClick(TObject* Sender)
{
    byte m = StrToInt(EditRows->Text);
    StringGrid2->RowCount = m;
    StringGrid2->ColCount = m;
    Cardinal r = 1;
    cargar_vibora_por_columnas(StringGrid2, 0, StringGrid2->ColCount - 1, r);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::V1_21_321_4321_54321Click(TObject* Sender)
{
    byte n = StrToInt(EditInput->Text);
    StringGrid1->ColCount = n;
    serie1(StringGrid1, n);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarFibonacciVClick(TObject* Sender)
{
    byte n = StrToInt(EditInput->Text);
    StringGrid1->ColCount = n;
    cargar_fibonacci(StringGrid1, n);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TerminoFibonacci1Click(TObject* Sender)
{
    Edit2->Text = fibonacci(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::V1_2_3_6_7Click(TObject* Sender)
{
    byte n = StrToInt(EditInput->Text);
    StringGrid1->ColCount = n;
    serie2(StringGrid1, n);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MoverDigitoMenorAlPrincipio1Click(TObject* Sender)
{
    Cardinal numero = StrToInt(Edit1->Text);
    mover_digito_menor_al_principio(numero);
    Edit1->Text = numero;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarCadena2en2InvVClick(TObject* Sender)
{
    String cadena = EditInput->Text;
    byte n = contar_palabras_2en2(cadena);
    StringGrid1->ColCount = n;
    cargar_cadena_2en2(StringGrid1, cadena, 0, n - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarDigitosVClick(TObject* Sender)
{
    Cardinal numero = StrToInt(EditInput->Text);
    byte n = contar_digitos(numero);
    StringGrid1->ColCount = n;
    cargar_digitos(StringGrid1, numero, n);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MergeSortVClick(TObject* Sender)
{
    merge_sort(StringGrid1, 0, StringGrid1->ColCount - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectionSortVClick(TObject* Sender)
{
    selection_sort(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BubbleSortVClick(TObject* Sender)
{
    bubble_sort(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::QuickSortVClick(TObject* Sender)
{
    quick_sort(StringGrid1, 0, StringGrid1->ColCount - 1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BogoSortVClick(TObject* Sender)
{
    bogo_sort(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InsertionSortVClick(TObject* Sender)
{
    insertion_sort(StringGrid1, StringGrid1->ColCount);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BubbleSortMClick(TObject* Sender)
{
    bubble_sort(StringGrid2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SegmentarParYNoParMClick(TObject* Sender)
{
    segmentar_par_impar(StringGrid2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IntercalarParYNoParMClick(TObject* Sender)
{
    intercalar_par_impar(StringGrid2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BubbleSort1Click(TObject* Sender)
{
    Cardinal x = StrToInt(Edit1->Text);
    bubble_sort(x);
    Edit2->Text = x;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DimensionarVector2Click(TObject* Sender)
{
    byte dim = StrToInt(InputBox("Dimensionar Vector 2", "longitud", ""));
    StringGrid3->ColCount = dim;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::InsertarV2EnV1VClick(TObject* Sender)
{
    byte p = StrToInt(InputBox("Insertar V2 En V1", "posici�n", ""));
    if (p < 0 || p > StringGrid1->ColCount - 1) {
        MessageBox(
            NULL, L"Indice fuera de los limites", L"Error", MB_ICONASTERISK);
        return;
    }
    insertar_v2_en_v1(StringGrid3, StringGrid1, p);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CargarFrecuenciaDeCaracteresVClick(TObject* Sender)
{
    String cad = InputBox("Cargar Frecuencia De Caracteres", "cadena", "");
    byte length = cad.Length();
    StringGrid1->ColCount = length;
    StringGrid3->ColCount = length;
    cargar_frecuencia(cad, StringGrid1, StringGrid3, length);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DecimalABaseN1Click(TObject* Sender)
{
    Cardinal numero = StrToInt(Edit1->Text);
    byte base = StrToInt(InputBox("Decimal A Base N", "base", ""));
    try {
        Edit2->Text = decimal_a_base_N_1(numero, base);
    } catch (AnsiString e) {
        ShowMessage(e);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BaseNADecimal1Click(TObject* Sender)
{
    AnsiString number = Edit1->Text;
    byte base = StrToInt(InputBox("Base N A Decimal", "base", ""));
    try {
        Edit2->Text = number.UpperCase();
        Edit2->Text = base_N_a_decimal_1(number, base);
    } catch (AnsiString e) {
        ShowMessage(e);
    }
}
//---------------------------------------------------------------------------

