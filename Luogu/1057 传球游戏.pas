var
  n,m,i,j:longint;
  f:array[0..30,0..30] of longint;
function idc(x,y:longint):longint;
begin
  if y=1 then
    begin
    if x=n then exit(1)
      else exit(x+1);
    end
  else
    begin
    if x=1 then exit(n)
      else exit(x-1);
    end;
end;
begin
  readln(n,m);
  f[0,1]:=1;f[1,1]:=0;
  for i:=1 to m do
    for j:=1 to n do
      f[i,j]:=f[i-1,idc(j,-1)]+f[i-1,idc(j,1)];
  writeln(f[m,1]);
end.
