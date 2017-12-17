#include "storage-manager.h"

void replica::storage::StorageManager::set(const std::string& key, const std::string& value) {
  if(key.empty() || value.empty()) {
    return;
  }
  m_hashtable[key] = value;
}

std::string replica::storage::StorageManager::get(const std::string& key) {
  if(key.empty()) {
    return "";
  }
  return m_hashtable[key];
}
