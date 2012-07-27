/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSObject.h"


@protocol NSObject
-(id)autorelease;
-(Class)class;
-(BOOL)conformsToProtocol:(id)protocol;
-(id)debugDescription;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isKindOfClass:(Class)aClass;
-(BOOL)isMemberOfClass:(Class)aClass;
-(BOOL)isProxy;
-(id)performSelector:(SEL)selector;
-(id)performSelector:(SEL)selector withObject:(id)object;
-(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)retain;
-(unsigned)retainCount;
-(id)self;
-(Class)superclass;
-(NSZone*)zone;
@end

@interface NSObject <NSObject> {
	Class isa;
}
+(id)init;
+(id)_copyDescription;
+(BOOL)_isDeallocating;
+(BOOL)_tryRetain;
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
+(BOOL)allowsWeakReference;
+(id)autorelease;
+(Class)class;
+(BOOL)conformsToProtocol:(id)protocol;
+(id)copy;
+(id)copyWithZone:(NSZone*)zone;
+(void)dealloc;
+(id)debugDescription;
+(id)description;
+(void)doesNotRecognizeSelector:(SEL)selector;
+(void)finalize;
+(void)forwardInvocation:(id)invocation;
+(id)forwardingTargetForSelector:(SEL)selector;
+(unsigned)hash;
+(void)initialize;
+(/*function-pointer*/ void*)instanceMethodForSelector:(SEL)selector;
+(id)instanceMethodSignatureForSelector:(SEL)selector;
+(BOOL)instancesRespondToSelector:(SEL)selector;
+(BOOL)isAncestorOfObject:(id)object;
+(BOOL)isEqual:(id)equal;
+(BOOL)isFault;
+(BOOL)isKindOfClass:(Class)aClass;
+(BOOL)isMemberOfClass:(Class)aClass;
+(BOOL)isProxy;
+(BOOL)isSubclassOfClass:(Class)aClass;
+(void)load;
+(/*function-pointer*/ void*)methodForSelector:(SEL)selector;
+(id)methodSignatureForSelector:(SEL)selector;
+(id)mutableCopy;
+(id)mutableCopyWithZone:(NSZone*)zone;
+(id)new;
+(id)performSelector:(SEL)selector;
+(id)performSelector:(SEL)selector withObject:(id)object;
+(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
+(oneway void)release;
+(BOOL)resolveClassMethod:(SEL)method;
+(BOOL)resolveInstanceMethod:(SEL)method;
+(BOOL)respondsToSelector:(SEL)selector;
+(id)retain;
+(unsigned)retainCount;
+(BOOL)retainWeakReference;
+(id)self;
+(Class)superclass;
+(NSZone*)zone;
-(id)init;
-(id)_copyDescription;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)allowsWeakReference;
-(id)autorelease;
-(Class)class;
-(BOOL)conformsToProtocol:(id)protocol;
-(id)copy;
-(void)dealloc;
-(id)debugDescription;
-(id)description;
-(void)doesNotRecognizeSelector:(SEL)selector;
-(void)finalize;
-(void)forwardInvocation:(id)invocation;
-(id)forwardingTargetForSelector:(SEL)selector;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isFault;
-(BOOL)isKindOfClass:(Class)aClass;
-(BOOL)isMemberOfClass:(Class)aClass;
-(BOOL)isProxy;
-(/*function-pointer*/ void*)methodForSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(id)mutableCopy;
-(id)performSelector:(SEL)selector;
-(id)performSelector:(SEL)selector withObject:(id)object;
-(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
-(oneway void)release;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)retain;
-(unsigned)retainCount;
-(BOOL)retainWeakReference;
-(id)self;
-(Class)superclass;
-(NSZone*)zone;
@end

@interface NSObject (__NSIsKinds)
-(BOOL)isNSArray__;
-(BOOL)isNSData__;
-(BOOL)isNSDate__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSNumber__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSString__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
@end

@interface NSObject (__NSCFType)
-(unsigned long)_cfTypeID;
@end

