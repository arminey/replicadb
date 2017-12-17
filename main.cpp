#include <iostream>
#include "storage/storage-manager.h"


int main() {
  replica::storage::StorageManager obj;
  obj.set("Armine", "Yepremyan");
  std::cout << obj.get("Armine");
  return 0;
}
