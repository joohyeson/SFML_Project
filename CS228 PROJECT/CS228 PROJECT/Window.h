/*--------------------------------------------------------------
Copyright (C) 2020 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Window.h
Purpose: This is Window header file.
Project: CS280
Author: Juhye Son
Creation date: 21/07/2020
-----------------------------------------------------------------*/

#pragma once
#include "BasicDataTypes.h"
#include <SFML\Graphics\Color.hpp>
#include <SFML\Graphics\RenderWindow.hpp>

class Window
{
public:
    void Initialize(std::string windowName);
    void Update();
    void Resize(int newWidth, int newHeight);
    Vector2DInt GetSize();
    sf::RenderWindow& GetWindow(void);
    void Draw(const sf::Drawable& drawable);
    void Clear(sf::Color color);

private:
    Vector2DInt mScreenSize;
    sf::RenderWindow mRenderWindow;
};