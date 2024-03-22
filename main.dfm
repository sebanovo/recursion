object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 485
  ClientWidth = 835
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  TextHeight = 15
  object Edit1: TEdit
    Left = 328
    Top = 168
    Width = 385
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
    Left = 328
    Top = 224
    Width = 385
    Height = 36
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object MainMenu1: TMainMenu
    Left = 592
    Top = 40
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
      object ContarDigitosImparesAntesDeUnoPar: TMenuItem
        Caption = 'Contar Digitos Impares Antes De Uno Par'
        OnClick = ContarDigitosImparesAntesDeUnoParClick
      end
      object Ordenar: TMenuItem
        Caption = 'Ordenar'
        OnClick = OrdenarClick
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
    end
  end
end
