#include "Material.h"

namespace gfx
{

Material::Material(MaterialProperties&& materialInitProperties)
    : m_materialProperties(std::move(materialInitProperties))
{
}





}