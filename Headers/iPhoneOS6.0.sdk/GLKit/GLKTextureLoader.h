/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, EAGLContext;

@interface GLKTextureLoader : XXUnknownSuperclass {
@private
	EAGLContext* _eaglContext;
	NSLock* _nsLock;
}
@property(retain) EAGLContext* eaglContext;	// @synthesize=_eaglContext
@property(retain) NSLock* nsLock;	// @synthesize=_nsLock
+(id)_textureWithTexture:(id)texture error:(id*)error;
+(id)commonCubeMapWithContentsOfFiles:(id)files options:(id)options error:(id*)error lock:(id)lock eaglContext:(id)context;
+(id)commonCubeMapWithContentsOfURL:(id)url options:(id)options error:(id*)error lock:(id)lock eaglContext:(id)context;
+(id)commonTextureWithCGImage:(CGImageRef)cgimage options:(id)options error:(id*)error lock:(id)lock eaglContext:(id)context;
+(id)commonTextureWithContentsOfData:(id)data options:(id)options error:(id*)error lock:(id)lock eaglContext:(id)context;
+(id)commonTextureWithContentsOfURL:(id)url options:(id)options error:(id*)error lock:(id)lock eaglContext:(id)context;
+(id)cubeMapWithContentsOfFile:(id)file options:(id)options error:(id*)error;
+(id)cubeMapWithContentsOfFiles:(id)files options:(id)options error:(id*)error;
+(id)cubeMapWithContentsOfURL:(id)url options:(id)options error:(id*)error;
+(id)lockAndSwitchContext:(id)context eaglContext:(id)context2;
+(id)textureWithCGImage:(CGImageRef)cgimage options:(id)options error:(id*)error;
+(id)textureWithContentsOfData:(id)data options:(id)options error:(id*)error;
+(id)textureWithContentsOfFile:(id)file options:(id)options error:(id*)error;
+(id)textureWithContentsOfURL:(id)url options:(id)options error:(id*)error;
+(void)unlockAndRestoreContext:(id)context eaglContext:(id)context2;
-(id)initWithSharegroup:(id)sharegroup;
-(void)cubeMapWithContentsOfFile:(id)file options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
-(void)cubeMapWithContentsOfFiles:(id)files options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
-(void)cubeMapWithContentsOfURL:(id)url options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
-(void)dealloc;
// declared property getter: -(id)eaglContext;
// declared property getter: -(id)nsLock;
// declared property setter: -(void)setEaglContext:(id)context;
// declared property setter: -(void)setNsLock:(id)lock;
-(void)textureWithCGImage:(CGImageRef)cgimage options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
-(void)textureWithContentsOfData:(id)data options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
-(void)textureWithContentsOfFile:(id)file options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
-(void)textureWithContentsOfURL:(id)url options:(id)options queue:(dispatch_queue_s*)queue completionHandler:(id)handler;
@end

