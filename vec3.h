#ifndef VEC3_H
#define VEC3_H

#include "yaml-cpp/yaml.h"

class Vec3
{
public:
    double x, y, z;
};

namespace YAML {
    template<>
    struct convert<Vec3> {
        static Node encode(const Vec3& rhs) {
            Node node;
            node.push_back(rhs.x);
            node.push_back(rhs.y);
            node.push_back(rhs.z);
            return node;
        }

        static bool decode(const Node& node, Vec3& rhs) {
            if(!node.IsSequence() || node.size() != 3) {
              return false;
            }

            rhs.x = node[0].as<double>();
            rhs.y = node[1].as<double>();
            rhs.z = node[2].as<double>();
            return true;
        }
    };
}
#endif // VEC3_H




