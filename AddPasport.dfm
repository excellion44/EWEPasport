object Form5: TForm5
  Left = 0
  Top = 0
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1087#1072#1089#1087#1086#1088#1090
  ClientHeight = 158
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 13
    Width = 34
    Height = 13
    Caption = #1057#1077#1088#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 87
    Top = 13
    Width = 37
    Height = 13
    Caption = #1053#1086#1084#1077#1088
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 192
    Top = 13
    Width = 65
    Height = 13
    Caption = #1050#1077#1084' '#1074#1099#1076#1072#1085
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 64
    Width = 39
    Height = 13
    Caption = #1050#1086#1075#1076#1072' '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label5: TLabel
    Left = 111
    Top = 64
    Width = 119
    Height = 13
    Caption = #1050#1086#1076' '#1087#1086#1076#1088#1072#1079#1076#1077#1083#1077#1085#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label6: TLabel
    Left = 247
    Top = 64
    Width = 101
    Height = 13
    Caption = #1052#1077#1089#1090#1086' '#1088#1086#1078#1076#1077#1085#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object IDChelovek: TLabel
    Left = 136
    Top = 130
    Width = 55
    Height = 13
    Caption = 'IDChelovek'
  end
  object Edit1: TEdit
    Left = 8
    Top = 32
    Width = 65
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 87
    Top = 32
    Width = 90
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 192
    Top = 32
    Width = 435
    Height = 21
    TabOrder = 2
  end
  object Edit4: TEdit
    Left = 111
    Top = 83
    Width = 130
    Height = 21
    TabOrder = 3
  end
  object KOGDA: TDateTimePicker
    Left = 8
    Top = 83
    Width = 97
    Height = 21
    Date = 44750.000000000000000000
    Time = 0.411126736107689800
    TabOrder = 4
  end
  object Edit5: TEdit
    Left = 247
    Top = 83
    Width = 380
    Height = 21
    TabOrder = 5
  end
  object Button1: TButton
    Left = 264
    Top = 125
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 6
    OnClick = Button1Click
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 416
  end
end
