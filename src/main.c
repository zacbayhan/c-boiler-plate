#include "main.h"

int main(int argc, char *argv[]) {

  tCompany *firstCompany = NULL;

  addCompany(&firstCompany, "tenable");
    addEmployee(firstCompany, "Zack Bayhan");
    addEmployee(firstCompany, "Har-Dog");

  addCompany(&firstCompany, "cyberArc");
    addEmployee(firstCompany, "Sandy");
    addEmployee(firstCompany, "O-Dog");

  dumpDetails(firstCompany);

  return 0;
}
