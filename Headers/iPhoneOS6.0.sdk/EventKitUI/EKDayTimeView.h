/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, NSTimer, EKCurrentTimeMarkerView;

@interface EKDayTimeView : XXUnknownSuperclass {
	UIView* _topContentView;
	UIView* _bottomContentView;
	unsigned _leftBorder : 1;
	unsigned _rightBorder : 1;
	BOOL _useLightText;
	double _highlightedHour;
	int _orientation;
	float _hourSize;
	float _designatorSize;
	EKCurrentTimeMarkerView* _timeMarker;
	NSTimer* _timeMarkerTimer;
@private
	float _hourHeight;
	float _timeWidth;
	BOOL _showsTimeMarker;
	int _hoursToPad;
}
@property(readonly, assign, nonatomic) float defaultHeight;
@property(assign, nonatomic) double highlightedHour;
@property(readonly, assign, nonatomic) float hourHeight;	// @synthesize=_hourHeight
@property(assign, nonatomic) int hoursToPad;	// @synthesize=_hoursToPad
@property(assign, nonatomic) BOOL showsLeftBorder;
@property(assign, nonatomic) BOOL showsRightBorder;
@property(assign, nonatomic) BOOL showsTimeMarker;	// @synthesize=_showsTimeMarker
@property(readonly, assign, nonatomic) float timeWidth;	// @synthesize=_timeWidth
@property(assign, nonatomic) BOOL usesLightText;	// @synthesize=_useLightText
+(void)_calculateWidthForOrientation:(int)orientation;
+(float)_hourWidthForOrientation:(int)orientation;
+(void)_invalidateWidth;
+(float)defaultHeightForOrientation:(int)orientation;
+(float)designatorSizeForOrientation:(int)orientation;
+(float)hourHeightForOrientation:(int)orientation;
+(float)hourSizeForOrientation:(int)orientation;
+(float)timeInsetForOrientation:(int)orientation;
+(float)timeWidthForOrientation:(int)orientation;
+(float)verticalPadding;
-(id)initWithFrame:(CGRect)frame;
-(void)_invalidateMarkerTimer;
-(void)_localeChanged;
-(float)_positionOfSecond:(int)second;
-(void)_startMarkerTimer;
-(void)_updateMarkerPosition;
-(void)dealloc;
// declared property getter: -(float)defaultHeight;
-(void)drawRect:(CGRect)rect forContentView:(id)contentView withHourRange:(NSRange)hourRange;
// declared property getter: -(double)highlightedHour;
// declared property getter: -(float)hourHeight;
// declared property getter: -(int)hoursToPad;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setHighlightedHour:(double)hour;
// declared property setter: -(void)setHoursToPad:(int)pad;
-(void)setOpaque:(BOOL)opaque;
-(void)setOrientation:(int)orientation;
// declared property setter: -(void)setShowsLeftBorder:(BOOL)border;
// declared property setter: -(void)setShowsRightBorder:(BOOL)border;
// declared property setter: -(void)setShowsTimeMarker:(BOOL)marker;
// declared property setter: -(void)setUsesLightText:(BOOL)text;
// declared property getter: -(BOOL)showsLeftBorder;
// declared property getter: -(BOOL)showsRightBorder;
// declared property getter: -(BOOL)showsTimeMarker;
-(CGSize)sizeThatFits:(CGSize)fits;
-(float)timeInset;
// declared property getter: -(float)timeWidth;
-(float)topPadding;
// declared property getter: -(BOOL)usesLightText;
-(void)willMoveToSuperview:(id)superview;
@end

