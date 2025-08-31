/**
 * @file BitmapStore.hpp
 * @brief This file contains the declaration of the BitmapStore class.
 * The BitmapStore class is responsible for managing and storing bitmap
 * textures used in the application. It provides functionality to load,
 * retrieve, and manage bitmap textures efficiently.
 * @version 1.0
 * @date 2024-08-31
 * @author Oussama Amara
 */
#pragma once
#ifndef BITMAP_STORE_H
#define BITMAP_STORE_H

#include <SFML/Graphics.hpp>
#include <map>
#include <cassert>

class BitmapStore
{
private:
	std::map<std::string, sf::Texture> m_BitmapsMap;
	static BitmapStore* m_s_Instance;

public:
	BitmapStore();
	static sf::Texture& getBitmap(std::string const& filename);
	static void addBitmap(std::string const& filename);
};
#endif