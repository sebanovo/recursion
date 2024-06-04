object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 490
  ClientWidth = 963
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 963
    Height = 490
    ActivePage = TabSheet4
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 957
    ExplicitHeight = 481
    object TabSheet1: TTabSheet
      Caption = 'Numero'
      object Edit1: TEdit
        Left = 360
        Top = 71
        Width = 481
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
      object Edit2: TEdit
        Left = 360
        Top = 167
        Width = 481
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Cadena'
      ImageIndex = 1
      object Edit3: TEdit
        Left = 360
        Top = 71
        Width = 481
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
      end
      object Edit4: TEdit
        Left = 360
        Top = 167
        Width = 481
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Vector'
      ImageIndex = 2
      object Label1: TLabel
        Left = 152
        Top = 32
        Width = 40
        Height = 15
        Caption = 'Entrada'
      end
      object Label2: TLabel
        Left = 296
        Top = 32
        Width = 31
        Height = 15
        Caption = 'Salida'
      end
      object StringGrid1: TStringGrid
        Left = 152
        Top = 111
        Width = 761
        Height = 65
        DefaultRowHeight = 48
        FixedColor = clBlue
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        GridLineWidth = 4
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
        ParentFont = False
        TabOrder = 0
      end
      object DimensionarVector1: TButton
        Left = 807
        Top = 53
        Width = 106
        Height = 36
        Caption = 'Dimensionar'
        TabOrder = 1
        OnClick = DimensionarVector1Click
      end
      object EditInput: TEdit
        Left = 152
        Top = 53
        Width = 105
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 2
      end
      object EditOutput: TEdit
        Left = 296
        Top = 53
        Width = 113
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 3
      end
      object StringGrid3: TStringGrid
        Left = 152
        Top = 256
        Width = 761
        Height = 65
        DefaultRowHeight = 48
        FixedColor = clBlue
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        GridLineWidth = 4
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
        ParentFont = False
        TabOrder = 4
      end
      object DimensionarVector2: TButton
        Left = 807
        Top = 205
        Width = 106
        Height = 33
        Caption = 'Dimensionar'
        TabOrder = 5
        OnClick = DimensionarVector2Click
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Matriz'
      ImageIndex = 3
      object StringGrid2: TStringGrid
        Left = 240
        Top = 152
        Width = 513
        Height = 249
        DefaultColWidth = 40
        DefaultRowHeight = 32
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Segoe UI'
        Font.Style = []
        GridLineWidth = 4
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
        ParentFont = False
        TabOrder = 0
      end
      object EditRows: TEdit
        Left = 240
        Top = 96
        Width = 129
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
      object EditCols: TEdit
        Left = 384
        Top = 96
        Width = 129
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 2
      end
    end
  end
  object MainMenu1: TMainMenu
    Left = 896
    Top = 408
    object Numero: TMenuItem
      Caption = 'Numero'
      object Factorial: TMenuItem
        Caption = 'Factorial'
        OnClick = FactorialClick
      end
      object SumarDigitos: TMenuItem
        Caption = 'Sumar Digitos'
        OnClick = SumarDigitosClick
      end
      object SumarDigitosPares: TMenuItem
        Caption = 'Sumar Digitos Pares'
        OnClick = SumarDigitosParesClick
      end
      object SumarDigitosImpares: TMenuItem
        Caption = 'Sumar Digitos Impares'
        OnClick = SumarDigitosImparesClick
      end
      object RestarDigitosParImpar: TMenuItem
        Caption = 'Restar Digitos Par-Impar'
        OnClick = RestarDigitosParImparClick
      end
      object RestarDigitosImparPar: TMenuItem
        Caption = 'Restar Digitos Impar-Par'
        OnClick = RestarDigitosImparParClick
      end
      object ContarDigitos: TMenuItem
        Caption = 'Contar Digitos'
        OnClick = ContarDigitosClick
      end
      object ContarDigitosImparesAntesDeUnoPar: TMenuItem
        Caption = 'Contar Digitos Impares Antes De Uno Par'
        OnClick = ContarDigitosImparesAntesDeUnoParClick
      end
      object RetornarMenorDigito1: TMenuItem
        Caption = 'Retornar Menor Digito'
        OnClick = RetornarMenorDigito1Click
      end
      object RetonarMayorDigito: TMenuItem
        Caption = 'Retornar Mayor Digito'
        OnClick = RetonarMayorDigitoClick
      end
      object EncontrarDigitosMayorYMenor: TMenuItem
        Caption = 'Encontrar Digitos Mayor Y Menor'
        OnClick = EncontrarDigitosMayorYMenorClick
      end
      object AgregarComaDigitos1: TMenuItem
        Caption = 'Agregar Coma Digitos'
        OnClick = AgregarComaDigitos1Click
      end
      object AgregarComaDigitosEInvertir: TMenuItem
        Caption = 'Agregar Coma Digitos E Invertir'
        OnClick = AgregarComaDigitosEInvertirClick
      end
      object VerificarPrimo: TMenuItem
        Caption = 'Verificar Primo'
        OnClick = VerificarPrimoClick
      end
      object VerificarOrdenadoAscendente: TMenuItem
        Caption = 'Verificar Ordenado Ascendente'
        OnClick = VerificarOrdenadoAscendenteClick
      end
      object VerificarOrdenadoDescendente: TMenuItem
        Caption = 'Verificar Ordenado Descendente'
        OnClick = VerificarOrdenadoDescendenteClick
      end
      object MoverDigitoMayorAlFinal1: TMenuItem
        Caption = 'Mover Digito Mayor Al Final'
        OnClick = MoverDigitoMayorAlFinal1Click
      end
      object MoverDigitoMenorAlFinal: TMenuItem
        Caption = 'Mover Digito Menor Al Final'
        OnClick = MoverDigitoMenorAlFinalClick
      end
      object OrdenamientoAscendente: TMenuItem
        Caption = 'Ordenamiento Ascendente'
        OnClick = OrdenamientoAscendenteClick
      end
      object OrdenamientoDescendente: TMenuItem
        Caption = 'Ordenamiento Descendente'
        OnClick = OrdenamientoDescendenteClick
      end
      object EliminarDigitosImpares: TMenuItem
        Caption = 'Eliminar Digitos Impares'
        OnClick = EliminarDigitosImparesClick
      end
      object EliminarDigitosPares: TMenuItem
        Caption = 'Eliminar Digitos Pares'
        OnClick = EliminarDigitosParesClick
      end
      object RepetirDigitos: TMenuItem
        Caption = 'Repetir Digitos'
        OnClick = RepetirDigitosClick
      end
      object InsertarDigitoPorPosicin1: TMenuItem
        Caption = 'Insertar Digito Por Posici'#243'n'
        OnClick = InsertarDigitoPorPosicin1Click
      end
      object RemplazarDigitoPorPosicin1: TMenuItem
        Caption = 'Remplazar Digito Por Posici'#243'n'
        OnClick = RemplazarDigitoPorPosicin1Click
      end
      object TerminoFibonacci1: TMenuItem
        Caption = 'Termino Fibonacci'
        OnClick = TerminoFibonacci1Click
      end
      object MoverDigitoMenorAlPrincipio1: TMenuItem
        Caption = 'Mover Digito Menor Al Principio'
        OnClick = MoverDigitoMenorAlPrincipio1Click
      end
      object BubbleSort1: TMenuItem
        Caption = 'Bubble Sort'
        OnClick = BubbleSort1Click
      end
    end
    object Cadena: TMenuItem
      Caption = 'Cadena'
      object ContarEspacios: TMenuItem
        Caption = 'Contar Espacios'
        OnClick = ContarEspaciosClick
      end
      object ContarVocales: TMenuItem
        Caption = 'Contar Vocales'
        OnClick = ContarVocalesClick
      end
      object ContarLetras: TMenuItem
        Caption = 'Contar Letras'
        OnClick = ContarLetrasClick
      end
      object ContarPalabras: TMenuItem
        Caption = 'Contar Palabras'
        OnClick = ContarPalabrasClick
      end
      object InvertirCadena: TMenuItem
        Caption = 'Invertir Cadena'
        OnClick = InvertirCadenaClick
      end
      object FiltrarDigitos: TMenuItem
        Caption = 'Filtrar Digitos'
        OnClick = FiltrarDigitosClick
      end
      object FiltrarPrimerNumero: TMenuItem
        Caption = 'Filtrar Primer Numero'
        OnClick = FiltrarPrimerNumeroClick
      end
      object PalabraMsLarga: TMenuItem
        Caption = 'Palabra M'#225's Larga'
        OnClick = PalabraMsLargaClick
      end
      object EliminarVocales: TMenuItem
        Caption = 'Eliminar Vocales'
        OnClick = EliminarVocalesClick
      end
      object EliminarPrimerLetraDeCadaPalabra: TMenuItem
        Caption = 'Eliminar Primer Letra De Cada Palabra'
        OnClick = EliminarPrimerLetraDeCadaPalabraClick
      end
      object EliminarPrimerYUltimaLetraDeCadaPalabra: TMenuItem
        Caption = 'Eliminar Primer Y Ultima Letra De Cada Palabra'
        OnClick = EliminarPrimerYUltimaLetraDeCadaPalabraClick
      end
      object InvertirCadaPalabra: TMenuItem
        Caption = 'Invertir Cada Palabra'
        OnClick = InvertirCadaPalabraClick
      end
      object PrimerPalabra: TMenuItem
        Caption = 'Primer Palabra'
        OnClick = PrimerPalabraClick
      end
      object EliminarPrimerPalabra: TMenuItem
        Caption = 'Eliminar Primer Palabra'
        OnClick = EliminarPrimerPalabraClick
      end
      object EliminarHastaPrimerPalabra: TMenuItem
        Caption = 'Eliminar Hasta Primer Palabra'
        OnClick = EliminarHastaPrimerPalabraClick
      end
      object EliminarDesdePrimerPalabra: TMenuItem
        Caption = 'Eliminar Desde Primer Palabra'
        OnClick = EliminarDesdePrimerPalabraClick
      end
      object NmeroMayor: TMenuItem
        Caption = 'N'#250'mero Mayor'
        OnClick = NmeroMayorClick
      end
      object InvertirFrase: TMenuItem
        Caption = 'Invertir Frase'
        OnClick = InvertirFraseClick
      end
    end
    object Vector: TMenuItem
      Caption = 'Vector'
      object CargarRandomV: TMenuItem
        Caption = 'Cargar Random'
        OnClick = CargarRandomVClick
      end
      object CargarPalabrasV: TMenuItem
        Caption = 'Cargar Palabras'
        OnClick = CargarPalabrasVClick
      end
      object CargarDigitosV: TMenuItem
        Caption = 'Cargar Digitos'
        OnClick = CargarDigitosVClick
      end
      object CargarCadena2en2InvV: TMenuItem
        Caption = 'Cargar Cadena 2 en 2 Inv'
        OnClick = CargarCadena2en2InvVClick
      end
      object SumarTodosLosNúmerosV: TMenuItem
        Caption = 'Sumar Todos Los N'#250'meros'
        OnClick = SumarTodosLosNúmerosVClick
      end
      object InvertirV: TMenuItem
        Caption = 'Invertir'
        OnClick = InvertirVClick
      end
      object MoverNumeroMenorAlFinalV: TMenuItem
        Caption = 'Mover N'#250'mero Menor Al Final'
        OnClick = MoverNumeroMenorAlFinalVClick
      end
      object MoverNumeroMayorAlFinalV: TMenuItem
        Caption = 'Mover N'#250'mero Mayor Al Final'
        OnClick = MoverNumeroMayorAlFinalVClick
      end
      object OrdenamientoAscendenteV: TMenuItem
        Caption = 'Ordenamiento Ascendente'
        OnClick = OrdenamientoAscendenteVClick
      end
      object OrdenamientoDescendenteV: TMenuItem
        Caption = 'Ordenamiento Descendente'
        OnClick = OrdenamientoDescendenteVClick
      end
      object VerificarOrdenadoAscendenteV: TMenuItem
        Caption = 'Verificar Ordenado Ascendente'
        OnClick = VerificarOrdenadoAscendenteVClick
      end
      object VerificarOrdenadoDescendenteV: TMenuItem
        Caption = 'Verificar Ordenado Descendente'
        OnClick = VerificarOrdenadoDescendenteVClick
      end
      object VerificarPalindromoV: TMenuItem
        Caption = 'Verificar Palindromo'
        OnClick = VerificarPalindromoVClick
      end
      object BusquedaBinariaV: TMenuItem
        Caption = 'Busqueda Binaria'
        OnClick = BusquedaBinariaVClick
      end
      object BusquedaSecuencial: TMenuItem
        Caption = 'Busqueda Secuencial'
        OnClick = BusquedaSecuencialClick
      end
      object ContarNumerosParesV: TMenuItem
        Caption = 'Contar N'#250'meros Pares'
        OnClick = ContarNumerosParesVClick
      end
      object ContarNumerosImparesV: TMenuItem
        Caption = 'Contar N'#250'meros Impares'
        OnClick = ContarNumerosImparesVClick
      end
      object EliminarElementoV: TMenuItem
        Caption = 'Eliminar Elemento'
        OnClick = EliminarElementoVClick
      end
      object factorialV: TMenuItem
        Caption = 'factorial'
        OnClick = factorialVClick
      end
      object CargarCaracteresOrdenAscendenteASCIIV: TMenuItem
        Caption = 'Cargar Caracteres Orden Ascendente ASCII'
        OnClick = CargarCaracteresOrdenAscendenteASCIIVClick
      end
      object CargarCaracteresOrdenDescendenteASCIIV: TMenuItem
        Caption = 'Cargar Caracteres Orden Descendente ASCII'
        OnClick = CargarCaracteresOrdenDescendenteASCIIVClick
      end
      object CargarFibonacciV: TMenuItem
        Caption = 'Cargar Fibonacci'
        OnClick = CargarFibonacciVClick
      end
      object V1_21_321_4321_54321: TMenuItem
        Caption = '1, 21, 321, 4321, 54321,...'
        OnClick = V1_21_321_4321_54321Click
      end
      object V1_2_3_6_7: TMenuItem
        Caption = '1, 2, 3, 6, 7'
        OnClick = V1_2_3_6_7Click
      end
      object QuickSortV: TMenuItem
        Caption = 'Quick Sort'
        OnClick = QuickSortVClick
      end
      object MergeSortV: TMenuItem
        Caption = 'Merge Sort'
        OnClick = MergeSortVClick
      end
      object InsertionSortV: TMenuItem
        Caption = 'Insertion Sort'
        OnClick = InsertionSortVClick
      end
      object BubbleSortV: TMenuItem
        Caption = 'Bubble Sort'
        OnClick = BubbleSortVClick
      end
      object SelectionSortV: TMenuItem
        Caption = 'Selection Sort'
        OnClick = SelectionSortVClick
      end
      object BogoSortV: TMenuItem
        Caption = 'Bogo Sort'
        OnClick = BogoSortVClick
      end
      object InsertarV2EnV1V: TMenuItem
        Caption = 'Insertar V2 En V1'
        OnClick = InsertarV2EnV1VClick
      end
      object CargarFrecuenciaDeCaracteresV: TMenuItem
        Caption = 'Cargar Frecuencia De Caracteres'
        OnClick = CargarFrecuenciaDeCaracteresVClick
      end
    end
    object Matriz1: TMenuItem
      Caption = 'Matriz'
      object CargarRandomM: TMenuItem
        Caption = 'Cargar Random'
        OnClick = CargarRandomMClick
      end
      object CargarPorFilasM: TMenuItem
        Caption = 'Cargar Por Filas'
        OnClick = CargarPorFilasMClick
      end
      object CargarPorColumnasM: TMenuItem
        Caption = 'Cargar Por Columnas'
        OnClick = CargarPorColumnasMClick
      end
      object CargarLM: TMenuItem
        Caption = 'Cargar L'
        OnClick = CargarLMClick
      end
      object CargarCircularM: TMenuItem
        Caption = 'Cargar Circular'
        OnClick = CargarCircularMClick
      end
      object CargarMagicoM: TMenuItem
        Caption = 'Cargar Magico'
        OnClick = CargarMagicoMClick
      end
      object CargarCaracolM: TMenuItem
        Caption = 'Cargar Caracol'
        OnClick = CargarCaracolMClick
      end
      object CargarCaracteresM: TMenuItem
        Caption = 'Cargar Caracteres'
        OnClick = CargarCaracteresMClick
      end
      object OrdenarFilasAscendentementeM: TMenuItem
        Caption = 'Ordenar Filas Ascendentemente'
        OnClick = OrdenarFilasAscendentementeMClick
      end
      object CargarDiagonalesSecundariasM: TMenuItem
        Caption = 'Cargar Diagonales Secundarias'
        OnClick = CargarDiagonalesSecundariasMClick
      end
      object CargarTriangularInferiorIzquierdaM: TMenuItem
        Caption = 'Cargar Triangular Inferior Izquierda'
        OnClick = CargarTriangularInferiorIzquierdaMClick
      end
      object CargarDiagonalesPrincipalesTriangularInferiorIzquierdaM: TMenuItem
        Caption = 'Cargar Diagonales Principales Triangular Inferior Izquierda'
        OnClick = CargarDiagonalesPrincipalesTriangularInferiorIzquierdaMClick
      end
      object CargarDiagonalesHard1: TMenuItem
        Caption = 'Cargar Diagonales Hard'
        OnClick = CargarDiagonalesHard1Click
      end
      object CargarViboraM: TMenuItem
        Caption = 'Cargar Vibora'
        OnClick = CargarViboraMClick
      end
      object BubbleSortM: TMenuItem
        Caption = 'Bubble Sort'
        OnClick = BubbleSortMClick
      end
      object SegmentarParYNoParM: TMenuItem
        Caption = 'Segmentar Par Y No Par'
        OnClick = SegmentarParYNoParMClick
      end
      object IntercalarParYNoParM: TMenuItem
        Caption = 'Intercalar Par Y No Par'
        OnClick = IntercalarParYNoParMClick
      end
    end
  end
end
