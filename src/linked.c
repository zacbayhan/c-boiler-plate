#include "linked.h"


void *chkMalloc(size_t sz) {
    void *mem = malloc(sz);
    // Just fail immediately on error.
    if (mem == NULL) {
        printf ("Out of memory! Exiting.\n");
        exit (1);
    }
    // Otherwise we know it worked.
    return mem;
}

void addCompany(tCompany **first, char *name) {
    tCompany *newest = chkMalloc(sizeof(*newest));
    strcpy (newest->name, name);
    newest->next = *first;
    *first = newest;
}

void addEmployee(tCompany *first, char *name) {
    tEmployee *newest = chkMalloc(sizeof(*newest));
    strcpy (newest->name, name);
    newest->next = first->firstEmployee;
    first->firstEmployee = newest;

}

void dumpDetails (tCompany *currCompany){
    while (currCompany != NULL) {
        printf ("%s has:\n", currCompany->name);

        tEmployee *currEmp = currCompany->firstEmployee;
        if (currEmp == NULL) {
            printf ("\t<<nothing>>\n");
        } else {
            while (currEmp != NULL) {
                printf ("   %s\n", currEmp->name);
                currEmp = currEmp->next;
            }
        }
      currCompany = currCompany->next;
    }
}
