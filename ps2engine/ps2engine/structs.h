#pragma once

#include <windows.h>
#include <windowsx.h>
#include <d3d11.h>
#include <d3d10.h>
#include <DirectXMath.h>

struct float2 {
    FLOAT x;
    FLOAT y;
};

struct float3 {
    FLOAT x;
    FLOAT y;
    FLOAT z;
};

struct float4 {
    FLOAT x;
    FLOAT y;
    FLOAT z;
    FLOAT w;
};

struct VERTEX
{
    FLOAT X, Y, Z;      // position
    DirectX::XMFLOAT4 Color;    // color
};