/* { dg-do assemble } */
/* { dg-options "-march=armv8-a+crypto -save-temps" } */

/* Check that "+nothing" clears the ISA flags.  */

__attribute__ ((target ("+nothing")))
int
foo (int a)
{
  return a + 1;
}

/* { dg-final { scan-assembler-times "\\.arch armv8-a\n" 1 } } */
