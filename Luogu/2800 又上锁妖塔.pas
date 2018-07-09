uses math;
var i,n:longint;
    a,c:array[0..1000010] of longint;
begin
  readln(n);
  for i:=1 to n do read(a[i]);
  for i:=1 to n do
    c[i]:=min(c[i-1]+a[i],min(c[i-2]+a[i-1],c[i-3]+a[i-2]));
  writeln(c[n]);
end.
