object Form7: TForm7
  Left = 0
  Top = 0
  Caption = #1054#1073#1098#1077#1082#1090#1099' '#1074' '#1076#1086#1084#1077
  ClientHeight = 437
  ClientWidth = 352
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
    Width = 352
    Height = 396
    Align = alClient
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    PopupMenu = PopupMenu1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnDblClick = DBGrid1DblClick
    Columns = <
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'OBJECKTS'
        Title.Caption = #1054#1073#1098#1077#1082#1090
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 115
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'NOMER_OBJECKTS'
        Title.Caption = #1053#1086#1084#1077#1088
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 77
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'BUKVA_OBJECKTS'
        Title.Caption = #1041#1091#1082#1074#1072
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 75
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 352
    Height = 41
    Align = alTop
    TabOrder = 1
    object ID_DOM: TLabel
      Left = 248
      Top = 14
      Width = 40
      Height = 13
      Caption = 'ID_DOM'
    end
  end
  object Panel2: TPanel
    Left = 40
    Top = 136
    Width = 257
    Height = 177
    Color = clMoneyGreen
    ParentBackground = False
    TabOrder = 2
    Visible = False
    object Label1: TLabel
      Left = 58
      Top = 12
      Width = 134
      Height = 14
      Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1086#1073#1098#1077#1082#1090#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 128
      Top = 41
      Width = 31
      Height = 13
      Caption = #1053#1086#1084#1077#1088
    end
    object Label3: TLabel
      Left = 128
      Top = 67
      Width = 30
      Height = 13
      Caption = #1041#1091#1082#1074#1072
    end
    object RadioButton1: TRadioButton
      Left = 24
      Top = 40
      Width = 113
      Height = 17
      Caption = #1050#1074#1072#1088#1090#1080#1088#1072
      TabOrder = 0
    end
    object RadioButton2: TRadioButton
      Left = 24
      Top = 63
      Width = 113
      Height = 17
      Caption = #1057#1090#1088#1086#1077#1085#1080#1077
      TabOrder = 1
    end
    object RadioButton3: TRadioButton
      Left = 24
      Top = 85
      Width = 113
      Height = 17
      Caption = #1050#1086#1088#1087#1091#1089
      TabOrder = 2
    end
    object Button1: TButton
      Left = 24
      Top = 136
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 3
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 160
      Top = 136
      Width = 75
      Height = 25
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 4
      OnClick = Button2Click
    end
    object Edit1: TEdit
      Left = 165
      Top = 38
      Width = 64
      Height = 21
      TabOrder = 5
    end
    object Edit2: TEdit
      Left = 164
      Top = 65
      Width = 64
      Height = 21
      TabOrder = 6
    end
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 224
    Top = 360
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 296
    Top = 352
  end
  object PopupMenu1: TPopupMenu
    Left = 152
    Top = 360
    object N1: TMenuItem
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      OnClick = N1Click
    end
  end
end
