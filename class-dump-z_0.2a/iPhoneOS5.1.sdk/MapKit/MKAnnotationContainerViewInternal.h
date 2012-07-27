/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKUserLocationView, MKQuadTrie, NSMutableArray, MKAnnotationView, MKUserLocation, NSMutableSet, NSMapTable, MKMapTileView, UICalloutView;
@protocol MKAnnotation, MKAnnotationContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKAnnotationContainerViewInternal : XXUnknownSuperclass {
	MKMapTileView* mapTileView;
	MKQuadTrie* annotationsTrie;
	NSMutableSet* pendingAnnotations;
	NSMutableArray* managedAnnotations;
	NSMutableArray* annotationViews;
	NSMapTable* annotationsToViews;
	NSMapTable* reusableAnnotationViews;
	XXStruct_Yvvv9D visibleMapRect;
	NSMutableArray* searchResultPins;
	NSMutableArray* awaitingDropPins;
	UICalloutView* bubble;
	UICalloutView* calculateBubble;
	BOOL isAnimatingCallout;
	BOOL calloutNeedsReset;
	BOOL registeredForAddressBookChanges;
	MKAnnotationView* bubbleAnnotationView;
	MKAnnotationView* selectedAnnotationView;
	id<MKAnnotation> annotationToSelect;
	id<MKAnnotationContainerViewDelegate> delegate;
	MKAnnotationView* draggingAnnotationView;
	CGPoint mouseDownPoint;
	CGPoint draggingAnnotationViewCenter;
	unsigned mapType;
	BOOL clickedOnAnnotationView;
	BOOL didDragAnnotationView;
	BOOL animationsEnabled;
	MKUserLocation* userLocation;
	MKUserLocationView* userLocationView;
	BOOL didAddUserLocationView;
	int userLocationViewUpdateMode;
	int restoreUserLocationViewUpdateMode;
	float annotationViewsRotationRadians;
	CGAffineTransform mapTransform;
	Class calloutViewClass;
}
@end

