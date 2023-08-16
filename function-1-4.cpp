#include <bits/stdc++.h>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    PersonList shallowCopy;
    shallowCopy.numPeople = pl.numPeople;
    shallowCopy.people = pl.people;
    return shallowCopy;
}