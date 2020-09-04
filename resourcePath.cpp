#include "resourcePath.hpp"

resourceCollector::resourceCollector()
	: m_path {"./resources/"}
{

}

const std::string& resourceCollector::getResourcePath()
{
	return m_path;
}