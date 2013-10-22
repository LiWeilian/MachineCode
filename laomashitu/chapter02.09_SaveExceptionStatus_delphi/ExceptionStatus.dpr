program ExceptionStatus;

{$APPTYPE CONSOLE}

uses
  SysUtils;

var
  gi: Integer;
  gs: String;

function CheckExceptionStatus: String;
begin
  try
    asm
      mov [0],1
    end;
  except
    gi := 3;
  end;
end;

procedure MyCall(i: Integer); stdcall;
begin
  
  try
    asm
      mov [0], 1
    end;
  except
    gi := i;
  end;

  gi := i + 2;
end;

begin
  { TODO -oUser -cConsole Main : Insert code here }
  //gs := CheckExceptionStatus;
  MyCall(1);
  Readln(gs);
end.
