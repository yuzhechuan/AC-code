var
  n,r,i,j,x:longint;
  a:array[1..10000] of longint;
  b:array[10..20] of char;
begin
  b[10]:='A';
  b[11]:='B';
  b[12]:='C';
  b[13]:='D';
  b[14]:='E';
  b[15]:='F';
  b[16]:='G';
  b[17]:='H';
  b[18]:='I';
  b[19]:='J';
  readln(n,r);
  x:=n;
  while x<>0 do
    begin
      inc(i);
      a[i]:=x mod r;
      x:=x div r;
      if a[i]<0 then
        begin
          a[i]:=a[i]-r;
          x:=x+1;
        end;
    end;
  write(n,'=');
  for j:=i downto 1 do
    if a[j]>9 then write(b[a[j]])
      else write(a[j]);
  writeln('(base',r,')');
end.
