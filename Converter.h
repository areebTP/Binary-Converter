#pragma once


class Converter

{
public:
	explicit Converter(const std::string& in)
		:binary{ in } {}

	
	int binTOdec16();
	int64_t binTOdec32();
	
	void decTOhex(int64_t);
	void hexTObin(const std::string&);
	void setDir(char dir) { direction = dir; }

private:
	std::string binary;
	char direction='r';
};
