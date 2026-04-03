#include "MaterialManager.h"

namespace gfx
{


MaterialManager::MaterialManager()
    : ResourceManager<Material>(nullptr, std::vector<std::string>()) // Doesn't need file access
{
    
}

void MaterialManager::registerElement(const std::string& key, Material&& newElement)
{
    if (!m_elements.contains(key))
    {
        m_elements[key] = std::make_unique<Material>(std::move(newElement));
    }
    else
    {
        #ifdef ENABLE_DEBUG_MESSAGES
            std::cout << "ERROR::Material name already exists - try different key - doing nothing." << std::endl;
        #endif
    }
}

}