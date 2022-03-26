#include "pch.h"
#include "ImageProcessing.h"

bool File::ReadFile(const char* filename, char* dst, long long* filesize)
{
	std::streampos size;
	std::ifstream file(filename, std::ios::in | std::ios::binary | std::ios::ate);
	if (file.is_open())
	{
		size = file.tellg();
		*filesize = (int)size;
		file.seekg(0, std::ios::beg);
		file.read(dst, size);
		file.close();
		std::cout << "the entire file content is in memory";
		return true;
	}
	else 
	{
		std::cout << "Unable to open file";
		return false;
	}
}


bool File::WriteFile(const char* filename, char* src, long long filesize)
{
	std::streampos size = (std::streampos)filesize;
	std::ofstream file(filename, std::ios::out | std::ios::binary);

	if (file.is_open())
	{
		file.write(src, size);
		file.close();
		std::cout << "the memory data are in file";
		return true;
	}
	else
	{
		std::cout << "Unable to open file";
		return false;
	}
}

bool ImageProcess::InvertImageColor(ImageFIleFormat fileformat, char* src, long long filesize)
{
	char* start_src = src;
	bool ret = false;

	switch (fileformat)
	{

	case ImageFIleFormat::BITMAP_FILE:
		src += BMP_HEADER_SIZE;
		for (long long i = 0; i < filesize - BMP_HEADER_SIZE; ++i)
		{
			*src = 255 - *src;
			++src;
		}
		src = start_src;
		ret = true;
		break;

	default:
		break;
	}

	return ret;
}