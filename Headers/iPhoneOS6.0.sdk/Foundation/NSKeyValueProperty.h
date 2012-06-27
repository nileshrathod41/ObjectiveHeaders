/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSCopying.h"

@class NSKeyValueContainerClass, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProperty : NSObject <NSCopying> {
@private
	NSKeyValueContainerClass* _containerClass;
	NSString* _keyPath;
}
-(id)_initWithContainerClass:(id)containerClass keyPath:(id)path propertiesBeingInitialized:(CFSetRef)initialized;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)dependentValueKeyOrKeysIsASet:(BOOL*)set;
-(Class)isaForAutonotifying;
-(id)keyPath;
-(id)keyPathIfAffectedByValueForKey:(id)key exactMatch:(BOOL*)match;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)keys;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)path;
-(void)object:(id)object didAddObservance:(id)observance recurse:(BOOL)recurse;
-(void)object:(id)object didRemoveObservance:(id)observance recurse:(BOOL)recurse;
-(void)object:(id)object withObservance:(id)observance didChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB)values;
-(BOOL)object:(id)object withObservance:(id)observance willChangeValueForKeyOrKeys:(id)keyOrKeys recurse:(BOOL)recurse forwardingValues:(XXStruct_OzJQfB*)values;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)keyPath;
@end

