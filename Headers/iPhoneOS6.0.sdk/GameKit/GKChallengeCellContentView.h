/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKPlayerCellContentView.h"
#import "GameKit-Structs.h"

@class GKChallenge, UIImage;

@interface GKChallengeCellContentView : GKPlayerCellContentView {
@private
	GKChallenge* _challenge;
	UIImage* _messageBubble;
	id _challengeAuxData;
}
@property(retain, nonatomic) GKChallenge* challenge;	// @synthesize=_challenge
@property(retain, nonatomic) id challengeAuxData;	// @synthesize=_challengeAuxData
@property(retain, nonatomic) UIImage* messageBubble;	// @synthesize=_messageBubble
+(id)challengeContentView;
+(float)defaultRowHeight;
+(int)lineCount;
+(void)loadPhotoForPlayer:(id)player completionHandler:(id)handler;
-(id)initWithNumberOfLines:(unsigned)lines;
-(void)adjustLineRects:(CGRect*)rects forLines:(id)lines inTextRect:(CGRect)textRect;
-(id)attributesForMessage:(id)message;
-(CGRect)bubbleRectForContentRect:(CGRect)contentRect;
// declared property getter: -(id)challenge;
// declared property getter: -(id)challengeAuxData;
-(id)composeLabelWithPlayer:(id)player message:(id)message highlighted:(BOOL)highlighted;
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)messageBubble;
-(CGPoint)originForLine:(unsigned)line forTextRect:(CGRect)textRect;
-(void)prepareForReuse;
-(id)quotedMessage;
// declared property setter: -(void)setChallenge:(id)challenge;
// declared property setter: -(void)setChallengeAuxData:(id)data;
// declared property setter: -(void)setMessageBubble:(id)bubble;
-(CGRect)textRectForContentRect:(CGRect)contentRect;
-(void)updateLineFormat;
-(void)updateLines;
@end

