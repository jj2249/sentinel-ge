#include "input.hpp"

InputHandler::InputHandler()
// default constructor. initialise input states at 0
{
	clearBitset(m_previousInputState);
	clearBitset(m_currentInputState);
}

std::bitset<32> InputHandler::clearBitset(std::bitset<32> bitset)
// and the bitset with 32 zeroes to clear it
{
	return (bitset & m_zero);
}

bool InputHandler::checkKeyPressed(KeyPos position)
// checks the input mask to see if the bit is active or not, i.e. if the key is pressed or not
{
	return m_currentInputState.test(static_cast<size_t>(position));
}

void InputHandler::updateInputState()
// updates the currentInputState member variable based on the current keys pressed. Sets to True if the key is pressed, otherwise clears
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_currentInputState.set(static_cast<size_t>(KeyPos::Left));
	}

	else
	{
		m_currentInputState.reset(static_cast<size_t>(KeyPos::Left));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{		
		m_currentInputState.set(static_cast<size_t>(KeyPos::Right));
	}

	else
	{
		m_currentInputState.reset(static_cast<size_t>(KeyPos::Right));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{		
		m_currentInputState.set(static_cast<size_t>(KeyPos::Up));
	}

	else
	{
		m_currentInputState.reset(static_cast<size_t>(KeyPos::Up));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{		
		m_currentInputState.set(static_cast<size_t>(KeyPos::Down));
	}

	else
	{
		m_currentInputState.reset(static_cast<size_t>(KeyPos::Down));
	}
}