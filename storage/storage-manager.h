#ifndef REPLICA_STORAGE_STORAGE_MANAGER_H
#define REPLICA_STORAGE_STORAGE_MANAGER_H

#include <unordered_map>

namespace replica {
namespace storage {

class StorageManager {
public:
  void set(const std::string& key, const std::string& value);
  std::string get(const std::string& key);

private:
  std::unordered_map<std::string, std::string> m_hashtable;
};

} //storage
} //clone

#endif //REPLICA_STORAGE_STORAGE_MANAGER_H
