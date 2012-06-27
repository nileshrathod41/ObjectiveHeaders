/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Social.framework/Social
 */

#import "Social-Structs.h"
#import "NSObject.h"


@protocol UISearchBarDelegate <NSObject>
@optional
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
@end

