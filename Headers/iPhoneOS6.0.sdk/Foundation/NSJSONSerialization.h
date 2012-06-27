/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>
#import "Foundation-Structs.h"


@interface NSJSONSerialization : NSObject {
@private
	void* reserved[6];
}
+(id)JSONObjectWithData:(id)data options:(unsigned)options error:(id*)error;
+(id)JSONObjectWithStream:(id)stream options:(unsigned)options error:(id*)error;
+(id)allocWithZone:(NSZone*)zone;
+(id)dataWithJSONObject:(id)jsonobject options:(unsigned)options error:(id*)error;
+(BOOL)isValidJSONObject:(id)object;
+(int)writeJSONObject:(id)object toStream:(id)stream options:(unsigned)options error:(id*)error;
-(id)init;
@end

