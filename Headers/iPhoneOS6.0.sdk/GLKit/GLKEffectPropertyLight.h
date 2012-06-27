/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKEffectProperty.h"
#import "GLKit-Structs.h"

@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty {
@private
	unsigned char _enabled;
	GLKVector4 _position;
	GLKVector4 _ambientColor;
	GLKVector4 _diffuseColor;
	GLKVector4 _specularColor;
	GLKVector3 _spotDirection;
	float _spotExponent;
	float _spotCutoff;
	float _constantAttenuation;
	float _linearAttenuation;
	float _quadraticAttenuation;
	GLKEffectPropertyTransform* _transform;
	GLKVector4 _positionEye;
	GLKVector3 _normalizedSpotDirectionEye;
	float _spotCutoffDegrees;
	unsigned long long* _effectDirtyUniforms;
	unsigned char _positionEyeStale;
	int _positionEyeLoc;
	int _ambientLoc;
	int _diffuseLoc;
	int _specularLoc;
	int _normalizedSpotDirectionEyeLoc;
	int _spotExponentLoc;
	int _spotCutoffLoc;
	int _constantAttenuationLoc;
	int _linearAttenuationLoc;
	int _quadraticAttenuationLoc;
	int _normalizeLoc;
	int _ambientTermLoc;
	int _lightIndex;
	int _lightingType;
	unsigned char _firstLight;
	GLKBigInt_s _allVshMasks;
	GLKBigInt_s _allFshMasks;
}
@property(readonly, assign, nonatomic) GLKBigInt_s allFshMasks;	// @synthesize=_allFshMasks
@property(readonly, assign, nonatomic) GLKBigInt_s allVshMasks;	// @synthesize=_allVshMasks
@property(assign, nonatomic) GLKVector4 ambientColor;	// @synthesize=_ambientColor
@property(assign, nonatomic) int ambientLoc;	// @synthesize=_ambientLoc
@property(assign, nonatomic) int ambientTermLoc;	// @synthesize=_ambientTermLoc
@property(assign, nonatomic) float constantAttenuation;	// @synthesize=_constantAttenuation
@property(assign, nonatomic) int constantAttenuationLoc;	// @synthesize=_constantAttenuationLoc
@property(assign, nonatomic) GLKVector4 diffuseColor;	// @synthesize=_diffuseColor
@property(assign, nonatomic) int diffuseLoc;	// @synthesize=_diffuseLoc
@property(assign, nonatomic) unsigned long long* effectDirtyUniforms;	// @synthesize=_effectDirtyUniforms
@property(assign, nonatomic) unsigned char enabled;	// @synthesize=_enabled
@property(assign, nonatomic) unsigned char firstLight;	// @synthesize=_firstLight
@property(readonly, assign, nonatomic) unsigned char isAttenuated;
@property(readonly, assign, nonatomic) unsigned char isSpot;
@property(assign, nonatomic) int lightIndex;	// @synthesize=_lightIndex
@property(assign, nonatomic) int lightingType;	// @synthesize=_lightingType
@property(assign, nonatomic) float linearAttenuation;	// @synthesize=_linearAttenuation
@property(assign, nonatomic) int linearAttenuationLoc;	// @synthesize=_linearAttenuationLoc
@property(assign, nonatomic) int normalizeLoc;	// @synthesize=_normalizeLoc
@property(assign, nonatomic) GLKVector3 normalizedSpotDirectionEye;	// @synthesize=_normalizedSpotDirectionEye
@property(assign, nonatomic) int normalizedSpotDirectionEyeLoc;	// @synthesize=_normalizedSpotDirectionEyeLoc
@property(assign, nonatomic) GLKVector4 position;	// @synthesize=_position
@property(assign, nonatomic) GLKVector4 positionEye;	// @synthesize=_positionEye
@property(assign, nonatomic) int positionEyeLoc;	// @synthesize=_positionEyeLoc
@property(assign, nonatomic) unsigned char positionEyeStale;	// @synthesize=_positionEyeStale
@property(assign, nonatomic) float quadraticAttenuation;	// @synthesize=_quadraticAttenuation
@property(assign, nonatomic) int quadraticAttenuationLoc;	// @synthesize=_quadraticAttenuationLoc
@property(assign, nonatomic) GLKVector4 specularColor;	// @synthesize=_specularColor
@property(assign, nonatomic) int specularLoc;	// @synthesize=_specularLoc
@property(assign, nonatomic) float spotCutoff;	// @synthesize=_spotCutoff
@property(assign, nonatomic) float spotCutoffDegrees;	// @synthesize=_spotCutoffDegrees
@property(assign, nonatomic) int spotCutoffLoc;	// @synthesize=_spotCutoffLoc
@property(assign, nonatomic) GLKVector3 spotDirection;	// @synthesize=_spotDirection
@property(assign, nonatomic) float spotExponent;	// @synthesize=_spotExponent
@property(assign, nonatomic) int spotExponentLoc;	// @synthesize=_spotExponentLoc
@property(retain, nonatomic) GLKEffectPropertyTransform* transform;	// @synthesize=_transform
+(void)setStaticMasksWithVshRoot:(id)vshRoot fshRoot:(id)root;
-(id)initWithTransform:(id)transform lightingType:(int)type firstLight:(unsigned char)light;
// declared property getter: -(GLKBigInt_s)allFshMasks;
// declared property getter: -(GLKBigInt_s)allVshMasks;
// declared property getter: -(GLKVector4)ambientColor;
// declared property getter: -(int)ambientLoc;
// declared property getter: -(int)ambientTermLoc;
-(void)bind;
// declared property getter: -(float)constantAttenuation;
// declared property getter: -(int)constantAttenuationLoc;
-(void)dealloc;
-(id)description;
// declared property getter: -(GLKVector4)diffuseColor;
// declared property getter: -(int)diffuseLoc;
-(void)dirtyAllUniforms;
// declared property getter: -(unsigned long long*)effectDirtyUniforms;
// declared property getter: -(unsigned char)enabled;
// declared property getter: -(unsigned char)firstLight;
-(bool)includeFshShaderTextForRootNode:(id)rootNode;
-(bool)includeVshShaderTextForRootNode:(id)rootNode;
-(void)initializeMasks;
// declared property getter: -(unsigned char)isAttenuated;
// declared property getter: -(unsigned char)isSpot;
// declared property getter: -(int)lightIndex;
// declared property getter: -(int)lightingType;
// declared property getter: -(float)linearAttenuation;
// declared property getter: -(int)linearAttenuationLoc;
// declared property getter: -(int)normalizeLoc;
// declared property getter: -(GLKVector3)normalizedSpotDirectionEye;
// declared property getter: -(int)normalizedSpotDirectionEyeLoc;
// declared property getter: -(GLKVector4)position;
// declared property getter: -(GLKVector4)positionEye;
// declared property getter: -(int)positionEyeLoc;
// declared property getter: -(unsigned char)positionEyeStale;
// declared property getter: -(float)quadraticAttenuation;
// declared property getter: -(int)quadraticAttenuationLoc;
// declared property setter: -(void)setAmbientColor:(GLKVector4)color;
// declared property setter: -(void)setAmbientLoc:(int)loc;
// declared property setter: -(void)setAmbientTermLoc:(int)loc;
// declared property setter: -(void)setConstantAttenuation:(float)attenuation;
// declared property setter: -(void)setConstantAttenuationLoc:(int)loc;
// declared property setter: -(void)setDiffuseColor:(GLKVector4)color;
// declared property setter: -(void)setDiffuseLoc:(int)loc;
// declared property setter: -(void)setEffectDirtyUniforms:(unsigned long long*)uniforms;
// declared property setter: -(void)setEnabled:(unsigned char)enabled;
// declared property setter: -(void)setFirstLight:(unsigned char)light;
-(void)setGLDefaults;
// declared property setter: -(void)setLightIndex:(int)index;
// declared property setter: -(void)setLightingType:(int)type;
// declared property setter: -(void)setLinearAttenuation:(float)attenuation;
// declared property setter: -(void)setLinearAttenuationLoc:(int)loc;
-(void)setNormalize:(unsigned char)normalize;
// declared property setter: -(void)setNormalizeLoc:(int)loc;
// declared property setter: -(void)setNormalizedSpotDirectionEye:(GLKVector3)eye;
// declared property setter: -(void)setNormalizedSpotDirectionEyeLoc:(int)loc;
// declared property setter: -(void)setPosition:(GLKVector4)position;
// declared property setter: -(void)setPositionEye:(GLKVector4)eye;
// declared property setter: -(void)setPositionEyeLoc:(int)loc;
// declared property setter: -(void)setPositionEyeStale:(unsigned char)stale;
// declared property setter: -(void)setQuadraticAttenuation:(float)attenuation;
// declared property setter: -(void)setQuadraticAttenuationLoc:(int)loc;
-(void)setShaderBindings;
// declared property setter: -(void)setSpecularColor:(GLKVector4)color;
// declared property setter: -(void)setSpecularLoc:(int)loc;
// declared property setter: -(void)setSpotCutoff:(float)cutoff;
// declared property setter: -(void)setSpotCutoffDegrees:(float)degrees;
// declared property setter: -(void)setSpotCutoffLoc:(int)loc;
// declared property setter: -(void)setSpotDirection:(GLKVector3)direction;
// declared property setter: -(void)setSpotExponent:(float)exponent;
// declared property setter: -(void)setSpotExponentLoc:(int)loc;
// declared property setter: -(void)setTransform:(id)transform;
// declared property getter: -(GLKVector4)specularColor;
// declared property getter: -(int)specularLoc;
// declared property getter: -(float)spotCutoff;
// declared property getter: -(float)spotCutoffDegrees;
// declared property getter: -(int)spotCutoffLoc;
// declared property getter: -(GLKVector3)spotDirection;
// declared property getter: -(float)spotExponent;
// declared property getter: -(int)spotExponentLoc;
// declared property getter: -(id)transform;
@end

