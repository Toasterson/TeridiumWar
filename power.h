#ifndef POWER_H
#define POWER_H

#include "yaml-cpp/yaml.h"

class Power
{
public:
    std::string name;
    int damage;
};

namespace YAML {
template<>
struct convert<Power> {
  static Node encode(const Power& pwr) {
    Node node;
    node["damage"] = pwr.damage;
    node["name"] = pwr.name;
    return node;
  }

  static bool decode(const Node& node, Power& pwr) {
    pwr.name = node["name"].as<std::string>();
    pwr.damage = node["damage"].as<double>();
    return true;
  }
};
}

#endif // POWER_H


