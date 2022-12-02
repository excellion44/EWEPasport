object Form9: TForm9
  Left = 0
  Top = 0
  Caption = #1055#1088#1086#1087#1080#1089#1072#1090#1100
  ClientHeight = 291
  ClientWidth = 445
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object IDChelovek: TLabel
    Left = 45
    Top = 216
    Width = 55
    Height = 13
    Caption = 'IDChelovek'
  end
  object IDKvartira: TLabel
    Left = 45
    Top = 248
    Width = 49
    Height = 13
    Caption = 'IDKvartira'
  end
  object Label1: TLabel
    Left = 24
    Top = 18
    Width = 76
    Height = 13
    Caption = #1044#1072#1090#1072' '#1087#1088#1086#1087#1080#1089#1082#1080
  end
  object Label2: TLabel
    Left = 24
    Top = 66
    Width = 72
    Height = 13
    Caption = #1044#1072#1090#1072' '#1074#1099#1087#1080#1089#1082#1080
  end
  object MaskEdit1: TMaskEdit
    Left = 24
    Top = 37
    Width = 118
    Height = 21
    EditMask = '!99/99/0000;1;_'
    MaxLength = 10
    TabOrder = 0
    Text = '  .  .    '
    OnClick = MaskEdit1Click
  end
  object MaskEdit2: TMaskEdit
    Left = 24
    Top = 85
    Width = 120
    Height = 21
    EditMask = '!99/99/0000;1;_'
    MaxLength = 10
    TabOrder = 1
    Text = '  .  .    '
    OnClick = MaskEdit2Click
  end
  object CheckBox1: TCheckBox
    Left = 24
    Top = 112
    Width = 145
    Height = 17
    Caption = #1055#1086' '#1085#1072#1089#1090#1086#1103#1097#1077#1077' '#1074#1088#1077#1084#1103
    TabOrder = 2
  end
  object Button1: TButton
    Left = 24
    Top = 160
    Width = 41
    Height = 25
    Caption = #1054#1050
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 71
    Top = 160
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 4
  end
  object ComboBox1: TComboBox
    Left = 160
    Top = 37
    Width = 145
    Height = 21
    TabOrder = 5
    Text = #1054#1089#1085#1086#1074#1072#1085#1080#1077
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 216
    Top = 152
  end
end
