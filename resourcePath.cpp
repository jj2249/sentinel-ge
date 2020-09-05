#include "resourcePath.hpp"

resourceCollector::resourceCollector()
	: m_path {"./resources/"}
// constructor to instantiate path to resources
{

}

const std::string& resourceCollector::getResourcePath()
// helper function for accessing game resources
{
	return m_path;
}