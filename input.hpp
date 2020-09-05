#ifndef input_hpp
#define input_hpp

#include <bitset>
#include <SFML/Graphics.hpp>



class InputHandler
{
public:
	// encode key positions in bitmask
	enum class KeyPos
	{
		Esc,
		Left,
		Right,
		Up,
		Down
	};

	InputHandler();
	std::bitset<32> clearBitset(std::bitset<32> bitset);
	bool checkKeyPressed(KeyPos position);
	void updateInputState();

private:
	std::bitset<32> m_currentInputState;
	std::bitset<32> m_previousInputState;
	const std::bitset<32> m_zero {0x0};
};

#endif