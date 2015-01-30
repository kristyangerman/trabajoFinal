# include <conio.h>
#include <iostream.h>
#include <fstream>
main()
{
	int s,r=1;
   char seleccion,repetir;
	while (r==1)
	{
		clrscr();
		textcolor(YELLOW);
		gotoxy(15,1),  cprintf("             PROYECTO FINAL");
      gotoxy(15,3),  cprintf("ESCUELA SUPERIOR POLITECNICA DE CHIMBORAZO");
      gotoxy(15,5),  cprintf("        LENGUJAE DE PROGRAMACION");
      gotoxy(15,7),  cprintf("              INTEGRANTES:");
      textcolor(WHITE);
      gotoxy(1,8), cprintf(" CRISTIAN CHAFLA   (691)");
      gotoxy(1,9), cprintf(" SEBASTIAN ARCOS   (683)");
      gotoxy(1,10), cprintf(" PATRICIO GALLEGOS (676)");
      gotoxy(1,11), cprintf("1. GENERAR TABLAS DE VERDAD CON DOS ENTRADAS");
		gotoxy(1,13), cprintf("2. VER TABLAS CON DOS ENTRADAS");
		gotoxy(1,14), cprintf("3. GENERAR Y VER TABLAS CON N ENTRADAS");
		gotoxy(1,15), cprintf("4. Salir ");
		textcolor(GREEN);
		gotoxy(15,18), cprintf("OPERACION A REALIZAR");
		gotoxy(15,20);
      seleccion=getche();
		textcolor(YELLOW);
	   gotoxy(10,23);
		switch(seleccion)
		{
    case '1':
    {
ofstream almacenamiento("C:/Users/Kristyan/LITERAL 1/TABLAS DE VERDAD.txt",ios::app) ;
   almacenamiento<<"OR"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      0 "<< "\n";
     almacenamiento<<"     0      1      1"<< "\n";
     almacenamiento<<"     1      0      1"<< "\n";
     almacenamiento<<"     1      1      1"<< "\n";
     almacenamiento<<"AND"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      0 "<< "\n";
     almacenamiento<<"     0      1      0"<< "\n";
     almacenamiento<<"     1      0      0"<< "\n";
     almacenamiento<<"     1      1      1"<< "\n";
     almacenamiento<<"XOR"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      0 "<< "\n";
     almacenamiento<<"     0      1      1"<< "\n";
     almacenamiento<<"     1      0      1"<< "\n";
     almacenamiento<<"     1      1      0"<< "\n";
     almacenamiento<<"NAND"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      1 "<< "\n";
     almacenamiento<<"     0      1      1"<< "\n";
     almacenamiento<<"     1      0      1"<< "\n";
     almacenamiento<<"     1      1      0"<< "\n";
     almacenamiento<<"NOR"<< "\n";
     almacenamiento<<"     A      B      S"<< "\n"<< "\n";
     almacenamiento<<"     0      0      1 "<< "\n";
     almacenamiento<<"     0      1      0"<< "\n";
     almacenamiento<<"     1      0      0"<< "\n";
     almacenamiento<<"     1      1      0"<< "\n";
     almacenamiento<<"NOT"<< "\n";
     almacenamiento<<"     A            S"<< "\n"<< "\n";
     almacenamiento<<"     0            1 "<< "\n";
     almacenamiento<<"     0            1"<< "\n";
     almacenamiento<<"     1            0"<< "\n";
     almacenamiento<<"     1            0"<< "\n";
     almacenamiento<<"BUFFER"<< "\n";
     almacenamiento<<"     A            S"<< "\n"<< "\n";
     almacenamiento<<"     0            0 "<< "\n";
     almacenamiento<<"     1            1"<< "\n";
almacenamiento.close();
getch();
}break;
case '2':
 {
int n;
cout<<"INGRESAR EL NUMERO DE LA TABLA REQUERIDA "<< "\n";
cout<<" 1 --------OR "<< "\n";
cout<<" 2 --------AND "<< "\n";
cout<<" 3 --------XOR "<< "\n";
cout<<" 4 --------NAND "<< "\n";
cout<<" 5 --------NOR "<< "\n";
cout<<" 6 --------NOT "<< "\n";
cout<<" 7 --------BUFFER "<< "\n";

cin>>n;
if(n == 1)
   {
     cout<<"OR"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      0 "<< "\n";
     cout<<"     0      1      1"<< "\n";
     cout<<"     1      0      1"<< "\n";
     cout<<"     1      1      1"<< "\n";
   }
else if(n == 2)
   {
     cout<<"AND"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      0 "<< "\n";
     cout<<"     0      1      0"<< "\n";
     cout<<"     1      0      0"<< "\n";
     cout<<"     1      1      1"<< "\n";
      }
      else if(n == 3)
   {
     cout<<"XOR"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      0 "<< "\n";
     cout<<"     0      1      1"<< "\n";
     cout<<"     1      0      1"<< "\n";
     cout<<"     1      1      0"<< "\n";
      }
      else if(n == 4)
   {
     cout<<"NAND"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      1 "<< "\n";
     cout<<"     0      1      1"<< "\n";
     cout<<"     1      0      1"<< "\n";
     cout<<"     1      1      0"<< "\n";
      }
      else if(n == 5)
   {
     cout<<"NOR"<< "\n";
     cout<<"     A      B      S"<< "\n"<< "\n";
     cout<<"     0      0      1 "<< "\n";
     cout<<"     0      1      0"<< "\n";
     cout<<"     1      0      0"<< "\n";
     cout<<"     1      1      0"<< "\n";
      }
           else if(n == 6)
   {
     cout<<"NOT"<< "\n";
     cout<<"     A            S"<< "\n"<< "\n";
     cout<<"     0            1 "<< "\n";
     cout<<"     0            1"<< "\n";
     cout<<"     1            0"<< "\n";
     cout<<"     1            0"<< "\n";
      }
                 else if(n == 7)
   {
     cout<<"BUFFER"<< "\n";
     cout<<"     A            S"<< "\n"<< "\n";
     cout<<"     0            0 "<< "\n";
     cout<<"     1            1"<< "\n";

      }

    getch();
}


         break;
			case '3':
         {
int i=1,j=1,n,s;
bool v[10],r=0,r1=1;

  cout<<"INTRODUCIR EL NUMERO DE VARIABLES :";

    cin>>n;
     cout<<"INTRODUCIR LA OPERACION REQUERIDA :";
     cout<<"1-------OR :";
     cout<<"2-------AND :";
    cin>>s;
if (s==1)
{
while(i<=n)
{
 cout<<"INTRODUCIR EL VALOR DE VERDAD CORRESPONDIENTE ";
cin>>v[i];
i++;
}
while (j<=n)
{
 r=(r||v[j]);
 j++ ;
}
cout<<"EL VALOR DE VERDAD ES ";
 cout << r << endl;
}
else
{
while(i<=n)
{
 cout<<"INTRODUCIR EL VALOR DE VERDAD CORRESPONDIENTE ";
cin>>v[i];
i++;
}
while (j<=n)
{
 r1=(r1&&v[j]);
 j++ ;
}
cout<<"EL VALOR DE VERDAD ES ";
 cout << r1 << endl;


}

getch();
}
break;
         case '4': r=0;break;
			default:
			{
				cprintf("Opcion Invalida");
				getch();
			}
		}
	}
}
