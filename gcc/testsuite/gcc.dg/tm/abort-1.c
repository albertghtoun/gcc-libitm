/* { dg-do compile } */

void f(void)
{
  __tm_abort;		/* { dg-error "not within" } */
}
