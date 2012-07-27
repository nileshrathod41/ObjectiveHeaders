/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class UITableViewCell;

@interface UITableViewRow : XXUnknownSuperclass <NSCoding> {
@private
	int _indentationLevel;
	UITableViewCell* _cell;
	float _height;
}
@property(retain, nonatomic) UITableViewCell* cell;	// @synthesize=_cell
@property(assign, nonatomic) float height;	// @synthesize=_height
@property(assign, nonatomic) int indentationLevel;	// @synthesize=_indentationLevel
+(id)row;
-(id)initWithCoder:(id)coder;
// declared property getter: -(id)cell;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(float)height;
// declared property getter: -(int)indentationLevel;
// declared property setter: -(void)setCell:(id)cell;
// declared property setter: -(void)setHeight:(float)height;
// declared property setter: -(void)setIndentationLevel:(int)level;
@end
