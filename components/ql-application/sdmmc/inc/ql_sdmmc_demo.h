/*=================================================================

						EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

WHEN			  WHO		  WHAT, WHERE, WHY
------------	 -------	 -------------------------------------------------------------------------------

=================================================================*/


#ifndef _SDMMCDEMO_H
#define _SDMMCDEMO_H


#ifdef __cplusplus
extern "C" {
#endif

/*===========================================================================
 * Enumeration Definition
 ===========================================================================*/

/*===========================================================================
 * Struct
 ===========================================================================*/
typedef int    QlSDMMCStatus;
typedef void * ql_task_t;

/*===========================================================================
 * Functions declaration
 ===========================================================================*/
void ql_sdmmc_app_init(void);

#ifdef __cplusplus
} /*"C" */
#endif

#endif /* _SDMMCDEMO_H */


