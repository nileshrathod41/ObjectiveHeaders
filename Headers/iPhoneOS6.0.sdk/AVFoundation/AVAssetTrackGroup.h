/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVTrackGroup.h"

@class NSArray;

@interface AVAssetTrackGroup : AVTrackGroup {
@private
	id _assetComparisonToken;
	NSArray* _trackIDs;
}
-(id)init;
-(id)initWithAsset:(id)asset trackIDs:(id)ids;
-(id)_assetComparisonToken;
-(void)dealloc;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)trackIDs;
@end
