object Form4: TForm4
  Left = 0
  Top = 0
  Hint = #1074#1072#1099#1087#1074#1099#1072
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1046#1080#1090#1077#1083#1103
  ClientHeight = 145
  ClientWidth = 499
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
    Top = 8
    Width = 50
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 216
    Top = 8
    Width = 23
    Height = 13
    Caption = #1048#1084#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 343
    Top = 8
    Width = 56
    Height = 13
    Caption = #1054#1090#1095#1077#1089#1090#1074#1086
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 53
    Width = 80
    Height = 13
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object Label5: TLabel
    Left = 290
    Top = 53
    Width = 19
    Height = 13
    Caption = #1055#1086#1083
  end
  object Edit1: TEdit
    Left = 8
    Top = 24
    Width = 202
    Height = 23
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TextHint = #1060#1072#1084#1080#1083#1080#1103
  end
  object Edit2: TEdit
    Left = 216
    Top = 24
    Width = 121
    Height = 23
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    TextHint = #1048#1084#1103
  end
  object Edit3: TEdit
    Left = 343
    Top = 24
    Width = 148
    Height = 23
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    TextHint = #1054#1090#1095#1077#1089#1090#1074#1086
  end
  object GOD: TDateTimePicker
    Left = 8
    Top = 68
    Width = 105
    Height = 21
    Hint = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
    Date = 44749.000000000000000000
    Time = 0.634534270830045000
    TabOrder = 3
  end
  object Button1: TButton
    Left = 200
    Top = 104
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 4
    OnClick = Button1Click
  end
  object STATUS: TComboBox
    Left = 130
    Top = 68
    Width = 145
    Height = 21
    TabOrder = 5
    Text = #1044#1077#1077#1089#1087#1086#1089#1086#1073#1085#1099#1081
    Items.Strings = (
      #1044#1077#1077#1089#1087#1086#1089#1086#1073#1085#1099#1081
      #1053#1077#1076#1077#1077#1089#1087#1086#1089#1086#1073#1085#1099#1081)
  end
  object POL: TComboBox
    Left = 288
    Top = 68
    Width = 49
    Height = 21
    TabOrder = 6
    Text = #1052#1091#1078'.'
    Items.Strings = (
      #1052#1091#1078'.'
      #1046#1077#1085'.')
  end
  object CHELOVEK: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 432
    Top = 72
  end
end
