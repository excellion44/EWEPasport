object Form6: TForm6
  Left = 0
  Top = 0
  Caption = #1044#1086#1084#1072
  ClientHeight = 377
  ClientWidth = 405
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 41
    Width = 405
    Height = 336
    Align = alClient
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 405
    Height = 41
    Align = alTop
    Caption = 'Panel1'
    TabOrder = 1
    ExplicitLeft = 120
    ExplicitTop = 192
    ExplicitWidth = 185
  end
  object AddHomePanel: TPanel
    Left = 96
    Top = 112
    Width = 209
    Height = 145
    TabOrder = 2
    object RadioButton1: TRadioButton
      Left = 8
      Top = 16
      Width = 113
      Height = 17
      Caption = #1052#1085#1086#1075#1086#1082#1074#1072#1088#1090#1080#1088#1085#1099#1081
      TabOrder = 0
    end
    object RadioButton2: TRadioButton
      Left = 8
      Top = 39
      Width = 113
      Height = 17
      Caption = #1063#1072#1089#1090#1085#1099#1081
      TabOrder = 1
    end
    object TEdit
      Left = 127
      Top = 35
      Width = 65
      Height = 21
      TabOrder = 2
      TextHint = #1053#1086#1084#1077#1088
    end
    object Button1: TButton
      Left = 16
      Top = 104
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 3
    end
    object Button2: TButton
      Left = 112
      Top = 104
      Width = 75
      Height = 25
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 4
      OnClick = Button2Click
    end
  end
end
