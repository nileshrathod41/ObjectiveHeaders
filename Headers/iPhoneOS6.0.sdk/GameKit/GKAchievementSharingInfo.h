/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKAchievementDescription, GKGame, GKAchievement, GKPlayer;

@interface GKAchievementSharingInfo : XXUnknownSuperclass {
@private
	GKAchievementDescription* _achievementDescription;
	GKGame* _game;
	GKPlayer* _player;
	GKAchievement* _achievement;
}
@property(retain, nonatomic) GKAchievement* achievement;	// @synthesize=_achievement
@property(retain, nonatomic) GKAchievementDescription* achievementDescription;	// @synthesize=_achievementDescription
@property(retain, nonatomic) GKGame* game;	// @synthesize=_game
@property(retain, nonatomic) GKPlayer* player;	// @synthesize=_player
-(id)initWithAchievement:(id)achievement forGame:(id)game player:(id)player;
// declared property getter: -(id)achievement;
// declared property getter: -(id)achievementDescription;
-(void)dealloc;
// declared property getter: -(id)game;
-(id)itemsForActivityType:(id)activityType;
// declared property getter: -(id)player;
// declared property setter: -(void)setAchievement:(id)achievement;
// declared property setter: -(void)setAchievementDescription:(id)description;
// declared property setter: -(void)setGame:(id)game;
// declared property setter: -(void)setPlayer:(id)player;
@end
