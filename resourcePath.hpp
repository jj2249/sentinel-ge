#ifndef resource_path_hpp
#define resource_path_hpp

#include <string>
#include <string_view>

class resourceCollector
{
public:
	resourceCollector();
	const std::string& getResourcePath();

private:
	std::string m_path;
};

#endif