/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLSelectIntermediate.h"


__attribute__((visibility("hidden")))
@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {
@private
	BOOL _onlyFetchesAggregates;
}
-(id)generateSQLStringInContext:(id)context;
-(BOOL)onlyFetchesAggregates;
@end

