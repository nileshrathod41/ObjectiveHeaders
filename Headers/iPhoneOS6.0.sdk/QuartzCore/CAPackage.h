/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CALayer;

@interface CAPackage : XXUnknownSuperclass {
@private
	CAPackageData* _data;
}
@property(readonly, assign, getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly, assign) CALayer* rootLayer;
+(id)packageWithContentsOfURL:(id)url type:(id)type options:(id)options error:(id*)error;
+(id)packageWithData:(id)data type:(id)type options:(id)options error:(id*)error;
-(void)_addClassSubstitutions:(id)substitutions;
-(id)_initWithContentsOfURL:(id)url type:(id)type options:(id)options error:(id*)error;
-(id)_initWithData:(id)data type:(id)type options:(id)options error:(id*)error;
-(void)_readFromArchiveData:(id)archiveData options:(id)options error:(id*)error;
-(void)dealloc;
-(void)foreachLayer:(id)layer;
// declared property getter: -(BOOL)isGeometryFlipped;
-(id)publishedObjectWithName:(id)name;
// declared property getter: -(id)rootLayer;
-(id)substitutedClasses;
-(Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)className originalClasses:(id)classes;
-(id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
@end

