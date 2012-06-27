/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GKLeaderboardDataSource.h"

@class GKLeaderboardSection;

@interface InGameLeaderboardDataSource : GKLeaderboardDataSource {
@private
	GKLeaderboardSection* _dualSection;
}
@property(retain, nonatomic) GKLeaderboardSection* dualSection;	// @synthesize=_dualSection
-(BOOL)_hasAnyScoresInTableView:(id)tableView;
-(BOOL)allowDualLeaderboards;
-(void)dealloc;
-(void)didReloadSections:(id)sections;
// declared property getter: -(id)dualSection;
-(void)prepareSections;
// declared property setter: -(void)setDualSection:(id)section;
-(void)setShowControlSection:(BOOL)section;
-(BOOL)showControlSection;
-(void)willReloadSections:(id)sections;
@end

