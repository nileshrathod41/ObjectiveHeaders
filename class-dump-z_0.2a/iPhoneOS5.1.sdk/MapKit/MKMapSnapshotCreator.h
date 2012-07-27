/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MKMapViewDelegate.h"

@class NSMutableArray, UIImage, MKMapSnapshotRequest, NSLock, NSString;

@interface MKMapSnapshotCreator : XXUnknownSuperclass <MKMapViewDelegate> {
	UIImage* _lastSnapshot;
	NSString* _lastAttributionString;
	NSLock* _requestLock;
	NSMutableArray* _requests;
	MKMapSnapshotRequest* _servingRequest;
}
@property(retain, nonatomic) MKMapSnapshotRequest* servingRequest;	// @synthesize=_servingRequest
-(id)init;
-(id)_newSnapshotWithView:(id)view;
-(void)_processRequest;
-(void)_respondWithSnapshot;
-(void)createSnapShotWithCoordinate:(CADoublePoint)coordinate zoomLevel:(unsigned)level size:(CGSize)size handler:(id)handler;
-(void)createSnapShotWithCoordinate:(CADoublePoint)coordinate zoomLevel:(unsigned)level size:(CGSize)size requester:(id)requester context:(id)context;
-(void)dealloc;
-(void)didDisplaySnapShotWithCoordinate:(CADoublePoint)coordinate zoomLevel:(unsigned)level size:(CGSize)size;
-(void)flushRequestQueue;
-(id)recreateCurrentSnapshotWithRequester:(id)requester context:(id)context;
// declared property getter: -(id)servingRequest;
// declared property setter: -(void)setServingRequest:(id)request;
@end

