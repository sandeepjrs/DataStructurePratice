#include <stdio.h>
#include <stdlib.h>



struct term
{
    int coff;
    int exp;
    };

struct poly
{
   struct term t[10];
   int noofterm;
};



/* inititalize the poly element */

void initPoly(struct poly *p,int pOlySize)
{
    int i;
    p->noofterm=0;

    for(i=0;i<pOlySize;i++)
    {
        p->t[i].coff=0;
        p->t[i].exp=0;
    }

}

/*add the poly in the array*/

void polyAppend(struct poly *p, int c, int e)
{
    p->t[p->noofterm].coff=c;
    p->t[p->noofterm].exp=e;

    (p->noofterm)++;



}

void polyAdd(struct poly *p1, struct poly *p2,struct poly *p3)
{

 for(p3->noofterm=0;p3->noofterm<p1->noofterm;(p3->noofterm)++)
 {
     p3->t[p3->noofterm].coff=p1->t[p3->noofterm].coff+p2->t[p3->noofterm].coff;
     p3->t[p3->noofterm].exp=p1->t[p3->noofterm].exp;
 }

}

void displayPoly(struct poly *p)
{
    int i;

    for(i=0;i<p->noofterm;i++)
    {
        printf("%dX^%d +", p->t[i].coff,p->t[i].exp);

    }

    printf("\n");

}



int main()
{
   int polySize;
   struct poly p1,p2,p3;

   printf("\nplease enter the maximum degree of the polynominal \n");
   scanf("%d",&polySize);

   initPoly(&p1,polySize);
   initPoly(&p2,polySize);
   initPoly(&p3,polySize);


   polyAppend(&p1,1,2);
   polyAppend(&p1,2,1);
   polyAppend(&p1,3,0);

   displayPoly(&p1);

   polyAppend(&p2,4,2);
   polyAppend(&p2,5,1);
   polyAppend(&p2,6,0);

   displayPoly(&p2);

   polyAdd(&p1,&p2,&p3);

   printf("\n the addition of the polynoinal\n");

   displayPoly(&p3);


}
