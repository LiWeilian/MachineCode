unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls;

type
  TForm1 = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Button2: TButton;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
var
  srcChar: PChar;
  destChar: array[0..5] of PChar;
begin
  srcChar := PChar(Edit1.Text);
  StrCopy(destChar[0], srcChar);
  ShowMessage(String(destChar[0]^));
end;

procedure TForm1.Button2Click(Sender: TObject);
var
  srcChar: PChar;
  destChar: array[0..5] of Char;
begin
  srcChar := PChar(Edit1.Text);
  //StrCopy(@destChar, srcChar);
  StrCopy(@destChar[0], srcChar);
  ShowMessage(destChar);
end;

end.
