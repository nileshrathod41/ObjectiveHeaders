/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreImage-Structs.h"

@class EnhancementHistogram;

__attribute__((visibility("hidden")))
@interface EnhancementCalculation : XXUnknownSuperclass {
@private
	CGPoint originalFaceColor;
	EnhancementHistogram* lumHist;
	EnhancementHistogram* rgbSumHist;
	EnhancementHistogram* satHist;
	EnhancementHistogram* borderHist;
	float exposureValue;
	float maxShadow;
	float minShadow;
	float exposureValueAtZeroShadow;
	float curvePercent;
	BOOL faceInputSet;
	float percentFaceChange;
}
@property(readonly, assign) EnhancementHistogram* borderHist;	// @synthesize
@property(readonly, assign) EnhancementHistogram* lumHist;	// @synthesize
@property(readonly, assign) CGPoint originalFaceColor;	// @synthesize
@property(readonly, assign) EnhancementHistogram* rgbSumHist;	// @synthesize
@property(readonly, assign) EnhancementHistogram* satHist;	// @synthesize
+(float)bestWarmthForI:(float)i q:(float)q percentChange:(float*)change;
-(id)init;
// declared property getter: -(id)borderHist;
-(unsigned long)curveCount;
-(CGPoint)curvePointAtIndex:(unsigned long)index;
-(void)dealloc;
-(void)downSampleHistogram:(id)histogram to:(unsigned)to storeIn:(float*)anIn;
-(id)faceBalanceStrength;
-(id)faceBalanceWarmth;
// declared property getter: -(id)lumHist;
// declared property getter: -(CGPoint)originalFaceColor;
-(void)printAnalysis;
-(void)printHistogram:(id)histogram downsampledTo:(unsigned)to;
-(void)printHistogramsDownsampledTo:(unsigned)to;
-(int)putShadowsAnalysisInto:(float*)into;
-(id)rawShadow;
// declared property getter: -(id)rgbSumHist;
// declared property getter: -(id)satHist;
-(void)setBorderHistogram:(id)histogram;
-(void)setCurvePercent:(float)percent;
-(void)setExposureValue:(float)value;
-(void)setFaceColorFromChromaI:(float)chromaI andChromaQ:(float)q;
-(void)setLuminanceHistogram:(id)histogram;
-(void)setRGBSumHistogram:(id)histogram;
-(void)setSaturationHistogram:(id)histogram;
-(void)setShadowsMin:(float)min max:(float)max zeroExposure:(float)exposure;
-(void)setupFaceColor:(id)color redIndex:(int)index greenIndex:(int)index3 blueIndex:(int)index4;
-(id)shadow;
-(id)vibrance;
@end

