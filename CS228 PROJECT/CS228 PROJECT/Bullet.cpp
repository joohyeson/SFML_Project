/*--------------------------------------------------------------
Copyright (C) 2020 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Bullet.h
Purpose: This is Bullet header file.
Project: CS225
Author: Daeun Jeong
Creation date: 21/07/2020
-----------------------------------------------------------------*/

#include "Bullet.h"
#include "Engine.h" //Engine::GetWindow()

constexpr float DEGREE_TO_RADIAN = 0.017453f;

Bullet::Bullet()
{
    name = "bullet";
}

void Bullet::Update()
{
    dx = cos(angle * DEGREE_TO_RADIAN) * 6;
    dy = sin(angle * DEGREE_TO_RADIAN) * 6;
    // angle+=rand()%7-3;  /*try this*/
    x += dx;
    y += dy;

    if (x > Engine::GetWindow().GetSize().x || x < 0 ||
        y > Engine::GetWindow().GetSize().y || y < 0)
    {
        isAlive = 0;
    }
}