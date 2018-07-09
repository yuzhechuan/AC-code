var mah:array[1..8] of longint=(-2,-1,1,2,2,1,-1,-2);
    mal:array[1..8] of longint=(1,2,2,1,-1,-2,-2,-1);
    s:array[0..20,0..20] of qword;
    g:array[-2..22,-2..22] of boolean;
    i,j,n,m,x,y:longint;
begin
  read(n,m,x,y);
  fillchar(g,sizeof(g),true);
  g[x,y]:=false;
  for i:=1 to 8 do g[x+mah[i],y+mal[i]]:=false;
  if g[0,0] and g[n,m] then
  begin
    s[0,0]:=1;
    for i:=1 to m do if g[0,i] then s[0,i]:=1
    else break;
    for i:=1 to n do if g[i,0] then s[i,0]:=1
    else break;
    for i:=1 to n do
      for j:=1 to m do
        if g[i,j] then s[i,j]:=s[i-1,j]+s[i,j-1];
    writeln(s[n,m]);
  end
  else writeln(0);
end.
