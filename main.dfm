object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 495
  ClientWidth = 975
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
    Width = 975
    Height = 495
    ActivePage = TabSheet3
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 969
    ExplicitHeight = 486
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
      object StringGrid1: TStringGrid
        Left = 152
        Top = 144
        Width = 761
        Height = 57
        FixedCols = 0
        RowCount = 1
        FixedRows = 0
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -17
        Font.Name = 'Segoe UI'
        Font.Style = []
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
        ParentFont = False
        TabOrder = 0
        RowHeights = (
          24)
      end
      object EditDimensionar: TEdit
        Left = 680
        Top = 82
        Width = 105
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
      end
      object DimensionarVector: TButton
        Left = 807
        Top = 82
        Width = 106
        Height = 36
        Caption = 'Dimensionar'
        TabOrder = 2
        OnClick = DimensionarVectorClick
      end
      object CargarVector: TButton
        Left = 279
        Top = 82
        Width = 114
        Height = 36
        Caption = 'Cargar'
        TabOrder = 3
        OnClick = CargarVectorClick
      end
      object EditCargarVector: TEdit
        Left = 152
        Top = 77
        Width = 105
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 4
      end
      object Output: TEdit
        Left = 384
        Top = 312
        Width = 145
        Height = 36
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -20
        Font.Name = 'Segoe UI'
        Font.Style = []
        ParentFont = False
        TabOrder = 5
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Matriz'
      ImageIndex = 3
    end
  end
  object MainMenu1: TMainMenu
    Left = 928
    Top = 8
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
      object AgregarComaDigitos1: TMenuItem
        Caption = 'Agregar Coma Digitos'
        OnClick = AgregarComaDigitos1Click
      end
      object AgregarComaDigitosEInvertir: TMenuItem
        Caption = 'Agregar Coma Digitos E Invertir'
        OnClick = AgregarComaDigitosEInvertirClick
      end
      object VerificarOrdenado: TMenuItem
        Caption = 'Verificar Ordenado'
        OnClick = VerificarOrdenadoClick
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
      object EncontrarDigitosMayorYMenor: TMenuItem
        Caption = 'Encontrar Digitos Mayor Y Menor'
        OnClick = EncontrarDigitosMayorYMenorClick
      end
      object RepetirDigitos: TMenuItem
        Caption = 'Repetir Digitos'
        OnClick = RepetirDigitosClick
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
      object EliminarVocales: TMenuItem
        Caption = 'Eliminar Vocales'
        OnClick = EliminarVocalesClick
      end
      object PalabraMsLarga: TMenuItem
        Caption = 'Palabra M'#225's Larga'
        OnClick = PalabraMsLargaClick
      end
      object EliminarPrimerLetraDeCadaPalabra: TMenuItem
        Caption = 'Eliminar Primer Letra De Cada Palabra'
        OnClick = EliminarPrimerLetraDeCadaPalabraClick
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
      object ContarPalabras: TMenuItem
        Caption = 'Contar Palabras'
        OnClick = ContarPalabrasClick
      end
      object EliminarPrimerYUltimaLetraDeCadaPalabra: TMenuItem
        Caption = 'Eliminar Primer Y Ultima Letra De Cada Palabra'
        OnClick = EliminarPrimerYUltimaLetraDeCadaPalabraClick
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
      object SumarTodosLosElementos: TMenuItem
        Caption = 'Sumar Todos Los Elementos'
        OnClick = SumarTodosLosElementosClick
      end
      object InvertirVector: TMenuItem
        Caption = 'Invertir Vector'
        OnClick = InvertirVectorClick
      end
    end
  end
end
