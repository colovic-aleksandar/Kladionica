#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
char unos1;
char unos2;
char unos3;
int i ,kockica, s=0, s1=0;
srand(time(NULL));
printf("Dobrodsli u kladionicu. Za pravila igre pritisnite p, za novu igru pretisnite n :\n ");
scanf("%c", &unos1);
while (unos1!='x')
{


switch(unos1)
{

case 'p' :printf("Korisnik baca 3 kockice. Asistent(racunar) sabira sumu dobijenih brojeva.\n");
    printf("Nakon sto ste videli vas zbir, pogadjate da li ce protivnik(opet racunar) imati veci ili manji zbir ili jednak vasem. Ako unesete los karakter gubite pravo na kladjenje \n");
    printf("Pobednik ste ako pogodite\n");
    printf("Za izlazak iz igre pritisnite x, za pocetak igre pritisnite n :\n ");
scanf(" %c", &unos1); break;

case 'n' :
printf("Dobrodosli u novu igru! ");
printf("Pritisnite taster b za novo bacanje:\n");
scanf(" %c", &unos2);
if(unos2=='b')
{
  for (i=0;i<3;i++)
  {
    kockica = (rand()%6+1);
    printf("Kockica %d je broj %d \n", i+1, kockica);
    s= s+kockica;
  }

}
else
{

    printf("Pogresan unos");unos1='x';
}
printf("Suma vasih kockica je %d\n", s);
printf("Da li ce suma protivnika biti veca manja ili jednaka vasoj?\n");
printf("Za vecu pritisnite v za manju pritisnite m za jednaku pritisnite j\n");
scanf(" %c", &unos3);
if (unos3 !='v'&& unos3 !='m' && unos3 !='j')
    {
         printf("Vas unos je los i time ste propustili potez i izgubili igru \n");unos1='x';break;
    }
printf("Protivnik je na potezu:\n");
for (i=0;i<3;i++)
  {
    kockica = (rand()%6+1);
    printf("Kockica %d je broj %d \n", i+1, kockica);
    s1= s1+kockica;
  }
printf("Suma protivnika je %d\n", s1);
  if(s1>s && unos3=='v')
  {
      printf("Svaka cast! Pobedili ste! \n");unos1='x';
  }
   else if(s1<s && unos3=='m')
  {
      printf("Svaka cast! Pobedili ste! \n");unos1='x';
  }

   else if(s1==s && unos3=='j')
  {
      printf("Svaka cast! Pobedili ste! \n");unos1='x';
  }
   else if(s1>s && unos3!='v')
  {
        printf("Zao nam je, Niste pobedili \n");unos1='x';
   }
   else if(s1<s && unos3!='m')
  {
       printf("Zao nam je, Niste pobedili\n");unos1='x';
  }

   else if(s1==s && unos3!='j')
  {
       printf("Zao nam je, Niste pobedili\n");unos1='x';
  }

break;



default:printf("Pogresan unos \n",s1); unos1='x'; break;

}

}
}






