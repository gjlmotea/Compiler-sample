/* prog 13-1,................. */

double area(int),circumf(int);
double volume(int),surface(int);
int main(void)
{
   int r,item;

   printf("(1) ...	(2) ...\n");
   printf("(3) ....	(4) .....\n");
   printf(".........:");
   do
      scanf("%d",&item);
   while((item>4)||(item<1));
   do
   {
      printf("....:");
      scanf("%d",&r);
   } while(r<=0);
   printf("\n");
   switch (item)
   {
      case 1:printf("..=%d,...=%.2f\n",r,area(r));
             break;
      case 2:printf("..=%d,...=%.2f\n",r,circumf(r));
             break;
      case 3:printf("..=%d,....=%.2f\n",r,volume(r));
             break;
      case 4:printf("..=%d,.....=%.2f\n",r,surface(r));
   }
   return 0;
}
 
double area(int r)	/* ....area()...... */
{
   return (PI*r*r);
}
 
double volume(int r)/* ....volume()....... */
{
   return (4/3*PI*r*r*r);
}
 
double surface(int r)/* ....surface()........ */
{
   return (4*PI*r*r);
}
 
double circumf(int r)/* ....circumf()...... */
{
   return (2*PI*r);
}
