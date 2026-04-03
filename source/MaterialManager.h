#ifndef MATERIAL_MANAGER_H
#define MATERIAL_MANAGER_H

#include "Material.h"
#include "ResourceManager.h"
#include <string>
#include <memory>
#include <unordered_map>
#include <iostream>
#include <optional>

namespace gfx
{

class MaterialManager : public ResourceManager<Material>
{
    public:
        MaterialManager();
        void registerElement(const std::string& key, Material&& newElement) override;
        void buildAndRegisterMaterial(const std::string& name, MaterialProperties&& properties);
};

}

#endif