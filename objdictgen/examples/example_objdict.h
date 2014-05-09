
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef EXAMPLE_OBJDICT_H
#define EXAMPLE_OBJDICT_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 example_objdict_valueRangeTest (UNS8 typeValue, void * value);
const indextable * example_objdict_scanIndexOD (CO_Data *d, UNS16 wIndex, UNS32 * errorCode);

/* Master node data struct */
extern CO_Data example_objdict_Data;
extern UNS8 Time_seconds;		/* Mapped at index 0x2000, subindex 0x01 */
extern UNS8 Time_minutes;		/* Mapped at index 0x2000, subindex 0x02 */
extern UNS8 Time_hours;		/* Mapped at index 0x2000, subindex 0x03 */
extern UNS8 Time_days;		/* Mapped at index 0x2000, subindex 0x04 */
extern UNS32 canopenErrNB;		/* Mapped at index 0x2001, subindex 0x00*/
extern UNS32 canopenErrVal;		/* Mapped at index 0x2002, subindex 0x00*/
extern UNS8 strTest[10];		/* Mapped at index 0x2003, subindex 0x00*/

#endif // EXAMPLE_OBJDICT_H
