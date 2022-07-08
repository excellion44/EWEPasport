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
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 41
    Width = 405
    Height = 336
    Align = alClient
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleHotTrack]
    PopupMenu = PopupMenu1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Color = clMenu
        Expanded = False
        FieldName = 'TYPE'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        Width = 193
        Visible = True
      end
      item
        Color = clMenu
        Expanded = False
        FieldName = 'NOMER'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        Visible = True
      end
      item
        Color = clMenu
        Expanded = False
        FieldName = 'BUKVA'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        Width = 62
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 405
    Height = 41
    Align = alTop
    Caption = 'Panel1'
    TabOrder = 1
    object ID_ULICA: TLabel
      Left = 280
      Top = 14
      Width = 47
      Height = 13
      Caption = 'ID_ULICA'
    end
  end
  object AddHomePanel: TPanel
    Left = 88
    Top = 112
    Width = 209
    Height = 145
    Color = 12964031
    ParentBackground = False
    TabOrder = 2
    Visible = False
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
    object Edit1: TEdit
      Left = 8
      Top = 62
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
      OnClick = Button1Click
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
    object Edit2: TEdit
      Left = 79
      Top = 62
      Width = 42
      Height = 21
      TabOrder = 5
      TextHint = #1041#1091#1082#1074#1072
    end
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 312
    Top = 216
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 312
    Top = 272
  end
  object PopupMenu1: TPopupMenu
    Left = 184
    Top = 304
    object N1: TMenuItem
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      OnClick = N1Click
    end
  end
end
