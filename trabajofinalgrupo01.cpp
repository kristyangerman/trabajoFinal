# include <conio.h>
#include <iostream.h>
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
      gotoxy(15,7),  cprintf("              INTEGRANTES");
      gotoxy(1,12), cprintf("1. GENERAR TABLAS DE VERDAD");
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
    bool p, q;

    cout<<"Introducir el  primer valor de verdad   :";

    cin>>p;

    cout<<"Introduce el  segundo valor de verdad   :";

    cin>>q;

    cout<<"Introducir la operacion logica :    ";

    cout<<" 1-----> OR"<<"   2------>AND   ";

    int unsigned operacion_logica;

    cin>>operacion_logica;
    cout<<"  EL VALOR DE VERDAD ES :  ";

    bool resultado;
    switch (operacion_logica)
    {

        case (1):
            resultado  = (p||q);
            break;

        case (2):
            resultado  = (p&&q);
            break;
    }
    cout << resultado << endl;
    getch() ;
    }break;
			case '2': cprintf("");getch();break;
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
