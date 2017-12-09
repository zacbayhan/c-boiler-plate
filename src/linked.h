#ifndef LINKED_H
#define LINKED_H

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>



  typedef struct sEmployee {
    char name[50];
    struct sEmployee *next;
  } tEmployee;


  typedef struct sCompany {
    char name[50];
    tEmployee *firstEmployee;
    struct sCompany *next;
  } tCompany;


  void *chkMalloc (size_t sz);


  void addCompany(tCompany **first, char *name);


  void addEmployee(tCompany *first, char *name);


  void dumpDetails (tCompany *currCompany);


#endif
