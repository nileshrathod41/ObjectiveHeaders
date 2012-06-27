/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPropertyDescription.h"
#import "CoreData-Structs.h"

@class NSString, NSFetchRequest;

@interface NSFetchedPropertyDescription : NSPropertyDescription {
@private
	void* _reserved5;
	void* _reserved6;
	NSFetchRequest* _fetchRequest;
	NSString* _lazyFetchRequestEntityName;
}
-(id)initWithCoder:(id)coder;
-(void)_createCachesAndOptimizeState;
-(unsigned)_propertyType;
-(void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(id)slots fetchRequests:(id)requests;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)fetchRequest;
-(BOOL)isEqual:(id)equal;
-(BOOL)isReadOnly;
-(BOOL)isTransient;
-(void)setFetchRequest:(id)request;
@end

