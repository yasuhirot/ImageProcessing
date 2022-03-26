#pragma once
#include <iostream>     // std::ios, std::istream, std::cout
#include <fstream>      // std::filebuf


enum ImageFIleFormat
{
    BITMAP_FILE = 0,
    JPG_FILE,
    PNG_FILE,
};

#define BMP_HEADER_SIZE 54 //Byte

namespace BMP
{
    struct BMPFileHeader
    {
        char Signature[2];
        char FileSize[4];
        char Reserved[4];
        char DataOffset[4];
        char Size[4];
        char Width[4];
        char Height[4];
        char Planes[2];
        char BitCount[2];
        char Compression[4];
        char ImageSize[4];
        char XpixelsPerM[4];
        char YpixelsPerM[4];
        char ColorsUsed[4];
        char ColorsImportant[4];
    };

};

class File
{
public:
    static bool ReadFile(const char* filename, char* dst, long long* filesize);
    static bool WriteFile(const char* filename, char* src, long long filesize);

};

class ImageProcess
{
public:
    static bool InvertImageColor(ImageFIleFormat fileformat, char* src, long long filesize);
};