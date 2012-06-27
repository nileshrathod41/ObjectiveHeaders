/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKGameCenterViewController.h"

@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController : GKGameCenterViewController {
@private
	id<GKAchievementViewControllerDelegate> _achievementDelegate;
}
@property(assign, nonatomic) id<GKAchievementViewControllerDelegate> achievementDelegate;	// @synthesize=_achievementDelegate
-(id)init;
// declared property getter: -(id)achievementDelegate;
-(void)dealloc;
-(void)notifyDelegateOnWillFinish;
// declared property setter: -(void)setAchievementDelegate:(id)delegate;
@end
