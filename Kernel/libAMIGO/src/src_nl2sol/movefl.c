/* movefl.f -- translated by f2c (version 20100827).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* Subroutine */ int movefl_(integer *n, logical *a, logical *b)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__;


/*     MOVEFL MOVES N LOGICAL ITEMS FROM A TO B */
/*     USING A FORWARDS DO LOOP */


    /* Parameter adjustments */
    --b;
    --a;

    /* Function Body */
    if (*n <= 0) {
	return 0;
    }

    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
/* L10: */
	b[i__] = a[i__];
    }

    return 0;

} /* movefl_ */

