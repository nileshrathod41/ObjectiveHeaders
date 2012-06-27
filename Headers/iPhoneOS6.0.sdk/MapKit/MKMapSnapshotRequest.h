/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, MKMapSnapshotCreator, VKMapSnapshotCreator, NSString;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotRequest : XXUnknownSuperclass {
@private
	id _requester;
	id _context;
	CADoublePoint _coordinate;
	unsigned _zoomLevel;
	CGSize _size;
	UIImage* _image;
	NSString* _attributionString;
	MKMapSnapshotCreator* _delegate;
	VKMapSnapshotCreator* _snapshotCreator;
}
@property(retain, nonatomic) NSString* attributionString;	// @synthesize=_attributionString
@property(retain, nonatomic) id context;	// @synthesize=_context
@property(assign, nonatomic) CADoublePoint coordinate;	// @synthesize=_coordinate
@property(assign, nonatomic) MKMapSnapshotCreator* delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) UIImage* image;	// @synthesize=_image
@property(retain, nonatomic) id requester;	// @synthesize=_requester
@property(assign, nonatomic) CGSize size;	// @synthesize=_size
@property(assign, nonatomic) unsigned zoomLevel;	// @synthesize=_zoomLevel
// declared property getter: -(id)attributionString;
-(void)cancel;
// declared property getter: -(id)context;
// declared property getter: -(CADoublePoint)coordinate;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(id)description;
// declared property getter: -(id)image;
// declared property getter: -(id)requester;
// declared property setter: -(void)setAttributionString:(id)string;
// declared property setter: -(void)setContext:(id)context;
// declared property setter: -(void)setCoordinate:(CADoublePoint)coordinate;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setRequester:(id)requester;
// declared property setter: -(void)setSize:(CGSize)size;
// declared property setter: -(void)setZoomLevel:(unsigned)level;
// declared property getter: -(CGSize)size;
-(void)start;
// declared property getter: -(unsigned)zoomLevel;
@end

