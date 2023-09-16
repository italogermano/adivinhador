/* BIBLIOTECAS */
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h> 

/*FUNÇÃO PRINCIPAL*/
main ()
{
	
int a,c; char b;

/*LAYOUT*/
system ("title ADIVINHADOR - criado por Italo Germano");
for (a=0;a<7;a++)
{
 system ("color f0");
 system ("color 0f");
 Beep(1000,100); 		
}
system ("color f0");

puts ("Escolha uma letra e mantenha-se em silencio\n");
puts ("A Q V F D X C H G J E T Y U N\n\a");

system ("pause");
Beep(1000,100);
system ("cls");

for (a=0;a<11;a++) 
{
 system ("color f0");
 system ("color 0f");
 Beep(1000,100);		
}

c=0;

while (!(b=='N' || b=='S'))
{
puts ("\n");
puts ("Q D V X G E J Y K L\n\a");
puts ("A sua letra aparece na linha acima? (digite sim ou nao e aperte enter) \n");
scanf ("%c",&b);
Beep(1000,100);
b = toupper(b);
if (b=='S')
c = c+1;
fflush (stdin);
system ("cls");
}

b='0';
while (!(b=='N' || b=='S'))
{
system ("color f0");
puts ("\n");
puts ("A D C J N E U X M B\n\a");
puts ("A sua letra aparece na linha acima? (digite sim ou nao e aperte enter) \n");
scanf ("%c",&b);
Beep(1000,100);
b = toupper(b);
if (b=='S')
c = c+2;
fflush (stdin);
system ("cls");
}

b='0';
while (!(b=='N' || b=='S'))
{
system ("color 0f");
puts ("\n");
puts ("F J C X T Y U V I R\n\a");
puts ("A sua letra aparece na linha acima? (digite sim ou nao e aperte enter) \n");
scanf ("%c",&b);
Beep(1000,100);
b = toupper(b);
if (b=='S')
c = c+4;
fflush (stdin);
system ("cls");
}

b='0';
while (!(b=='N' || b=='S'))
{
system ("color f0");
puts ("\n");
puts ("P H G N E T Y U R J\n\a");
puts ("A sua letra aparece na linha acima? (digite sim ou nao e aperte enter) \n");
scanf ("%c",&b);
Beep(1000,100);
b = toupper(b);
if (b=='S')
c = c+8;
fflush (stdin);
system ("cls");
system ("color 0f");
}

for (a=0;a<11;a++) 
{
 system ("color 0f");
 system ("color f0");
 Beep(1000,100);		
}

puts ("\n");
SetCursorPos(884,507);
if (c==0) MessageBox(0,"Você não escolheu nenhuma letra!","A SUA LETRA",MB_OK|MB_ICONWARNING);
if (c==1) MessageBox(0,"Você escolheu a letra Q!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==2) MessageBox(0,"Você escolheu a letra A!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==3) MessageBox(0,"Você escolheu a letra D!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==4) MessageBox(0,"Você escolheu a letra F!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==5) MessageBox(0,"Você escolheu a letra V!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==6) MessageBox(0,"Você escolheu a letra C!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==7) MessageBox(0,"Você escolheu a letra X!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==8) MessageBox(0,"Você escolheu a letra H!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==9) MessageBox(0,"Você escolheu a letra G!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==10) MessageBox(0,"Você escolheu a letra N!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==11) MessageBox(0,"Você escolheu a letra E!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==12) MessageBox(0,"Você escolheu a letra T!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==13) MessageBox(0,"Você escolheu a letra Y!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==14) MessageBox(0,"Você escolheu a letra U!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);
if (c==15) MessageBox(0,"Você escolheu a letra J!","A SUA LETRA",MB_OK|MB_ICONINFORMATION);


return (0);

}


