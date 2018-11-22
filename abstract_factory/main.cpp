#include "newspaper.h"
#include "broadsheet.h"
#include "tabloid.h"


int main(){

  Newspaper newspaper_broadsheet(new BroadSheetFactory);
  newspaper_broadsheet.Print();

  Newspaper newspaper_tabloid(new TabloidFactory);
  newspaper_tabloid.Print();
}
