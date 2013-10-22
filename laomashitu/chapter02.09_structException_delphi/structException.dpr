program structException;

{$APPTYPE CONSOLE}

uses
  SysUtils;

var
  gi: Integer;
  err: String;

function CallStructException: String;
begin
  try
    PInteger(0)^ := 1;
  except
    gi := 2;
  end;
end;

begin
  { TODO -oUser -cConsole Main : Insert code here }
  err := CallStructException;
  Writeln(err);
  Readln(err);
end.
