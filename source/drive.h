/*  $Header: /dist/CVS/fzclips/src/drive.h,v 1.3 2001/08/11 21:05:08 dave Exp $  */

   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.05  04/09/97            */
   /*                                                     */
   /*                  DRIVE HEADER FILE                  */
   /*******************************************************/

/*************************************************************/
/* Purpose: Handles join network activity associated with    */
/*   with the addition of a data entity such as a fact or    */
/*   instance.                                               */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*************************************************************/

#ifndef _H_drive

#define _H_drive

#ifndef _H_expressn
#include "expressn.h"
#endif
#ifndef _H_match
#include "match.h"
#endif
#ifndef _H_network
#include "network.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _DRIVE_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

   void                           NetworkAssert(struct partialMatch *,struct joinNode *,int);
   void                           PNLDrive(struct joinNode *,struct partialMatch *);
   BOOLEAN                        EvaluateJoinExpression(struct expr *,struct partialMatch *,struct partialMatch *,struct joinNode *);

#ifndef _DRIVE_SOURCE_
   extern int                     JoinOperationInProgress;
#endif

#endif





