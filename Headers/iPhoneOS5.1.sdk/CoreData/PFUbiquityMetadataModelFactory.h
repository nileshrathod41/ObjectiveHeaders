/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataModelFactory : XXUnknownSuperclass {
}
+(void)addModelingToolUserInfoToEntity:(id)entity;
+(void)addModelingToolUserInfoToProperty:(id)property;
+(id)createSharedModel;
+(void)destroySharedModel;
+(id)newAttributeNamed:(id)named attributeType:(unsigned)type isOptional:(BOOL)optional isTransient:(BOOL)transient withDefaultValue:(id)defaultValue andMinValue:(id)value andMaxValue:(id)value7;
+(id)newEntityForName:(id)name;
+(id)newRelationshipNamed:(id)named withDestinationEntity:(id)destinationEntity andInverseRelationship:(id)relationship isOptional:(BOOL)optional isToMany:(BOOL)many andDeleteRule:(unsigned)rule;
+(id)sharedModel;
-(id)init;
-(void)dealloc;
@end
