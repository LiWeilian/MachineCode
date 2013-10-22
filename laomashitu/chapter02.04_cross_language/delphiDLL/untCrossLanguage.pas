unit untCrossLanguage;

interface

function Add(I1, I2, I3, I4: Integer): Integer; cdecl;

implementation

function Add(I1, I2, I3, I4: Integer): Integer; cdecl;
begin
  Result := I1 + I2 + I3 + I4;
end;

end.
