/****************************************************************************
Copyright (c) 2011      Zynga Inc.
Copyright (c) 2012 		cocos2d-x.org
Copyright (c) 2013-2016 Chukong Technologies Inc.
Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.

http://www.cocos2d-x.org

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#pragma once

/// @cond DO_NOT_SHOW

#include "platform/CCPlatformMacros.h"

/**
 * @addtogroup renderer
 * @{
 */

NS_CC_BEGIN

#ifdef BUILD_COCOS_WITH_OPENGL
extern CC_DLL const char* positionColor_vert;                  
extern CC_DLL const char* positionColor_frag;                  
extern CC_DLL const char* positionTexture_vert;                
extern CC_DLL const char* positionTexture_frag;                
extern CC_DLL const char* positionTextureColor_vert;           
extern CC_DLL const char* positionTextureColor_frag;           
extern CC_DLL const char* positionTextureColorAlphaTest_frag;  
extern CC_DLL const char* label_normal_frag;                   
extern CC_DLL const char* label_distanceNormal_frag;           
extern CC_DLL const char* labelOutline_frag;                   
extern CC_DLL const char * labelDistanceFieldGlow_frag;
extern CC_DLL const char* positionColorLengthTexture_vert;       
extern CC_DLL const char* positionColorLengthTexture_frag;       
extern CC_DLL const char* positionColorTextureAsPointsize_vert;  
extern CC_DLL const char* position_vert;                         
extern CC_DLL const char* layer_radialGradient_frag;  
extern CC_DLL const char* grayScale_frag;             
extern CC_DLL const char* positionUColor_vert;  
extern CC_DLL const char* positionUColor_frag;  
extern CC_DLL const char* etc1_frag;            
extern CC_DLL const char* etc1Gray_frag;        
extern CC_DLL const char* cameraClear_vert;     
extern CC_DLL const char* cameraClear_frag;     
#endif

#ifdef BUILD_COCOS_WITH_DAGOR
constexpr const char* positionColor_vert = "positionColor_vert";                  
constexpr const char* positionColor_frag = "positionColor_frag";                  
constexpr const char* positionTexture_vert = "positionTexture_vert";                
constexpr const char* positionTexture_frag = "positionTexture_frag";                
constexpr const char* positionTextureColor_vert = "positionTextureColor_vert";           
constexpr const char* positionTextureColor_frag = "positionTextureColor_frag";           
constexpr const char* positionTextureColorAlphaTest_frag = "positionTextureColorAlphaTest_frag";  
constexpr const char* label_normal_frag = "label_normal_frag";                   
constexpr const char* label_distanceNormal_frag = "label_distanceNormal_frag";           
constexpr const char* labelOutline_frag = "labelOutline_frag";                   
constexpr const char * labelDistanceFieldGlow_frag = "labelDistanceFieldGlow_frag";
constexpr const char* positionColorLengthTexture_vert = "positionColorLengthTexture_vert";       
constexpr const char* positionColorLengthTexture_frag = "positionColorLengthTexture_frag";       
constexpr const char* positionColorTextureAsPointsize_vert = "positionColorTextureAsPointsize_vert";  
constexpr const char* position_vert = "position_vert";                         
constexpr const char* layer_radialGradient_frag = "layer_radialGradient_frag";  
constexpr const char* grayScale_frag = "grayScale_frag";             
constexpr const char* positionUColor_vert = "positionUColor_vert";  
constexpr const char* positionUColor_frag = "positionUColor_frag";  
constexpr const char* etc1_frag = "etc1_frag";            
constexpr const char* etc1Gray_frag = "etc1Gray_frag";        
constexpr const char* cameraClear_vert = "cameraClear_vert";     
constexpr const char* cameraClear_frag = "cameraClear_frag";     
#endif

NS_CC_END
/**
 end of support group
 @}
 */
/// @endcond